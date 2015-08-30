#include<stdio.h>
void insele(int [],int ,int);
void main()
{
	int a[20],n,i,ele;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("tha array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


	printf("Enter the element u want to insert:\n");
	scanf("%d",&ele);
	insele(a,++n,ele);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void insele(int a[],int n,int ele)
{
	int i,j;
	if(ele<=a[0])
	{
		for(j=n-2;j>=0;j--)
			*(a+j+1)=*(a+j);
		*(a+0)=ele;
		return;
	}
	if(ele>=*(a+n-2))
	{
		*(a+n-1)=ele;
		return;
	}
	for(i=0;i<n-1;i++)
	{
		if(*(a+i)<= ele&&*(a+i+1)>=ele)
		{
			for(j=n-2;j>i;j--)
				*(a+j+1)=*(a+j);
			
			 *(a+i+1)=ele;
			
			break;
		}
	}
}