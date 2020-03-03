#include<iostream>
using namespace std;
int main()
{
	int i,j,search,n,values[100],pos=-1,count=0;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter "<<n<<" values";
	for(i=0;i<n;i++)
	{
		cin>>values[i];
    }
    cout<<"enter search element";
    cin>>search;
    for(i=0;i<n;i++)
    {
		if (search==values[i])
		{
			pos=i;
			count++;
			for(j=pos;j<n;j++)
			{
				values[j]=values[j+1];
			}
		}	
	}
	if(pos!=0)
	{
		for(i=0;i<n-count;i++)
		{
			cout<<values[i]<<"\t";
		}
	}
	else
	{
	for(i=0;i<n;i++)
	{
		cout<<values<<"\t";
	}
    }
     return 0;
}
