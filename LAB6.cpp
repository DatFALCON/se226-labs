#include <iostream>

using namespace std;

 int productFunct(double n){
    double finalProduct=1;
    if (n==1){
      return finalProduct*((1/3)-10);
    }
    else{
        return productFunct(n-1)*(((n)/(n+2))-10);
    }
}

int productFunct2(){
    double n;
    cout<<"Type a number:  ";
    cin>>n;
    double finalProduct=1;
    if (n==1){
      return finalProduct*((1/3)-10);
    }
    else{
        return productFunct(n-1)*(((n)/(n+2))-10);
    }
}


int main()
{
   cout<<productFunct(5)<<endl;
   cout<<productFunct2()<<endl;
return 0;
}

