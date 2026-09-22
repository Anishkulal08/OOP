#include <iostream>
using namespace std;

class Employee
{
protected:
    int empCode;
    string empName;

public:
    void accept()
    {
        cout << "Enter Employee Code: ";
        cin >> empCode;

        cout << "Enter Employee Name: ";
        cin >> empName;
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
    }
};

class Faculty : public Employee
{
protected:
    string qualification;
    int experience;

public:
    void accept()
    {
        Employee::accept();

        cout << "Enter Qualification: ";
        cin >> qualification;

        cout << "Enter Years of Experience: ";
        cin >> experience;
    }

    void display()
    {
        Employee::display();

        cout << "Qualification: " << qualification << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

class NonTeaching : public Employee
{
protected:
    char grade;

public:
    void accept()
    {
        Employee::accept();

        cout << "Enter Grade: ";
        cin >> grade;
    }

    void display()
    {
        Employee::display();

        cout << "Grade: " << grade << endl;
    }
};

class Permanent : public Faculty
{
private:
    float basicPay;
    float academicAllowance;

public:
    void accept()
    {
        Faculty::accept();

        cout << "Enter Basic Pay: ";
        cin >> basicPay;

        cout << "Enter Academic Allowance: ";
        cin >> academicAllowance;
    }

    void display()
    {
        Faculty::display();

        cout << "Basic Pay: " << basicPay << endl;
        cout << "Academic Allowance: " << academicAllowance << endl;
    }
};

class Contract : public Faculty
{
private:
    int probationYears;

public:
    void accept()
    {
        Faculty::accept();

        cout << "Enter Probation Years: ";
        cin >> probationYears;
    }

    void display()
    {
        Faculty::display();

        cout << "Probation Years: " << probationYears << endl;
    }
};

int main()
{
    int choice;

    cout << "EMPLOYEE DATABASE\n";
    cout << "1. Permanent Faculty\n";
    cout << "2. Contract Faculty\n";
    cout << "3. Non-Teaching Employee\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        Permanent p;

        cout << "\nEnter Permanent Faculty Details\n";
        p.accept();

        cout << "\n--- Employee Details ---\n";
        p.display();
    }
    else if(choice == 2)
    {
        Contract c;

        cout << "\nEnter Contract Faculty Details\n";
        c.accept();

        cout << "\n--- Employee Details ---\n";
        c.display();
    }
    else if(choice == 3)
    {
        NonTeaching n;

        cout << "\nEnter Non-Teaching Employee Details\n";
        n.accept();

        cout << "\n--- Employee Details ---\n";
        n.display();
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}