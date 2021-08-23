#include <stdio.h>
int main ()
{
	int a[10];
	int sum;
	int left[10],right[10];
	for (int i=0;i<4;i++)
	{
	scanf("%d", &a[i]);
	} 
	for (int i=0;i<4;i++)
	{
		a[-2]=1;
		a[-3]=1;
		a[-1]=1;
		a[0]=1;
		left[i] = a[i-3]*a[i-2]*a[i-1];
	}
	for (int i=0;i<4;i++)
	{
		a[6]=1;
		a[5]=1;
		a[4]=1;
		right[i] = a[i+3]*a[i+2]*a[i+1];
	}
	for (int i=0;i<4;i++)
	{
		sum=left[i]*right[i];
		printf("%d ", sum);
	}
	
return 0;
}
