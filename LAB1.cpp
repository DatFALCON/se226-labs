#include <iostream>

using namespace std;

int main()
{
   string name;
   cout<<"Enter your name:";
   cin>>name;
   cout<<"Your name is: "<< name << endl;

   int x;
   cout<<"Enter your Student ID:";
   cin>>x;
   cout<<"Your number is: "<<x<< endl;

   int number1;
   cout<<"Enter number one:";
   cin>>number1;

   int number2;
   cout<<"Enter number two:";
   cin>>number2;

   int difference=number1-number2;
   cout<<"The difference of those numbers: "<<difference <<endl;

   int multiplication=number1*number2;
   cout<<"The multiplication of those numbers: "<<multiplication<< endl;

   int summation=number1+number2;
   cout<<"The summation of those numbers: "<< summation<< endl;

   cout<<"*\n**\n***"<<endl;



    return 0;
}
