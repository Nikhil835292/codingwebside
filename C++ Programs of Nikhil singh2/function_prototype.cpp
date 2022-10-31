#include <iostream>
using namespace std;
// int main(){
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;

//     cout<<"sum of num1 and num2 is"<<sum(num1,num2);

// return 0;
// }

// int sum(int a,int b){
//     int c=a+b;
//     return c;
// }



// function prototype

int sum(int a,int b);

int main(){
    int num1,num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;

    cout<<"sum of num1 and num2 is"<<sum(num1,num2);

return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}