/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <houaslam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:00:18 by houaslam          #+#    #+#             */
/*   Updated: 2023/07/13 09:16:19 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0; 

//Time stamps
void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *time;

    // now = time(0);
    time = localtime(&now);
    std::cout << "[";
    std::cout << 1900 + time->tm_year;
    std::cout << 1 + time->tm_mon;
    std::cout << time->tm_mday;
    std::cout << "_";
    std::cout << time->tm_hour;
    std::cout << time->tm_min;
    std::cout << time->tm_sec;
    std::cout << "] ";
}

//destructore and constructore
Account::~Account(void)
{
    _nbAccounts--;
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts << ";";
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "closed\n";
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = 0;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _accountIndex = _nbAccounts-1;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "created\n";
}

// get functions
int  Account::getNbAccounts( void )
{
    return(_nbAccounts);
}

int  Account::getTotalAmount( void )
{
    return(_totalAmount);
}

int  Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}

int  Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

// dispaly functions
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout << "amount:" <<  _amount << ";";
    std::cout << "deposits:" <<  _nbDeposits << ";";
    std::cout << "withdrawals:" <<  _nbWithdrawals << "\n";
}

void  Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" <<  getNbAccounts() << ";";
    std::cout << "total:" <<  getTotalAmount() << ";";
    std::cout << "deposits:" <<  getNbDeposits() << ";";
    std::cout << "withdrawals:" <<  getNbWithdrawals() << "\n";
    _totalAmount = 0;
}

// make functions
bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    checkAmount();
    if (_amount < withdrawal)
    {
        std::cout << "refused\n";
        _totalAmount += _amount;
        return(false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals += _nbWithdrawals;
    std::cout <<  withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" <<  _amount << ";";
    _totalAmount += _amount;
    std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
    return(true);
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";";
    std::cout << "p_amount:" <<  _amount << ";";
    _nbDeposits++;
    _totalNbDeposits += _nbDeposits;
    std::cout << "deposit:" <<  deposit << ";";
    _amount += deposit;
    std::cout << "amount:" <<  _amount << ";";
    _totalAmount += _amount;
    std::cout << "nb_deposits:" <<  1 << "\n";
}

// check function
int		Account::checkAmount( void ) const
{
    return (0);
}

