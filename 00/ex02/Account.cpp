/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:02:54 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/24 15:21:01 by mait-elk         ###   ########.fr       */
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
	
}

Account::Account( int initial_deposit )
{
	Account::_amount = initial_deposit;
	Account::_totalAmount += Account::_amount;
	Account::_accountIndex = Account::_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ",amount:" << Account::_amount << ";created" << std::endl;
	(void)initial_deposit;
}
Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ",amount:" << Account::_amount << ";closed" << std::endl;
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
	std::cout << "accounts:" << Account::_nbAccounts << ",total:" << Account::_totalAmount << ",deposits:" << Account::_totalNbDeposits << ",withdrawals:" << Account::_totalNbDeposits << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t			now;
	tm				*time_info;
	int				y,m,d, hour,min,sec;

	now = time(NULL);
	time_info = localtime(&now);
	y = time_info->tm_year;
	m = time_info->tm_mon;
	d = time_info->tm_mday;
	hour = time_info->tm_hour % 12;
	min = time_info->tm_min;
	sec = time_info->tm_sec;

	std::cout << "[" << std::flush;
	std::cout << std::to_string(y + 1900);
	if (m < 10)
		std::cout << "0" << m<< std::flush;
	else
		std::cout << m;
	if (d < 10)
		std::cout << "0" << d<< std::flush;
	else
		std::cout << d;
	std::cout << "_" << std::flush;
	if (hour < 10)
		std::cout << "0" << hour<< std::flush;
	else
		std::cout << hour;
	if (min < 10)
		std::cout << "0" << min<< std::flush;
	else
		std::cout << min;
	if (sec < 10)
		std::cout << "0" << sec<< std::flush;
	else
		std::cout << sec;
	std::cout << "] " << std::flush;
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
	Account::_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";deposit:" << deposit << ";amount:" << Account::_amount + deposit << ";nb_deposits:" << Account::_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_amount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal <= Account::_amount)
	{
		Account::_nbWithdrawals++;
		std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount - withdrawal << ";nb_deposits:" << Account::_nbDeposits << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		return (true);
	}
	std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount << ";withdrawal:refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	return (Account::_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";amount:" << _amount << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}