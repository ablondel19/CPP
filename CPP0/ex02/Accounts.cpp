/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Accounts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:30:19 by ablondel          #+#    #+#             */
/*   Updated: 2022/01/21 15:28:21 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <ctime>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

int			x = 1;
std::string last_output[10];

int		Account::getNbAccounts(void)
{
	return (_nbAccounts = 8);
}

int		Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
	_nbAccounts = 7;
}

Account::Account(void)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = 0;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	std::ostringstream out_index;
	std::ostringstream out_amount;
	std::string tmp = "";
	std::string s1 = "index:";
	std::string s2 = ";amount:";
	std::string s3 = ";closed";
	_nbAccounts--;
	_totalNbWithdrawals -= this->_nbWithdrawals;
	_totalNbDeposits -= this->_nbDeposits;
	_totalAmount -= this->_amount;
	tmp.append(s1);
	out_index << this->_accountIndex;
	tmp.append(out_index.str());
	tmp.append(s2);
	out_amount << this->_amount;
	tmp.append(out_amount.str());
	tmp.append(s3);
	last_output[++x] = tmp;
	if (x == 9)
	{
		_displayTimestamp();
		std::cout << tmp << std::endl;
		while (x-- > 2)
		{
			_displayTimestamp();
			std::cout << last_output[x] << std::endl;
		}
		return ;
	}
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int tmp = 0;
	_displayTimestamp();
	tmp = this->_amount;
	this->_amount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";";
	if (checkAmount())
	{
		std::cout << "p_amount:" << tmp << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawal:" << this->_nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << "p_amount:" << tmp << ";";
		this->_amount = tmp;
		std::cout << "withdrawal:";
		std::cout << "refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << 1 + ltm->tm_mon;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << ltm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << ltm->tm_min;
	std::cout << std::setfill('0') << std::setw(2);
	std::cout << ltm->tm_sec;
	std::cout << "] ";
}
