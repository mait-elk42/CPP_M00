/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:03:30 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/03 07:43:30 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
private:
	Fixed	const x;
	Fixed	const y;
public:
	Point();
	Point(const Point &tocopy);
	Point(const Fixed _x, const Fixed _y);
	~Point();

	Point&	operator=(const Point &tocopy);

	float	readx() const;
	float	ready() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);