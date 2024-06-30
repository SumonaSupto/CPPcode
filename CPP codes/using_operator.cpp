//Using arithmetic operator and type casting
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{

   int num1,num2;
   cout<<"Enter two number = ";
   cin>>num1>>num2;

   int sum=num1+num2;
   cout<<"The sumation is = "<<sum<<endl;


   int sub=num1-num2;
   cout<<"The subtraction is = "<<sub<<endl;


    double div= (float)num1/num2;   //type casting
   cout<<"The division is = "<<div<<endl;


    int rem=num1%num2;
   cout<<"The reminder is = "<<rem<<endl;

   cout<<"\n\n\t\t\tTHANK YOU";


    getch();
}
