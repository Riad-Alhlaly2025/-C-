#include <iostream>
using namespace std;
int main()
{
   //برنامج يجمع الارقام الصحيحه اخل المستخدم رقم سالب ينتهي البرنامج   ///  ادخال واخراج
   //اذا ادخل المستخدم رقم سالب فالارقام المطبوعه والمكتوبه من قبل تجتمع 
   //البرنامج يستمر في ادخال الارقام الموجبه وينتهي عند ادخال رقم سالب ....بعد ادخال الرقم السالب تجتمع الارقام الموجوده بالبرنامج
    
    
    int number=0;
    int sum=0;
    
        cout<<"Enmber a entuor"<<endl;
        cin>>number;
        
    while(number>=0)
    {
        sum+=number;
        cout<<"Enmber a entuor"<<endl;
        cin>>number;
        cout<<endl;
        
    
    }
    cout<<"the sum is "<<sum<<endl;
    
    
    

    return 0;
}