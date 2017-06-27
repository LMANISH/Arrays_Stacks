#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char B[20];int top=-1;
void Push(char b)
{
	top++;
	B[top]=b;
}

void Pop()
{
	top--;
}


int main()
{
	char A[20];
	printf("Enter the paranthesis");
	scanf("%s",&A);
	for(int i=0;i<strlen(A);i++)
	{
		if(A[i]=='{' || A[i]== '[' || A[i]== '(')
		{
			Push(A[i]);
		}	
		
		else if(A[i]=='}' || A[i]== ']' || A[i]== ')')
		{
			if(A[i]=='}')
			{
				if(top==-1 || B[top] != '{')
				{
					Push(A[i]);
				}	
				else
				{
					Pop();
				}
			}	
		
			else if(A[i]==')')
			{
				if(top==-1 || B[top] != '(')
				{
					Push(A[i]);
				}	
				else
				{	
					Pop();
				}
			}
		
			else if(A[i]==']')
			{
				if(top==-1 || B[top] != '[')
				{
					Push(A[i]);
				}	
				else
				{	
					Pop();
				}
			}
			
		}
	}	
	
	
	if(top==-1)
	{
		printf("Balanced paranthesis\n");
	}	
	else
	{
		printf("Unbalanced paranthesis\n");
	}	

}


