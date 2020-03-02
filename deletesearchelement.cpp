// delete search element
#include<iostream>
using namespace std;
int main()
{
	int i,n,values[100],pos,value;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter "<<n<<"values";
    for(i=0;i<n;i++)
    {
    	cin>>values[i];
    }
    cout<<"enter new value";
    cin>>value;
    cout<<"enter the position";
    cin>>pos;
    for(i=0;i>=pos;i--)
    {
    	values[i]=values[i-1];
	}
	values[pos]=value;
	for(i=0;i<n;i++)
	{
		cout<<values[i]<<"\t";
	}
	return 0;
}
