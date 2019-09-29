/*
    This is the main entrypoint to the application.

    Here we can perform banking maneuvers and make big money.
*/

#include <iostream>

#include "BankAccount.h"

int main() {
    std::unique_ptr<BankAccount> bank1 = std::make_unique<BankAccount>(500, 500);
    std::cout << bank1->getBalance() << std::endl;
    double firstDeposit = 500;
    bank1->deposit(firstDeposit);
    std::cout << bank1->getBalance() << std::endl;
}