#include<iostream>
using namespace std;
class emp{
    int id;
    public:
        int salary;
        void setdata();
        int getid();
        int getsalary();
};
void emp::setdata(){
    id=101;
    salary=5000;
}
int emp::getid(){
    cout<<id<<endl;
}
int emp::getsalary(){
    cout<<salary<<endl;
}

class programer:private emp{
    public:
        
}
int main(){
    return 0;
}