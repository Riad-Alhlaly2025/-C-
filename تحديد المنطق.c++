#include <iostream>
using namespace std;
int main()
//** برنامج يطبع الرقم الاكبر من الرقام التي تم ادخالها */
{
   int x;
   int h;
   int m;
   //* طلب من المستخدم ادخال 3 ارقام */
   cout<<"enter your first number :"<<endl;
   cin>>x;
   cout<<"enter your second number :"<<endl;    
   cin>>h;
   cout<<"enter your third number :"<<endl;
   cin>>m;
   
   if(x > h && x > m)
   {
       cout<<x<<" number is maximum \n";
   }
   else if(h > x && h > m)
   {
       cout<<h<<" number is break \n";
       
   }
   else if(m > x && m > h)
   {

    //cout<<m<<" number is switch \n";
    cout<<m<<"  enter the numbers again \n";
   }
   else

   {

    cout<<"enter the numbers again \n";
   }
   
    return 0;
}