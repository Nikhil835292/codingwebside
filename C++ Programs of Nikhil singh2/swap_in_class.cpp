
//Declaring function as friend of class:-

/*
#include <iostream>
using namespace std;
class complex{
    int x,y;
    public:
        void setdata(int p,int q){
            x=p;
            y=q;

        }
        friend complex sumcomplex(complex o1,complex o2);
        void printcomplex(void){
            cout<<"Your complex number is:"<<x<<"+"<<y<<"i"<<endl;
        }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.x+o2.x),(o1.y+o2.y));
    return o3;
}

int main(){
    complex c1,c2,sum;
    c1.setdata(0,4);
    c2.setdata(1,2);
    sum=sumcomplex(c1,c2);
    sum.printcomplex();
    
return 0;
}

*/

//Declaring function of class as friend of other class
//            or
//Declaring class as friend of other class

#include <iostream>
using namespace std;
class complex;
class calculator
{
    
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealcomplex(complex,complex);

};
class complex
{
    int x,y;
    friend int calculator::sumRealcomplex(complex,complex);
    public:
        void setnumber(int a,int b){
            x=a;
            y=b;
        }

};

int calculator::sumRealcomplex(complex o1,complex o2){
    return(o1.x+o2.x);
}

int main(){
    complex o1,o2;
    o1.setnumber(4,8);
    o2.setnumber(1,7);
    calculator calc;
    int sum=calc.sumRealcomplex(o1,o2);
    cout<<"Sum of Real part of complex number is:"<<sum<<endl;
    return 0;
}



