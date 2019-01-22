#include<iostream>
using namespace std;
int main()
{
	int a,b,x,bit=0;
	cout<<"enter two numbers:";
	cin>>a>>b;
	x=a^b;
	while(x>0)
	{
		bit+=x%2;
		x=x/2;
	}
	cout<<"haming distances between "<<a<<"and"<<b<<"is:"<<bit<<endl;
	return 0;
}
