#include<stdio.h>
int fibo(int n);
void main()
{
	int fib,n=0;
	printf("\nEnter which(nth) fibonacii number u want to find:");
	scanf("%d",&n);
	if(n>1 && n>0)
	fib = fibo(n);
	else
		fib = 1;
	printf("\n The %d fibonacii number is :%d",n,fib);
}
int fibo(int n)
{
	int fi[30],i;
	for(i=0;i<n;i++)
	{
		if(i==0 || i== 1)
			fi[i] = 1;
		else
			fi[i] = fi[i-1] + fi[i-2];

	}
	return fi[n-1];


}