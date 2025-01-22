#include<iostream>
#include <string>

using namespace std;

class student{
private:
	string name;
	string surname;
	string group;
	float practice;
	float point;
	float perfomance;

public:
	student(float p1, float p2) : point(p1), practice(p2) {}

	float calculate() {
		perfomance = point + practice;
		//cout << "\nBahongizni kiriting: " << perfomance;
		return perfomance;
	}
	void input() {
		cout << "Yoshingizni kiriting: ";
		cin >> name;									//
		cout << "Famaliyani kiriting: ";
		cin >> surname;
		cout << "Amaliyotdan bohongizni kiriting";
		cin >> practice;
		cout << "Bahongizni kiriting: ";
		cin >> point;
		cout << "Guruhingizni kiriting: ";
		cin >> group;
	}

	
	void display() {
	cout << "\n\n\nSalom, Sizning ismingiz " << name << endl << "\nFamiliyangiz " << surname << endl<< "\nSizni guruhingiz " << group << endl<< calculate() << endl;
	}
	
};

int main() {
	student rate;
	rate.input();
	rate.display();
	//rates.calculate();


	return 0;
}
/*
 ��2
//class worker/
������� ����� WORKER
���� ��� 
���� �������
���� ���������
���� �����
���� ������
���� ���������� �����

����� � ������ ����������� � ��������� ������� � 
������� ���������� �� ���� ���������� �����

*/ 