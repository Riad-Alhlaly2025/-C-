

        // عمل دوال متكرره وبنفس اسم المتغير وكيف نعطيها القيم


#include <iostream>
using namespace std;
void num()                       //الدال الجديده واسم المتغير لثابت 
{
    cout<<"riadh alhlalyy"<<endl;   //طباعه للمتغي مجهول ما بين الاقواس
}

void num(int x, int y)        //المتغير الثابت واعطيناه قيم بداخل القوس مختلفه لكي يعرف
{
    cout<<x*y<<endl;          //عمليه 
}
void num(int s,int d,int q,int a)  //الثابت والقيم لكي يوجدها 
{
   cout<< s+d+q+a<<endl;
}

 double num(double l,double o)    //باستخدام داله اخرا والمتغير الثابت مازال وجود
{
   return  l*o;        //جمله تحفض المتغير ولا تطبع يتم ايجاده في داله الاساسيه
}
void num1(string j)    //الثابت والمتغير من نوع الاحرف 
{
    cout<<j<<endl;     //تعريف للمتغير في الدالاه الاساسيه
}
int main()
{
    num1("sallh");
    num();
    num(5,3,6,8);   //      الداله الاساسيه وتعريف متغيرات الدوال الجديده
    num(3,4);
    cout<<num(2.4,5.9);

    return 0;
}