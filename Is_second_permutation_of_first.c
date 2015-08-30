#include<stdio.h>
int permutation(char a[],char b[]);
void main()
{
	char a[20],b[20];
	int p;
	printf("\n Enter the strings:\n");
	gets(a);
	gets(b);
	p=permutation(a,b);
	if(p!=-1)
		printf("\n Yes both are permutations......");
	else
		printf("\n both are not permutations......");

}
int permutation(char a[] ,char b[])
{
	int cnt[256]= {0},cn[256] = {0},i;
	for(i=0;a[i];i++)
	{
		cnt[a[i]]++;
	}

	
	for(i=0;b[i];i++)
	{
		cnt[b[i]]--;
	}
	
	

	for(i=0;i<256;i++)
	{
			if(cnt[i] != 0)
				if(i != ' ' && i != '\t' )
				return -1;

	}
	return 1;

}