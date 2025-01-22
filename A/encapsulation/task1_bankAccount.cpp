#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber; // Скрытый номер счета
    double balance;             // Скрытый баланс

public:
    BankAccount(std::string accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    // Метод для депозита
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    // Метод для получения баланса
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("123456789", 1000.0);
    account.deposit(500);
    std::cout << "Current Balance: " << account.getBalance() << std::endl; // Вывод: 1500
    return 0;
}