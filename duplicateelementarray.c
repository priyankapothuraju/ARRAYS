// duplicate element in a given array
#include<stdio.h>
void main()
{
	int values[100],n=0,i=0,j=0,fr=1,count=0;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&values[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(values[i]==values[j])
		    {
		    	fr++;
		    	values[j]=0;
			}	
		}
				if(values[i]!=0 && fr==1)
				{
					count++;
		        }
		        fr=1;
     }
	 printf("number of duplicate element:%d",count);
	 }

