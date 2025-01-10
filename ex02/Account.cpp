#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>
#include <fstream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::tm *now_tm = std::localtime(&now);
	std::cout << "[" << (now_tm->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (now_tm->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << now_tm->tm_mday
	<< "_" << std::setw(2) << std::setfill('0') << now_tm->tm_hour
	<< std::setw(2) << std::setfill('0') << now_tm->tm_min 
	<< std::setw(2) << std::setfill('0') << now_tm->tm_sec << "] ";
}

Account::Account( void ) {};

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "created" << std::endl;
}

Account::~Account( void ) 
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "p_amount:" << _amount - deposit << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << _amount << ";"
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "p_amount:" << _amount + withdrawal << ";"
	<< "withdrawal:" << withdrawal << ";"
	<< "amount:" << _amount << ";"
	<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

