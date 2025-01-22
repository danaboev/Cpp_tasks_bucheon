#include <iostream>
#include <iomanip> // Для std::setw и std::setprecision

int main() {
    double pi = 3.14159;
    std::cout << std::fixed << std::setprecision(2) << "Число Пи: " << pi << std::endl;

    int age;
    std::cout << "Введите ваш возраст: ";
    std::cin >> age;
    std::cout << "Ваш возраст: " << age << std::endl;

    return 0;
}

//// string

#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, C++!";
    
    // Длина строки
    std::cout << "Длина строки: " << myString.length() << std::endl;

    // Извлечение подстроки
    std::string sub = myString.substr(0, 5);
    std::cout << "Подстрока: " << sub << std::endl;

    // Поиск подстроки
    size_t pos = myString.find("C++");
    if (pos != std::string::npos) {
        std::cout << "'C++' найден на позиции: " << pos << std::endl;
    }

    return 0;
}