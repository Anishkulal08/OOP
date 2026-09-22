#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;

public:
    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class Instructor : public Person
{
public:
    void accept()
    {
        Person::accept();
    }

    void display()
    {
        Person::display();
    }
};

class Teaching : public Instructor
{
private:
    string subject;

public:
    void accept()
    {
        Instructor::accept();

        cout << "Enter Subject: ";
        cin >> subject;
    }

    void display()
    {
        Instructor::display();

        cout << "Subject: " << subject << endl;
    }
};

class NonTeaching : public Instructor
{
private:
    string department;

public:
    void accept()
    {
        Instructor::accept();

        cout << "Enter Department: ";
        cin >> department;
    }

    void display()
    {
        Instructor::display();

        cout << "Department: " << department << endl;
    }
};

int main()
{
    int n, choice;

    cout << "Enter number of instructors: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "\n--- Instructor " << i + 1 << " ---\n";

        cout << "1. Teaching\n";
        cout << "2. Non-Teaching\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1)
        {
            Teaching t;

            t.accept();

            cout << "\nTeaching Instructor Details:\n";
            t.display();
        }
        else if(choice == 2)
        {
            NonTeaching nt;

            nt.accept();

            cout << "\nNon-Teaching Instructor Details:\n";
            nt.display();
        }
        else
        {
            cout << "Invalid choice!\n";
            i--;
        }
    }

    return 0;
}