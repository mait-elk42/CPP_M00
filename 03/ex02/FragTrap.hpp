/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:29:28 by mait-elk          #+#    #+#             */
/*   Updated: 2024/09/10 17:53:13 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
		// ADD YOUR VARIABLES
public:
	FragTrap();
	FragTrap(std::string Name);
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &copy);
	void		attack(const std::string& target);
	void		guardGate();
	void		highFivesGuys( void );
};
