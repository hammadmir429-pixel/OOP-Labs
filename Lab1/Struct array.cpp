#include<iostream>
using namespace std;
struct Student
{
    string First_name;
    string Last_name;
    int roll_no;
    int marks;
    
    void DisplayStudentInfo()
    {
      cout<<"Full Name: "<<First_name<<" "<<Last_name<<endl;
      cout<<"Roll No: "<<roll_no<<endl;
      cout<<"Marks: "<<marks<<endl; 
    }
};
int main()
{
    Student s1;

        s1.First_name = "Hqmmad";
        s1.Last_name = "mir";
        s1.roll_no = 16;
        s1.marks = 100;
    
    Student s2;
        s2.First_name = "Meer";
        s2.Last_name = "Hammad";
        s2.roll_no = 1;
        s2.marks = 90;

    Student Students[2] = {s1, s2};
        for(int i=0; i<2; i++)
        {
            Students[i].DisplayStudentInfo();
        }
        
}