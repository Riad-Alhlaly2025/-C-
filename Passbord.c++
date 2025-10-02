#include <iostream>//برنامج يطلب من المستخدم اسمه وكلمه السر له
using namespace std;
int main()
{
    int pasourd;
    string name;
    
    cout<<"the is pasourd thenk :";
    cin>>pasourd;
    cout<<"name is you hafy :";
    cin>>name;
    if(pasourd==12345&&name=="riadh")
    {
        cout<<"Welcome "<<name<<endl;
    }
    else
    {
        cout<<"am sorry again"<<endl;
    }

    return 0;
}