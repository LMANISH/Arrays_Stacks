#include<stdio.h>
#include<stdlib.h>
int A[20];int front=-1,rear=-1;

void Enqueue(int n)
{
	rear++;
	if(rear==0)
	{
		front=0;
	}
	A[rear]=n;
}

void Dequeue()
{
	if(front==-1)
	{
		printf("Not possible\n");
	}
	else
	{
		front++;
	}
}

int main()
{
	int num,n,sub_array,max;
	printf("Enter no of elements");
	scanf("%d",&num);
	printf("Enter no of elements for a sub-array");
	scanf("%d",&sub_array);
	for(int i =0;i<num;i++)
	{
		scanf("%d",&n);
		Enqueue(n);
	}
	int start =front,end=rear;
	for(int i=start;i<start+sub_array-1 ;i++)
	{
		if(i<end-sub_array-1)
		{
			max=A[i];
			for(int j=i+1;i<start+sub_array-1 ;j++)
			{
				if(max<A[j])
				{
					max=A[j];
				}	
			}
		
		}
		printf("%d  ",max);
		Dequeue();
	}
}