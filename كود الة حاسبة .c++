#include <iostream>
using namespace std;
int main()
{                                                          // مثال عن برمجه برنامج الحاسبه  
    char oppe;                                              //منغير حرف واحد فقط
    float num1;                                           //منغير ارقام صحيحه كسريه
    float num2;                                         //  //    //    //   //
    
    cout<<"enter an operator(+,-,*,/):";              //سوال للمستخدم ادخل الاشاره للعمل عليها
    cin>>oppe;                                         //ادخل الاشاره
    cout<<"enter two number\n";                       //سوال اختر الارقام
    cin>>num1;                                       //ادخل قيمه المخزن الاول
    cin>>num2;                                       //ادخل قيمة المخزن الثاني
    
    switch(oppe)                                     //اكتب جمله سوتش ونتاكد من قيمة مخزن الاشارات 
    {
        case '+':                                     //معناها الحاله 
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;    //اكنب المساله لاشاره من الاشارات
        break;                                           //انها الاحاله والجمله المكتوبه
        
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
        
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;
        
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
        
        default :
        cout<<"error the operator is not correct \n";
        
       /* case '&':
        cout<<num1<<"&"<<num2<<"="<<num1&num2<<endl;
        break;*/
        
    }

    return 0;
}