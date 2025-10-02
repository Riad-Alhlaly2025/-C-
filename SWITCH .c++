#include <iostream>
using namespace std;
int main()
{                            //مثال عرف قيمه  (W)
   int w=12;
   
   switch(w)                //تعرف المتغير وينطبع بداخلها البرنامج
    {
        case 8:            //امعناها لحاله وتنتهي ::
        cout<<"w is equal 8\n";
        break;            //انها الحاله وانتقال صدر جديد
        
        case 3:
        cout<<"w is equal 3\n";
        break;
        
        case 12:
        cout<<"w is equal 12\n";
        break;
        
        default:           //تكتب في نهايت البرنامج مثل (else)
        cout<<"w not equal any namber i know \n";
        break;
        
        
        
        
        
        
    }

   








    return 0;
}
