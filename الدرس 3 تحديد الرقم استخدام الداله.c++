#include <iostream>
using namespace std;
int opp(int n1,int n2,int n3) // الداله والمتغير والقيم للارقام
{
    if(n1 > n2 && n1 > n3)   // عملية التحقيق
   {
       cout<<n1<<"number is maximum \n";//عملية التحقيق
   }
   else if(n2 > n1 && n2 > n3)//عملية التحقيق
   {
       cout<<n2<<"number is break \n";//عملية التحقيق
       
   }
   else if(n3 > n1 && n3 > n2)//عملية التحقيق
   {
       cout<<n3<<"number is switch \n";//عملية التحقيق
       
   }
   else
   {
       cout<<"enter the nou";//عملية التحقيق
   }
 
}

int main()// الداله الاساسيه
{            // طلب ادخال قيمه للمتغيرات الثلاثه
   int x;
   int h;
   int m;
   
   cout<<"enter or numbeer :"<<endl;//رساله ترحيبيه
   cin>>x;
   cin>>h;
   cin>>m;
   
   opp(x,h,m);      //المتغير للداله الجديده و والمتغيرات للداله الاساسيه
   
 
    return 0;
}