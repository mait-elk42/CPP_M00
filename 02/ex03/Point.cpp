/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:09:11 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/03 10:28:43 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0)) {
	
}

Point::Point(const Point &tocopy) : x(tocopy.x), y(tocopy.y) {
	
}

Point::Point(const Fixed _x, const Fixed _y) : x(_x), y(_y) {
	
}

Point::~Point() {
	
}

Point&	Point::operator=(const Point& tocopy) {
	(void)tocopy;
	return (*this);
}

float	Point::readx() const {
	return (this->x.toFloat());
}

float	Point::ready() const {
	return (this->y.toFloat());
}