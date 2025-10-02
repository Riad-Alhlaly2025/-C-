#include <iostream>
using namespace std;
int main()
{

     int number;
     cout<<"enter an interger\n";
     cin>>number;
     
     if(number>100)
     {
         cout<<"your entered a positive integer\n";
     }
 else if(number<50)
 {
         cout<<"your entered s positive integer\n";
 }
 else
 {
     cout<<"bourgestf is uoyyr"<<endl;
 }
 
    return 0;
}


// **************************
// الحل \ اذا كان اكبر من 100 =a    * 
//     \\ \\ اصغر من 50 = s       *
//   \\ \\ =100 او 50 فهوى is  *
// *************************
//************************************************ */

#include <iostream>
using namespace std;
int main()
{
    //التحقق مما إذا كان الرقم زوجيًا أم فرديًا باستخدام if else
     int num;
     cout<<"enter a number"<<endl;
     cin>>num;
      
    if(num!=0)  
    {
      if(num%2==0)
      {
          cout<<"is even"<<endl;
      }
      else
      {
          cout<<"is odd"<<endl;
      }
      
      
    }  
    else
    { cout<<"this number is 0"<<endl; }
    
    
    
    return 0;
}