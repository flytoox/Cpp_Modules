/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:57 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/02 12:08:01 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float area(float x1, float y1, float x2, float y2, float x3, float y3) {
	float ret = (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0;
   return (ret < 0) ? ret * -1: ret;
}

bool bsp( Point const A, Point const B, Point const C, Point const P) {

	float	Xa, Xb, Xc, Xp;
	float	Ya, Yb, Yc, Yp;


	Xa = A.getX(), Xb = B.getX(), Xc = C.getX(), Xp = P.getX();
	Ya = A.getY(), Yb = B.getY(), Yc = C.getY(), Yp = P.getY();
	
	float ABC = area(Xa, Ya, Xb, Yb, Xc, Yc);
	float BCP = area(Xb, Yb, Xc, Yc, Xp, Yp);
	float CAP = area(Xc, Yc, Xa, Ya, Xp, Yp);
	float ABP = area(Xa, Ya, Xb, Yb, Xp, Yp);
	
	return (ABC == BCP + CAP + ABP && ABC != 0 && BCP != 0 && CAP != 0 && ABP != 0) ;
}
