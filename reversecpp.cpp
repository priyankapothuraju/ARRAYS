#include<iostream>;
using namespace std;
	int main()
	{
		int a=0,reverse=0;
		cout<<"enter the number";
		cin>>a;
		while(a!=0)
		{
			reverse=reverse*10+(a%10);
			a=a/10;
		}
		cout<<reverse<<"reverse";
	return 0;
	}
	

