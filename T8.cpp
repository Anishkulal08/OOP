#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name, regno;
    int year, semester;
    int m1, m2, m3, m4, m5;
    int total;
    float average;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Registration Number: ";
    cin >> regno;

    cout << "Enter Year of Joining: ";
    cin >> year;

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter marks in 5 subjects:" << endl;
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 61)
        grade = 'C';
    else if (average >= 51)
        grade = 'D';
    else if (average >= 41)
        grade = 'E';
    else
        grade = 'F';

    cout << "\n";
    cout << "-------------------------------------------------------------" << endl;
    cout << "\n";
    cout << setw(45) << "Score Card for Student: " << name << endl;
    cout << "\n";

    cout << "Registration Number: " << regno;
    cout << setw(25) << "Semester: " << semester;
    cout << setw(10) << "Year: " << year << endl;

    cout << "\nGrade Assigned: " << grade << endl;
    cout << "\n";

    cout << setw(8) << "Serial"
         << setw(25) << "Subject Name"
         << setw(25) << "Marks Scored" << endl;

    cout << setw(8) << "No."
         << setw(25) << ""
         << setw(25) << "(out of 100)" << endl;

    cout << "-------------------------------------------------------------" << endl;

    cout << setw(8) << "1"
         << setw(25) << "Object Oriented Programming"
         << setw(25) << m1 << endl;

    cout << setw(8) << "2"
         << setw(25) << "DBMS"
         << setw(25) << m2 << endl;

    cout << setw(8) << "3"
         << setw(25) << "Research methodology"
         << setw(25) << m3 << endl;

    cout << setw(8) << "4"
         << setw(25) << "Computational Mathematics"
         << setw(25) << m4 << endl;

    cout << setw(8) << "5"
         << setw(25) << "Web technologies"
         << setw(25) << m5 << endl;

    cout << "\n";

    cout << setw(45) << "Total:" << setw(10) << total << endl;
    cout << setw(45) << "Average:" << setw(10) << fixed << setprecision(1) << average << endl;
    cout << setw(45) << "Grade:" << setw(10) << grade << endl;

    return 0;
}