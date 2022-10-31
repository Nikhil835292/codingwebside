#include <iostream>
using namespace std;
int main(){
    
    // for (int i=0;i<4;i++){
    //     int marks[4];
    //     cout<<"Enter mark you want to store"<<endl;
    //     cin>>marks;
    // }
    int marks[4]={45,75,89,99};

    // for (int i=0;i<4;i++)
    // {
    //     cout<<"The marks of "<<i<<" is:"<<marks[i]<<endl;

    // }

    using while statement

    // int i=0;
    // while (i<4){
    //     cout<<"The marks of "<<i<<" is:"<<marks[i]<<endl;
    //     i++;

    // }

    using do while 
    
    int i=0;
    do
    {
        cout<<"The marks of "<<i<<" is:"<<marks[i]<<endl;
        i++;
    } while (i<4);
    
    return 0;
}