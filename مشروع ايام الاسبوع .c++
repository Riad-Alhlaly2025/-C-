#include <iostream>
using namespace std;
int main()
{
   int weet=3;  //متغير عرفناه او حددناه ببضعة اسابيع 3
   int dey=7;   // متغير عرفناه بعدد ايام الاسبوع
   
   for(int i=1; i<=weet;i++)  // اضافه جملة فور واضافه متغير )i()وتحديده با ++i
   {


       cout<<"weet : "<<i<<endl;  //امر طباعه متغير weey واضافة قيمة (i)
       
       for(int g=1;g<=dey;g++)  //
       {
        
           cout<<"       dey : "<<g<<endl;  //
       }
       
   }

    return 0;
}