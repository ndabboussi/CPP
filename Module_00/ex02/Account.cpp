#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts 
				<< ";amount:" << initial_deposit
				<< ";created" << std::endl;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	return;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
	return;
}

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(0); 
	std::tm *now = std::localtime(&time);

	std::cout << "[" << (now->tm_year + 1900) << std::setfill('0') 
			<< std::setw(2) << (now->tm_mon + 1)
			<< std::setw(2) << now->tm_mday << "_"
			<< std::setw(2) << now->tm_hour
			<< std::setw(2) << now->tm_min
			<< std::setw(2) << now->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals
			<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals
			<< std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex
		<< ";p_amount:" << _amount
		<< ";deposit:" << deposit;

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	std::cout << ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" <<_accountIndex
		<< ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_totalAmount -=withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	return true;
}
