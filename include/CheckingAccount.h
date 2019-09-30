/*
    This is the header file for the CheckingAccount class.

    Inherits from the BankAccount class.
*/

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

// #include <iostream>
#include "BankAccount.h"

class CheckingAccount: public BankAccount {
private:
    int m_interestRate;
public:
    CheckingAccount(double& balance, int& pin, int& interestRate);
    ~CheckingAccount();
};

#endif 