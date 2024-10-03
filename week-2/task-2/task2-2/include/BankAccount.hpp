#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNum);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
};

#endif

