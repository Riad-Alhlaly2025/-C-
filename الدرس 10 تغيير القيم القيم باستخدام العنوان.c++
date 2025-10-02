
//              مثال تغيير القيم باستخدام الدوال العنوان

#include <iostream>
using namespace std;
void opp(int *a ,int *x)//داله جديده فيها عنوان A وعنوان X
{
    int z;
    z=*a;
    *a=*x;   //النجمه عباره عن ايجاد العنوان
    *x=z;
}
int main()   //الداله الاساسيه 
{
    int x=5;  //متغيران معرفيان
    int y=10;
    
    cout<<"is x ="<<x<<" is y ="<<y<<endl;//اطبع قيمه  x و قيمه y
    opp(&x,&y);  //استدعاء عنوان الداله الجديده
    cout<<"is x ="<<x<<" is y ="<<y<<endl; //اطبع القييم بعد تعريف العنوان للقيم
    
    cout<<x<<endl; //قيمه x بعد طلب العنوان
    cout<<y<<endl; // قيمة  y بعد طلب العنوان

    return 0;
}