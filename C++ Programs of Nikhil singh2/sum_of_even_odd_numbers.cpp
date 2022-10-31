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
int sum_odd=0;
int sum_even=0;

for(int i=0;i<n;i++){
	if (number[i]%2==0){
		sum_even=sum_even+number[i];
		cin>>sum_even;
		}
	else{
		sum_odd=sum_odd+number[i];
		cin>>sum_odd;
		}
	}
cout<<"Sum of even numbers is :"<<sum_even<<endl;
cout<<"Sum of odd numbers is :"<<sum_odd;

return 0;
}