/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:00:43 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/03 16:35:08 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	Triangle_Area(Point const a, Point const b, Point const c)
{
	float tarea = 
		(
				a.readx() * (b.ready() - c.ready())
			+
				b.readx() * (c.ready() - a.ready())
			+
				c.readx() * (a.ready() - b.ready())
		)
			/
				2.0f;
	if (tarea < 0)
		return (-tarea);
	return (tarea);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	const float total_area = Triangle_Area(a, b, c);
	const float t1 = Triangle_Area(point, a, c);
	const float t2 = Triangle_Area(point, c, b);
	const float t3 = Triangle_Area(point, a, b);

	return (total_area == (t1 + t2 + t3));
}
