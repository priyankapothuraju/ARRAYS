#include<stdio.h>
void main()
{
	int a[10],n=0,i=0,search=0;   
	printf("enter the n value");   //23 45 56 67 87 89 21 34 56 34 
	scanf("%d",&n);
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int searchelement;
	printf("enter the search element");  
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
	{
		a[i]=a[i+1];
		i++;
		a[i]=a[i+1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
}
