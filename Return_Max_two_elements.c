#include<stdio.h>
#include<stdlib.h>
void maximum(int a[],int n,int * max,int *smax);
//efine x 0
//efine y 0
void main()
{
	int a[20],n,i,m;
	int *max,*smax;
	printf("\n enter the range of the array:");
	scanf("%d",&n);
	printf("\n enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max = (int *)malloc(sizeof(int));
	*max =*(a+0);
	smax = (int *)malloc(sizeof(int));
	*smax =*(a+0);
	 maximum(a,n,max,smax);
	 printf("%d\n",*(max));
	printf("%d\n",*smax);	
	
}
void maximum(int a[],int n,int*max,int *smax)
{
	int i;
	*max =*(a+0);
	for(i=0;i<n;i++)
		if(a[i]<a[i+1]||a[i]>a[i+1])
		{
			if(a[i]<a[i+1])
			{
			*smax = *(a+i);
			break;
			}
			else
			{
				*smax = *(a+i+1);
				break;
			}
		}
	for(i=1;i<n;i++)
	{
		if(a[i]>*max)
		{
			*smax=*max;
			*max =*(a+i);
			
		}
		if(a[i]<*max&&a[i]>*smax)
			*smax =*(a+i);
	}
	


}
