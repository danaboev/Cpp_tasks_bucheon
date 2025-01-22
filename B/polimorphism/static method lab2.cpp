#include <iostream>
#include <string>

class RATE_sum {
public:
    static float calculate(float practice, float points) {
        return practice + points; // Amaliy baho hamda oddiy bahoni qo'shish
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
        std::cout << "Talaba ismini kiriting: ";
        std::cin >> firstName;
        std::cout << "Talaba familiyasini kiriting: ";
        std::cin >> lastName;
        std::cout << "Guruhnu kiriting: ";
        std::cin >> group;
        std::cout << "Amaliyot bahoni kiriting: ";
        std::cin >> practice;
        std::cout << "Bahoni kiriting: ";
        std::cin >> points;

        performance = RATE_sum::calculate(practice, points); // Вычисляем успеваемость
    }

    void display() {
        std::cout << "Tanaba: " << firstName << " " << lastName << "\n"
                  << "Guruh: " << group << "\n"
                  << "O'zlashtirish: " << performance << std::endl;
    }
};

class Salaty_sum {
public:
    static float calculate(float salary, float bonus) {
        return salary + bonus; // oylik va qo'shimcha ustamani qo'shish
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
        std::cout << "Ishchini ismini kiriting: ";
        std::cin >> firstName;
        std::cout << "Ishchi familiaysi: ";
        std::cin >> lastName;
        std::cout << "Lavozim: ";
        std::cin >> position;
        std::cout << "Qo'shimcha oylik: ";
        std::cin >> bonus;
        std::cout << "Oylik: ";
        std::cin >> salary;

        totalSalary = Salaty_sum::calculate(salary, bonus); // Вычисляем зарплату
    }

    void display() {
        std::cout << "Ishchi: " << firstName << " " << lastName << "\n"
                  << "Lavozim: " << position << "\n"
                  << "Oylik: " << totalSalary << std::endl;
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

