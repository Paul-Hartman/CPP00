#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>


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
	_amount = initial_deposit;
}

Account::~Account( void ) {};

void	Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount < withdrawal)
		return (false);
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
	}
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

