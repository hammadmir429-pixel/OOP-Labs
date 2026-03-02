#include<iostream>
using namespace std;
struct Student
{
    string First_name;
    string Last_name;
    int roll_no;
    int marks;
    Student Display(Student s1)
    {
        Student *studentptr = &s1;
        cout<<"Full Name: "<<studentptr->First_name<<" "<<studentptr->Last_name<<endl;
        cout<<"Roll No: "<<studentptr->roll_no<<endl;
        cout<<"Marks: "<<studentptr->marks<<endl; 
    }
};
int main()
{
    Student s1;
        s1.First_name = "Hammad";
        s1.Last_name = "Mir";
        s1.roll_no = 16;
        s1.marks = 100;
        s1.Display(s1);
}
    