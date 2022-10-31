#include<iostream>
using namespace std;
class emp
{
    int a,b,c;
    public:
        int d;
        void setData(int a1,int b1,int c1);
        void display(){
            cout<<"The value of a is"<<a<<endl;
            cout<<"The value of b is"<<b<<endl;
            cout<<"The value of c is"<<c<<endl;
            cout<<"The value of d is"<<d<<endl;
        }
};
void emp::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    emp Nikhil;
    Nikhil.setData(2,8,9);
    Nikhil.d=10;
    Nikhil.display();
    
    return 0;
}