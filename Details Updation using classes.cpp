// Harsharan Singh Gill   102106096   2EC5   PL2
#include<iostream>
#include<string>
using namespace std;

class student
{
    string name;
    int roll_no;
    string degree;
    string hostel;
    float cgpa;

    public:
        void addDetails()
        {
            cout<<"Enter the student details:"<<endl;
            cout<<"Name: ";
            cin>>name;
            cout<<"Roll Number: ";
            cin>>roll_no;
            cout<<"Degree: ";
            cin>>degree;
            cout<<"Hostel: ";
            cin>>hostel;
            cout<<"CGPA: ";
            cin>>cgpa;
        }

        void updateDetails()
        {
            cout<<"Update Student Details:"<<endl;
            cout<<"Name: ";
            cin>>name;
            cout<<"Roll Number: ";
            cin>>roll_no;
            cout<<"Degree: ";
            cin>>degree;
            cout<<"Hostel: ";
            cin>>hostel;
        }

        void updateCGPA()
        {
            cout<<"Enter the updated CGPA:"<<endl;
            cin>>cgpa;
        }

        void updateResidenceInfo()
        {
            cout<<"Enter the updated Hostel information:"<<endl;
            cin>>hostel;
        }

        void displayDetails()
        {
            cout<<"Student Details:"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<roll_no<<endl;
            cout<<"Degree: "<<degree<<endl;
            cout<<"Hostel: "<<hostel<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
};

int main()
{
    student s;

    s.addDetails();
    s.displayDetails();

    s.updateDetails();
    s.displayDetails();

    s.updateCGPA();
    s.displayDetails();

    s.updateResidenceInfo();
    s.displayDetails();

    return 0;
}