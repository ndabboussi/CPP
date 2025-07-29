#include "Account.hpp"

int	Account::_nbAccounts = 0;
// static int	_totalAmount = 0;
// static int	_totalNbDeposits = 0;
// static int	_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts 
				<< ";amount:" << initial_deposit
				<< ";created" << std::endl;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	// _totalAmount++;
	// _totalNbDeposits++;
	// _totalNbWithdrawals++;
	return;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";closed" << std::endl;
	return;
}

void	Account::_displayTimestamp( void )
{
	time_t	now;
	time(&now);
	std::cout << localtime(&now);

}

	// std::time_t time = std::time(0); 
	// std::tm *now = std::localtime(&time);
	// std::cout << "[" << (now->tm_year + 1900) << std::setfill('0') << std::setw(2) << (now->tm_mon + 1)
	// 		  << std::setfill('0') << std::setw(2) << now->tm_mday << "_"
	// 		  << std::setfill('0') << std::setw(2) << now->tm_hour
	// 		  << std::setfill('0') << std::setw(2) << now->tm_min
	// 		  << std::setfill('0') << std::setw(2) << now->tm_sec << "] ";


//[19920104_091532]

// int	Account::getNbAccounts( void )
// {

// }

// int	Account::getTotalAmount( void )
// {

// }

// int	Account::getNbDeposits( void )
// {

// }

// int	Account::getNbWithdrawals( void )
// {

// }

// void	Account::displayAccountsInfos( void )
// {

// }

// void	Account::makeDeposit( int deposit )
// {

// }

// bool	Account::makeWithdrawal( int withdrawal )
// {

// }

// int		Account::checkAmount( void ) const
// {

// }

// void	Account::displayStatus( void ) const
// {

// }

