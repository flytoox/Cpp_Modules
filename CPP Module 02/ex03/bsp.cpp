/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:16:57 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/01 21:37:44 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const A, Point const B, Point const C, Point const P) {

	float	Xa, Xb, Xc, Xp;
	float	Ya, Yb, Yc, Yp;


	Xa = A.getX(), Xb = B.getX(), Xc = C.getX(), Xp = P.getX();
	Ya = A.getY(), Yb = B.getY(), Yc = C.getY(), Yp = P.getY();
	
	float	ABP, BCP, CAP, ABC;
	
	ABP = (Xb - Xa) * (Yp - Ya) - (Yb - Ya) * (Xp - Xa);
	BCP = (Xc - Xb) * (Yp - Yb) - (Yc - Yb) * (Xp - Xb);
	CAP = (Xa - Xc) * (Yp - Yc) - (Ya - Yc) * (Xp - Xc);
	ABC = (Xb - Xa) * (Yc - Ya) - (Yb - Ya) * (Xc - Xa);
	
	return (ABP < 0 && BCP < 0 && CAP < 0) || (ABP > 0 && BCP > 0 && CAP > 0) ;
	
}