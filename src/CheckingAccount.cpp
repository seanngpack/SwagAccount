/*
    This is the CheckingAccount class

    We can deposit, withdraw, and check the balance of the Checking Account.
    More funtionality to come in the future.
*/

#include <iostream>
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double& balance, int& pin, int& interestRate)
: BankAccount::BankAccount(balance, pin), m_interestRate(interestRate)
{
    std::cout << "initialized the checking account default" << std::endl;
}

CheckingAccount::~CheckingAccount()
{
    std::cout << "destroying checking account..." << std::endl;
}


 