#include<iostream>
using namespace std;
int main()  //تغيير القيم في المصفوفات
{
    int nmu=5;
    int opp[nmu]={7,9,3,5,6};
    cout<<"opp [0] :"<<opp[0]<<endl;
     cout<<"opp [1] :"<<opp[1]<<endl;
      cout<<"opp [2] :"<<opp[2]<<endl;
       cout<<"opp [3] :"<<opp[3]<<endl;
        cout<<"opp [4] :"<<opp[4]<<endl;
        cout<<endl;
        opp[0]=10; //غيرنا قيمة المصفوفه 0الى قيمه اخراء
         cout<<"opp [0] :"<<opp[0]<<endl;
         opp[4]=19; //غيرنا قيمة المصفوفه 4 الئ قيمه اخراء
         cout<<"opp [4] :"<<opp[4]<<endl;

}
