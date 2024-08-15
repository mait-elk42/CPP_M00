/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:02:54 by mait-elk          #+#    #+#             */
/*   Updated: 2024/08/04 10:50:11 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account()
{
	(void)_accountIndex;
	(void)_amount;
	(void)_nbDeposits;
	(void)_nbWithdrawals;
}

Account::Account( int initial_deposit )
{
	(void)initial_deposit;
}
Account::~Account( void )
{
	
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
	
}

void	Account::_displayTimestamp( void )
{
	
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	return (0);
}

void	Account::makeDeposit( int deposit )
{
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (0);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	
}