/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:02:54 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/15 18:26:37 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	std::cout << "hello" << std::endl;
}

Account::Account( int initial_deposit )
{
	Account::_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ",amount:" << _amount << ";" << std::endl;
	// std::cout << "index:" << Account::_accountIndex << ",amount:" << _amount << ";created" << std::endl;
	// displayAccountsInfos();
	// std::cout << "created" << std::endl;
	(void)initial_deposit;
}
Account::~Account( void )
{
	// _displayTimestamp();
	// displayAccountsInfos();
	// std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ",total:" << Account::_totalAmount << ",deposits:" << Account::_totalNbDeposits << ",withdrawals:" << Account::_totalNbDeposits << ";" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
	Account::_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_amount -= withdrawal;
	_totalNbWithdrawals++;
	return (_amount);
}

int		Account::checkAmount( void ) const
{
	return (Account::_totalAmount);
}

void	Account::displayStatus( void ) const
{
	// _displayTimestamp();
	// std::cout << "index:" << Account::_accountIndex << ",amount:" << _amount << ";" << std::endl;
}