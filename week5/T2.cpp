#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date() {
        day = 0;
        month = 0;
        year = 0;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void input() {
        cout << "Enter date, month, year: ";
        cin >> day >> month >> year;
    }

    Date operator++();

    void display() {
        cout << day << " " << month << " " << year << endl;
    }
};

Date Date::operator++() {
    Date temp;
	temp.day=day;
	temp.month=month;
	temp.year=year;
    temp.day++;

    
    if (temp.month == 1 || temp.month == 3 || temp.month == 5 ||temp.month == 7 || temp.month == 8 || temp.month == 10 ||temp.month == 12) {

        if (temp.day > 31) {
            temp.day = 1;
            temp.month++;
        }
    }

  
    else if (temp.month == 2) {
        if (temp.day > 28) {
            temp.day = 1;
            temp.month++;
        }
    }


    else {
        if (temp.day > 30) {
            temp.day = 1;
            temp.month++;
        }
    }

    
    if (temp.month > 12) {
        temp.month = 1;
        temp.year++;
    }

    
    day = temp.day;
    month = temp.month;
    year = temp.year;

    return temp;
}

int main() {
    Date d1, d2;

    d1.input();

   ++d1;

    cout << "Next date: ";
    d1.display();

    return 0;
}

