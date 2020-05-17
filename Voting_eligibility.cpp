#include<iostream>
using namespace std;
int main()
{
   int age;
   char name[40];

   cout<<" Enter your name:  ";
   cin>>name;

   cout<<"\n Enter your age:  ";
   cin>>age;

   if (age>=18)
   {
       cout<<"\n Congratulations "<<name<< " You are is eligible to vote. \n";
   }
   else
    cout<<"\n Sorry "<<name<<" You are is not eligible to vote. \n";
   return 0;
}
