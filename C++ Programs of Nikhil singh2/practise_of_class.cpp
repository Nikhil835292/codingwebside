/*#include<iostream>
using namespace std;
class schol{
    int m,p,ch;
    public:
    int cs;
    void setdata(int m1,int p1,int ch1);
    void display(){
        cout<<"Marks in maths is "<<m<<endl;
        cout<<"Marks in physics is "<<p<<endl;
        cout<<"Marks in chemistry is "<<ch<<endl;
        cout<<"Marks in cs is "<<cs<<endl;
    }

};
void schol::setdata(int m1,int p1,int ch1){
    m=m1;
    p=p1;
    ch=ch1;
}
int main (){
    schol Nikhil;
    Nikhil.cs=95;
    Nikhil.setdata(90,80,86);
    Nikhil.display();
    return 0;
}*/


//-------------------------------------------------------------------------------------------


// #include<iostream>
// #include<string>
// using namespace std;
// class binary
// {
//     string s;
//     public:
//     void read(void);
//     void chk_bin(void);
//     void ones_compliment(void);
//     void display(void);

// };
// void binary::read(void){
//     cout<<"Enter a binary number"<<endl;
//     cin>>s;
// }
// void binary::chk_bin(void)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s.at(i)!='0'&&s.at(i)!='1')
//         {
//             cout<<"Incorrect binary format"<<endl;
//             exit(0);
            
//         }
//     }
// }

// void binary::display(void)
// {
//     cout<<"Displaying your input binary number "<<endl;
//     for (int i=0;i<s.length();i++)
//     {
//         cout<<s.at(i);

//     }
//     cout<<endl;

// }

// void binary::ones_compliment()
// {
//     for (int i = 0; i < s.length(); i++)

//     {
//         if (s.at(i)=='0'){
//             s.at(i)='1';

//         }
//         else{
//             s.at(i)='0';
//         }
        
//     }
    
// }


//---------------------------------------------------------------------------------------------

// int main(){
//     binary a;
//     a.read();
//     a.chk_bin();
//     a.ones_compliment();
    
//     a.display();
//     return 0;
    
// }



// #include<iostream>
// using namespace std;
// class shop
// {
//     int itemID[100];
//     int itemPrice[100];
//     int counter;
//     public:
//     void intcounter(void){counter=0;}
//     void setdata(void);
//     void display(void);

// };

// void shop::setdata()
// {
//     cout<<"Enter ID of your item number "<<counter+1<<endl;
//     cin>>itemID[counter];
//     cout<<"Enter Price of your item"<<endl;
//     cin>>itemPrice[counter];
//     counter++;
// }
// void shop::display()
// {
//     for(int i=0;i<counter;i++)
//     {
//         cout<<"The price of item with id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
//     }
// }
// int main()
// {
//     shop dukaan;
//     dukaan.intcounter();
//     dukaan.setdata();
//     dukaan.setdata();
//     dukaan.setdata();
//     dukaan.display();
//     return 0;

// }

//---------------------------------------------------------------------------------------------



// #include <iostream>
// #include <string>
// using namespace std;
// class classtenth
// {
//     string name;
//     string address;
//     string number;
//     public:
    
//     void setdata();
//     void display();


// };

// void classtenth::setdata()
// {
//     cout<<"enter your name "<<endl;
//     cin>>name;
//     cout<<"enter your address "<<endl;
//     cin>>address;
//     cout<<"enter your number "<<endl;
//     cin>>number;
// }
// void classtenth::display()
// {
//     cout<<"Details of students are ---"<<endl;
//     for(int i=0;i<)
//     cout<<name<<"\t"<<address<<"\t"<<number<<endl;
// }


// int main()
// {
//     classtenth tenth;
//     tenth.setdata();
//     tenth.setdata();
//     tenth.setdata();
//     tenth.display();
//     return 0;
    
// }


//---------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class employee
{
    static int count;
    int id;
    public:
        void setdata()
        {
            cout<<"enter id of employee "<<endl;
            cin>>id;
            count++;
        }
        void display()
        {
            cout<<"The id of this employee is "<<id<<" .This is employee number "<<count<<endl;
        }
        static void getdata(void){
            cout<<"The value of count is "<<count<<endl;
        }
        
};

int employee::count;

int main(){
    employee Nikhil,Vishal,Ayush;
    Nikhil.setdata();
    Nikhil.display();
    employee::getdata();

    Vishal.setdata();
    Vishal.display();
    employee::getdata();

    Ayush.setdata();
    Ayush.display();
    employee::getdata();
}












