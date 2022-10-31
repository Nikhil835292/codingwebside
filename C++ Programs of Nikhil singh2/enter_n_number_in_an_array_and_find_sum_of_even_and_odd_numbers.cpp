#include<iostream>
using namespace std;
int main()
{
int number[100];
int n;
cout<<"Enter number you want to enter :-"<<endl;
cin>>n;

for(int i=0;i<n;i++){
	int a;
	cout<<"Enter the number you want to store in an array :";
	cin>>a;
	number[i]=a;
	}
for(int i=0;i<n;i++){
	cout<<number[i]<<endl;
	}	
return 0;
}