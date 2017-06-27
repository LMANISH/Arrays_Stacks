#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[50];
	int num,n,k=0,i,temp;
	printf("Enter number of elements in an array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value of n");
	scanf("%d",&n);
	for(i=0;i<num;i++)
	{
		temp=n-a[i];
		for(int j=i+1;j<num;j++)
		{
			if(temp==a[j])
				k++;
		}
	}
	if(k>0)
		printf("There exists a solution\n");
	else
		printf("There is no solution\n");
		
}