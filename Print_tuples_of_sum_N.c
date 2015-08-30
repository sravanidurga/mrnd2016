#include<stdio.h>
void tuple (int a[],int n,int s);
void main()
{
	int a[20],n,i,s;
	printf("\n enter the range of array:");
	scanf("%d",&n);
	printf("\n enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n enter the sum :");
	scanf("%d",&s);
	tuple(a,n,s);

}
void tuple(int a[],int n,int s)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]+a[j] == s)
				printf("\n %d,%d",a[i],a[j]);
	}
}