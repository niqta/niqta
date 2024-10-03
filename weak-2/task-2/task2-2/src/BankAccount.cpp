#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber; // Номер счета
    double balance; // Баланс

public:
    // Конструктор
    BankAccount(const std::string& accNum) : accountNumber(accNum), balance(0.0) {}

    // Метод для depositing средств
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Пополнение счета прошло успешно! Пополнение баланса: " << balance << std::endl;
        } else {
            std::cout << "Сумма депозита должна быть положительной!" << std::endl;
        }
    }

    // Метод для withdrawing средств
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                std::cout << "Вывод средств прошел успешно! Пополнение баланса: " << balance << std::endl;
            } else {
                std::cout << "Недостаточно средств для вывода!" << std::endl;
            }
        } else {
            std::cout << "Сумма вывода должна быть положительной!" << std::endl;
        }
    }

    // Метод для получения текущего баланса
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Пример использования класса BankAccount
    BankAccount myAccount("123456789");

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(400.0); // Отказ из-за недостатка средств
    std::cout << "Окончательный баланс: " << myAccount.getBalance() << std::endl;

    return 0;
}

