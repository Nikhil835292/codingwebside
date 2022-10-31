#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main(){
    int a,b;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    swap(&a, &b);
    cout<<"value of a is:"<<a<<endl;
    cout<<"value of b is :"<<b;

    
}
