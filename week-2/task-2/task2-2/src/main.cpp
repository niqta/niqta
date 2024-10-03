#include "BankAccount.hpp"

int main() {
    BankAccount myAccount("917");
    int choice;

    do {
        std::cout << "\n1. Пополнить счет\n2. Вывести средства\n3. Просмотреть баланс\n4. Выйти\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        if (choice == 1) {
            double amount;
            std::cout << "Сумма для пополнения: ";
            std::cin >> amount;
            myAccount.deposit(amount);
        } else if (choice == 2) {
            double amount;
            std::cout << "Сумма для вывода: ";
            std::cin >> amount;
            myAccount.withdraw(amount);
        } else if (choice == 3) {
            std::cout << "Баланс: " << myAccount.getBalance() << std::endl;
        }
    } while (choice != 4);

    std::cout << "Выход из программы." << std::endl;
    return 0;
}

