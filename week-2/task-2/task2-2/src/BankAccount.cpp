#include "BankAccount.hpp"

BankAccount::BankAccount(const std::string& accNum) : accountNumber(accNum), balance(0.0) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Баланс пополнен: " << balance << std::endl;
    } else {
        std::cout << "Сумма депозита должна быть положительной!" << std::endl;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Выведено: " << amount << ". Остаток: " << balance << std::endl;
        } else {
            std::cout << "Недостаточно средств для вывода!" << std::endl;
        }
    } else {
        std::cout << "Сумма вывода должна быть положительной!" << std::endl;
    }
}

double BankAccount::getBalance() const {
    return balance;
}

