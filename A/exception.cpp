#include <iostream>
#include <exception>
///Пример: создание собственного класса исключения
// Определение собственного класса исключения
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Произошла моя собственная ошибка!";
    }
};

int main() {
    try {
        throw MyException();  // Генерация исключения
    } catch (const MyException& e) {
        std::cout << e.what() << std::endl;  // Обработка исключения
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;  // Обработка других стандартных исключений
    }
    
    return 0;
}


//Структура обработки исключений
try {
    // Код, который может вызвать исключение
    int x = 10;
    int y = 0;
    if (y == 0) {
        throw std::runtime_error("Ошибка: деление на ноль!"); // Генерация исключения
    }
    int result = x / y;  // Этот код не будет выполнен
} catch (const std::runtime_error& e) {
    // Обработка исключения
    std::cout << "Обработано исключение: " << e.what() << std::endl;
} catch (const std::exception& e) {
    // Обработка других стандартных исключений
    std::cout << "Обработано другое исключение: " << e.what() << std::endl;
}

/*Объяснение структуры
try блок: Содержит код, который может вызвать исключение (например, деление на ноль).
throw: В случае возникновения ошибки (деление на ноль) генерируется исключение с помощью throw.
catch блок: При возникновении исключения управление передается в соответствующий catch блок, где происходит обработка ошибки. В данном случае, выводится сообщение об ошибке.*/