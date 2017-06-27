#include<stdio.h>
#include<stdlib.h>
int a[30],b[30],num;

int Rotation(int n)
{	
	int i,j,temp;
	for(i=n-1;i>=0;i--)
	{
		b[i]=a[i+num-n];
	}
	for(j=num-1;j>=0;j--)
	{	
		a[j]=a[j-n];
	}
	for(i=n-1;i>=0;i--)
	{
		a[i]=b[i];
	}
		
	
	return 0;
}


int main()
{

int i,n;

printf("Enter no.of elements");
scanf("%d",&num);
for(i=0;i<num;i++)
{
	scanf("%d",&a[i]);
}

printf("Enter no. of rotations");
scanf("%d",&n);
n=n%num;
Rotation(n);
for(i=0;i<num;i++)
{
	printf("%d\t",a[i]);
}

}
