
class BankAccount {
private:
    double balance; // Скрытый член класса

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount; // Изменение состояния через метод
        }
    }

    double getBalance() const {
        return balance; // Доступ к данным через метод
    }
};