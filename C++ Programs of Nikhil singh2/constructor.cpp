#include <iostream>
using namespace std;
class emp
{
    int a,b;
    public:
    emp (int x,int y){
        a=x;
        b=y;
    }
    emp (int x,float y){
        a=y;
        b=x;
    }
    void display(){
        cout<<a<<b;
    }
};
int main(){
    emp o1=emp(4,5);
    
    emp o2(2,float(53));

    o1.display();
    o2.display();
    return 0;
}