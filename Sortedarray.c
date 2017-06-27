#include<stdio.h>
#include<stdlib.h>
int num;int a[50],available;

int search(int x)
{
	int k,i=0;int l=num;
	while(i!=l)
	{
		
		if(x < a[(i+l)/2])
		{
			l=(i+l)/2;
		}
		else if(x > a[(i+l)/2])
		{
			i=(i+l)/2 +1;
		}
		else if(x==a[(i+l)/2])
		{
			printf("Element found");
			break;
		}
		if(i==l)
		{
			if(a[i]==x )
			{
				printf("Element found");
			}
			else
				printf("Element not found");
		}	
	}
	

return 0;
}

int Insert(int x)
{
	int temp,k,i=0;int l=num;
	while(i!=l)
	{
		
		if(x < a[(i+l)/2])
		{
			l=(i+l)/2;
		}
		else if(x > a[(i+l)/2])
		{
			i=(i+l)/2 +1;
		}
		else if(x==a[(i+l)/2])
		{
			break;
		}
	}
	num++;
	for(int k=num;k>i-1;k--)
	{
		a[k]=a[k-1];
	}
	a[i]=x;
return 0;
}

int Delete(int x)
{
	
	int temp,k,i=0;int l=num;
	while(i!=l)
	{
		
		if(x < a[(i+l)/2])
		{
			l=(i+l)/2;
		}
		else if(x > a[(i+l)/2])
		{
			i=(i+l)/2 +1;
		}
		else if(x==a[(i+l)/2])
		{
			break;
		}
	}
	for(int j=i;j<num;j++)
	{
		a[j]=a[j+1];
		i--;
	}
	num--;
		
	
return 0;
}

int Print()
{
	for(int i=0; i<num;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}

int main()
{
	int i,var,index,repeat,opt,pos;
	printf("Enter no of elements");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		printf("Enter 1 to search || 2 to insert || 3 to delete ");
		scanf("%d",&opt);
		switch(opt)
		{
		case 1:
			printf("Enter the number to search");
			scanf("%d",&var);
			index=search(var);
			break;

		case 2:
			printf("Enter the number to be inserted");
			scanf("%d",&var);
			Insert(var);
			Print();
			break;

		case 3:
			printf("Enter the number to be deleted");
			scanf("%d",&var);
			Delete(var);
			Print();
			break;
		}
		

		printf("\n Enter 1 to repeat or 2 to exit");
		scanf("%d",&repeat);
		
	}while(repeat<2);
	

}