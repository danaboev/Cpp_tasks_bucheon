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
		//cout << "\nYour rate: " << perfomance;
		return perfomance;
	}
	void input() {
		cout << "Enter your name: ";
		cin >> name;									//
		cout << "Enter your surname: ";
		cin >> surname;
		cout << "Enter your rate os practice ";
		cin >> practice;
		cout << "Enter your rate of points: ";
		cin >> point;
		cout << "Enter your group: ";
		cin >> group;
	}

	
	void display() {
	cout << "\n\n\Your name is " << name << endl << "\nYour surname is " << surname << endl<< "\nYour group is " << group << endl<< calculate() << endl;
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
 ËÐ2

ñîçäàåì êëàññ WORKER
ïîëå ÈÌß 
ïîëå ÔÀÌÈËÈß
ïîëå ÄÎËÆÍÎÑÒÜ
ïîëå ÎÊËÀÄ
ïîëå ÏÐÅÌÈß
ïîëå ÇÀÐÀÁÎÒÍÀß ÏËÀÒÀ

ÎÊËÀÄ è ÏÐÅÌÈß âû÷èñëÿåòñÿ â îòäåëüíîì ôóíêöèè è 
âûâîäèò ðåçóëüòàòû íà ïîëå ÇÀÐÀÁÎÒÍÀß ÏËÀÒÀ

*/ 