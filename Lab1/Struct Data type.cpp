#include<iostream>
using namespace std;
struct Student
{
    string First_name;
    string Last_name;
    int roll_no;
    int marks;
    void DisplayStudentInfo(Student s1)
    {
      cout<<"Full Name: "<<s1.First_name<<" "<<s1.Last_name<<endl;
      cout<<"Roll No: "<<s1.roll_no<<endl;
      cout<<"Marks: "<<s1.marks<<endl; 
    }
};
int main()
{
    Student s1;
        s1.First_name = "hammad";
        s1.Last_name = "Mir";
        s1.roll_no = 16;
        s1.marks = 100;
        s1.DisplayStudentInfo(s1);
}