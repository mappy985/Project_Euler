#include<iostream>
using namespace std;

int main()
{
	int a,i;
	cout<<"\n ENTER THE NUMBER=";
	cin>>a;
	
	for(i=2;i<=a-1;i++)
	{
		if(a%i==0)
		{
			cout<<i;
			break;
	}
		
	}
	if(a==i)
		cout<<"\n PRIME";
	else
		cout<<"\n NOT PRIME";
}
