#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *p=a;
	cout<<"Enter elements: \n";
	for(int i=0;i<5;i++)
	{
		cin>>*p;
		p++;
	}
	p=a;
	cout<<"You entered: \n";
	for(int i=0;i<5;i++)
	{
		cout<<*p<<"\n";
		p++;
	}
	return 0;
}
