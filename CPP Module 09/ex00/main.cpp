/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 22:03:06 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/09 17:37:20 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#define DateError throw std::invalid_argument("Error: invalid date format")
#define ValueError throw std::invalid_argument("Error: invalid value format")
#define NoDataError throw std::invalid_argument("Error: no data found")

void checkDataForm(std::string &s) {
    if (s.size() != 10)
        DateError;
    for (int i = 0; i < 10; i++) {
        if (i == 4 || i == 7) {
            if (s[i] != '-')
                DateError;
        } else
            if (!std::isdigit(s[i]))
                DateError;
    }
    int year, month, day;
    year = std::atoi(s.substr(0, 4).c_str());
    month = std::atoi(s.substr(5, 2).c_str());
    day = std::atoi(s.substr(8, 2).c_str());
    bool has30 = month == 4 || month == 6 || month == 9 || month == 11;
    if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > 29) || (has30 && day > 30))
        DateError;
    if (((year % 100 == 0 && year % 400) || (year % 100 && year % 4)) && month == 2 && day > 28)
        DateError;
}

void checkValueForm(std::string &s) {
    if (s == ".")
        ValueError;
    if (std::count(s.begin(), s.end(), '.') > 1)
        ValueError;
    for (size_t i = 0; i < s.size(); i++) {
        if (!std::isdigit(s[i]) && s[i] != '.')
            ValueError;
    }
}

void    getData(std::map<std::string, double> &btc) {
    std::ifstream file("data.csv");
    if (!file.is_open()) {
        std::cout << "Error: data.csv not found" << std::endl;
        exit(1);
    }
    std::string line;
    int lineNumber = 0;
    while (std::getline(file, line)) {
        lineNumber++;
        if (lineNumber == 1 && line == "date,exchange_rate")
            continue;
        std::stringstream ss(line);
        std::string s, date, value;
        try {
            while (std::getline(ss, s, ',')) {
                if (date.empty())
                    date = s;
                else if (value.empty())
                    value = s;
                else
                    throw std::invalid_argument("Error: invalid line format");
            }
            checkDataForm(date), checkValueForm(value);
            double val = strtod(value.c_str(), NULL);
            if (val == INFINITY)
                ValueError;
            btc[date] = val;
        } catch (std::exception &e) {
            std::cerr << e.what() << " on line number " << lineNumber << std::endl;
            exit(1);
        }
    }
    if (btc.empty()) {
        std::cerr << "Error: no valid data found in data.csv" << std::endl;
        exit(1);
    }
    
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }
    std::map<std::string, double> btc;
    getData(btc);
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error: file not found" << std::endl;
        return 1;
    }
    std::string line;
    std::getline(file, line);
    if (line != "date | value") {
        std::cerr << "Error: invalid file format on the first line" << std::endl;
        return 1;
    }
    while (std::getline(file, line)) {
        std::stringstream iss(line);
        std::string date, tmp, value;
        if (!(iss >> date >> tmp >> value) || tmp != "|" || date.empty() || value.empty()) {
            std::cerr << "Error: invalid line format, expected format \"date | value\"" << std::endl;
            continue;
        }
        if (iss >> tmp) {
            std::cerr << "Error: invalid line format, expected format \"date | value\"" << std::endl;
            continue;
        }
        try {
            checkDataForm(date), checkValueForm(value);
            double val = strtod(value.c_str(), NULL);
            std::map<std::string, double>::iterator it = btc.lower_bound(date);
            if (it->first != date) {
                if (it == btc.begin())
                    NoDataError;
                it--;
            }
            double newVal = it->second * val;
            if (val > 1000 || val < 0 || newVal == INFINITY)
                ValueError;
            std::cout << date << " => " << val << " => " << newVal << std::endl;
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}