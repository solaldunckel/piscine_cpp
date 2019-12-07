/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 03:00:40 by sdunckel          #+#    #+#             */
/*   Updated: 2019/12/07 04:14:34 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if ((this->_amount - withdrawal >= 0) == false)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals" << this->_nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t	now = time(0);
 	tm		*ltm = localtime(&now);

	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	if (ltm->tm_mon < 10)
		std::cout << 0;
	std::cout << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << 0;
	std::cout << 1 + ltm->tm_mday;
	std::cout << "_";
	if (ltm->tm_hour < 10)
		std::cout << 0;
	std::cout << 1 + ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << 0;
	std::cout << 1 + ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << 0;
	std::cout << 1 + ltm->tm_sec;
	std::cout << "] ";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

Account::Account(void)
{
}
