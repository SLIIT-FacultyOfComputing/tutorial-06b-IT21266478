#include "Student.h"
#include <iostream>
using namespace std;


// Assign studentId and name
int Student:: assignDetails(int studentId,char name) 
{
  studentId=studentNo;
  studentname=name;
}

// Display StudentId and Name
void Student:: display()
{
  cout<< "Student Name = "<<name<<endl;
  cout<<"Student Id = "<<studentname<<endl;
}
