#include<iostream>
using namespace std;
int shafling(int ,char,char,char);
void delay(int i)
{
	int c=i;
}
int main()
{
	int n;
	char a,b,c,d;
	cout<<"Enter number of ring:";
	cin>>n;
	d=shafling(n,'A','B','C');
	return 0;
}
int shafling(int n,char first,char middle,char last)
{
	int p,g;
	
	if(n==1)
	{
		cout<<"Ring 1 move from "<<first<<" Tower to "<<last<<" Tower."<<endl;
		return 0;
	}
	 p=shafling(n-1,first,last,middle);
	 cout<<"Ring "<<n<<" move from "<<first<<" Tower to "<<last<<" Tower."<<endl;
	 g=shafling(n-1,middle,first,last);
	 return 0;
}
