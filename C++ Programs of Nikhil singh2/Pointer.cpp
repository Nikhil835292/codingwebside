#include <iostream>
using namespace std;
int main(){
    int a=4;
    int* b=&a;
    cout<<"The address of a is "<<b<<endl;
    // cout<<"The value of address at "<<*b;
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value of address "<<**c;
    return 0;
}
    