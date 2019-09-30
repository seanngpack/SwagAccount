/*
    This is the header file for the BankAccount class.

    We can deposit, withdraw, and check the balance of the Bank Account.
    More funtionality to come in the future.
*/

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>

class BankAccount {
private:
    double m_balance;
    int m_pin;
    std::string m_firstName;
    std::string m_lastName;
    
public:
    BankAccount(double& balance, int& pin);
    BankAccount(double& balance, int& pin, std::string& firstName, std::string& lastName);
    ~BankAccount();

    double getBalance();
    
    void withdraw(double& amount);
    void deposit(double& amount);
};

#endif 