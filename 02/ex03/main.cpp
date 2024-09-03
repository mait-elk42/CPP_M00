/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:49:52 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/03 13:23:13 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a = Point(-5, -10);
	Point b = Point(30, 20);
	Point c = Point(50, 5);
	a = b;
	
	Point ptsrch = Point(30, 15);
	
	std::cout << bsp(a,b,c, ptsrch) << std::endl;
	return 0;
}