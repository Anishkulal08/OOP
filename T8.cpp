#include<iostream>
using namespace std;

int main()
{
    string name, regno, grade;
    int year, sem;
    int m1,m2,m3,m4,m5,total;
    float avg;

    cout<<"Enter Name:";
    cin>>name;

    cout<<"Enter Registration Number:";
    cin>>regno;

    cout<<"Enter Year of Joining:";
    cin>>year;

    cout<<"Enter Semester:";
    cin>>sem;

    cout<<"Enter Marks of Subject 1:";
    cin>>m1;

    cout<<"Enter Marks of Subject 2:";
    cin>>m2;

    cout<<"Enter Marks of Subject 3:";
    cin>>m3;

    cout<<"Enter Marks of Subject 4:";
    cin>>m4;

    cout<<"Enter Marks of Subject 5:";
    cin>>m5;

    total=m1+m2+m3+m4+m5;
    avg=total/5.0;

    if(avg>=90)
        grade="A";
    else if(avg>=80)
        grade="B";
    else if(avg>=60)
        grade="C";
    else if(avg>=50)
        grade="D";
    else if(avg>=40)
        grade="E";
    else
        grade="F";

    cout<<"\n******** SCORE CARD ********";
    cout<<"\nName : "<<name;
    cout<<"\nRegistration Number : "<<regno;
    cout<<"\nYear of Joining : "<<year;
    cout<<"\nSemester : "<<sem;
    cout<<"\nMarks 1 : "<<m1;
    cout<<"\nMarks 2 : "<<m2;
    cout<<"\nMarks 3 : "<<m3;
    cout<<"\nMarks 4 : "<<m4;
    cout<<"\nMarks 5 : "<<m5;
    cout<<"\nTotal : "<<total;
    cout<<"\nAverage : "<<avg;
    cout<<"\nGrade : "<<grade;

    return 0;
}