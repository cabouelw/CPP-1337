/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabouelw <cabouelw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:21:37 by cabouelw          #+#    #+#             */
/*   Updated: 2021/10/29 20:38:44 by cabouelw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>

char		buf[80];
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	time_t     now;
	struct tm	ts;

	if (!_nbAccounts)
	{
		time(&now);
		ts = *localtime(&now);
		strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &ts);
	}
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	std::cout << "[" << buf << "] index:" << _accountIndex
		<< ";amount:" << initial_deposit << ";created\n";
}

Account::~Account(void)
{
	std::cout << "[" << buf << "] index:" << _accountIndex << ";amount:" << _amount << ";closed";
	if (_accountIndex)
		std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	std::cout << "[" << buf << "] index:" << _accountIndex << ";p_amount:" << _amount <<
		";deposit:" << deposit << ";amount:" << (_amount + deposit) << ";nb_deposits:" << _nbDeposits << "\n";
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount <= withdrawal)
	{
		std::cout << "[" << buf << "] index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return (false);
	}
	_nbWithdrawals++;
	std::cout << "[" << buf << "] index:" << _accountIndex <<
		";p_amount:" << _amount << ";withdrawal:" << withdrawal <<
			";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (_amount);
}
void	Account::displayStatus( void ) const
{
	std::cout << "[" << buf << "] index:" << _accountIndex << ";amount:" 
		<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

int  Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "[" << buf << "] accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:"<< getNbWithdrawals() << std::endl;
}