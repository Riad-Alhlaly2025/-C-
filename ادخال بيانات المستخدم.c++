

#include <iostream>
using namespace std;
int main()
{


  //طلب من الطالب دخال بياناته 
    string name="unknown";
    int age=0;
    double gpa=0;
    char letter='a';
    bool success=true;
 
    cout<<"enter your name\n";
    cin>>name;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your gpa\n";
    cin>>gpa;
    cout<<"enter your letter\n";
    cin>>letter;
    cout<<"Are you success ? Answer with ture or false\n";
    cin>>success;
  
    cout<<"*****  Your Result is  *****\n";
  
    cout<<"your name is "<<name<<endl;
    cout<<"your age is "<<age<<endl;
    cout<<"your gpa is "<<gpa<<endl;
    cout<<"your letter is "<<letter<<endl;
    cout<<"if success = 1 congratulations else never mind "<<success<<endl;
  
  
    return 0;
}