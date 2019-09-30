/*
    This is the main entrypoint to the application.

    Here we can perform banking maneuvers and make big money.
*/

#include <iostream>

#include "BankAccount.h"
#include "CheckingAccount.h"

void makeBank() {
    double balance = 500;
    int pin = 0215;
    double firstDeposit = 500;

    std::unique_ptr<BankAccount> bank1 = std::make_unique<BankAccount>(balance, pin);
    std::cout << bank1->getBalance() << std::endl;
    bank1->deposit(firstDeposit);
    std::cout << bank1->getBalance() << std::endl;
}

void makeCheck() {
    double balance = 500;
    int pin = 0215;
    int interest = 5;
    double firstDeposit = 500;
    
    std::unique_ptr<CheckingAccount> bank2 = std::make_unique<CheckingAccount>(balance, pin, interest);
    bank2->deposit(firstDeposit);
    std::cout << bank2->getBalance() << std::endl;
}

int main() {
    makeBank();
    makeCheck();
    
}