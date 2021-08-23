#include <stdio.h>
int main()
{
	int a[10];
	int sum;
	for (int i=0;i<4;i++)
	{
	scanf("%d", &a[i]);
	} 
	
	for (int i=0;i<4;i++)
	{
		 sum=1;
	for (int j=0;j<4;j++)
		{
		sum*=a[j];
		}
	sum/=a[i];
	printf("%d ",sum);
	}

	
	return 0;
}
