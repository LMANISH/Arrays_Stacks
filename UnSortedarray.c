#include<stdio.h>
#include<stdlib.h>
int num;int a[50];

int search(int x)
{
	int k=0;
	for(int j=0;j<num;j++)
	{
		if(x == a[j])
		{
			k++;
		}
	}
	if(k>0)
	{
	printf("Number available\n");
	}
	else
	{
	printf("Number not seen\n");
	}
return 0;
}

int Insert(int x,int pos)
{
	int temp;
	for(int i=pos-1;i<num+1;i++)	
	{
		temp=a[i];
		a[i]=x;
		x=temp;
	}
	num++;
return 0;
}

int Delete(int x)
{
	
	for(int i=0;i<num;i++)
	{
		if(x == a[i])
		{
			for(int j=i;j<num;j++)
			{
				a[j]=a[j+1];
				i--
;			}
			num--;
		}
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
			printf("Enter the position");
			scanf("%d",&pos);
			Insert(var,pos);
			break;

		case 3:
			printf("Enter the number to be deleted");
			scanf("%d",&var);
			Delete(var);
			break;
		}
		for(int i=0; i<num;i++)
		{
			printf("%d\t",a[i]);
		}

		printf("\n Enter 1 to repeat or 2 to exit");
		scanf("%d",&repeat);
		
	}while(repeat<2);
	

}