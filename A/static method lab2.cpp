#include <iostream>
#include <string>

class RATE_sum {
public:
    static float calculate(float practice, float points) {
        return practice + points; // Сумма практики и баллов
    }
};

class STUDENT {
private:
    std::string firstName;
    std::string lastName;
    std::string group;
    float practice;
    float points;
    float performance;

public:
    void input() {
        std::cout << "Введите имя студента: ";
        std::cin >> firstName;
        std::cout << "Введите фамилию студента: ";
        std::cin >> lastName;
        std::cout << "Введите группу: ";
        std::cin >> group;
        std::cout << "Введите баллы практики: ";
        std::cin >> practice;
        std::cout << "Введите баллы: ";
        std::cin >> points;

        performance = RATE_sum::calculate(practice, points); // Вычисляем успеваемость
    }

    void display() {
        std::cout << "Студент: " << firstName << " " << lastName << "\n"
                  << "Группа: " << group << "\n"
                  << "Успеваемость: " << performance << std::endl;
    }
};

class Salaty_sum {
public:
    static float calculate(float salary, float bonus) {
        return salary + bonus; // Сумма оклада и премии
    }
};

class WORKER {
private:
    std::string firstName;
    std::string lastName;
    std::string position;
    float bonus;
    float salary;
    float totalSalary;

public:
    void input() {
        std::cout << "Введите имя сотрудника: ";
        std::cin >> firstName;
        std::cout << "Введите фамилию сотрудника: ";
        std::cin >> lastName;
        std::cout << "Введите должность: ";
        std::cin >> position;
        std::cout << "Введите премию: ";
        std::cin >> bonus;
        std::cout << "Введите оклад: ";
        std::cin >> salary;

        totalSalary = Salaty_sum::calculate(salary, bonus); // Вычисляем зарплату
    }

    void display() {
        std::cout << "Сотрудник: " << firstName << " " << lastName << "\n"
                  << "Должность: " << position << "\n"
                  << "Заработная плата: " << totalSalary << std::endl;
    }
};

int main() {
    STUDENT student;
    student.input();
    student.display();

    WORKER worker;
    worker.input();
    worker.display();

    return 0;
}

