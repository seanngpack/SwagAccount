/*
    This is the header file for the BankAccount class.

    We can deposit, withdraw, and check the balance of the Bank Account.
    More funtionality to come in the future.
*/

#include "BankAccount.h"

BankAccount::BankAccount(double& balance, int& pin)
: m_balance(balance), m_pin(pin), m_firstName(""), m_lastName("")
{
    std::cout << "initialized the BankAccount default" << std::endl;
}

BankAccount::BankAccount(double& balance, int& pin, std::string& firstName, std::string& lastName)
: m_balance(balance), m_pin(pin), m_firstName(firstName), m_lastName(lastName)
{
    std::cout << "initialized the BankAccount" << std::endl;
}

BankAccount::~BankAccount()
{
    std::cout << "destroying bank account..." << std::endl;
}

double BankAccount::getBalance() {
    return m_balance;
}

void BankAccount::withdraw(double& amount) {
    m_balance -= amount;    
}

void BankAccount::deposit(double& amount) {
    m_balance += amount;
}

 