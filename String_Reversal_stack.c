#include <stdio.h>
#include<string.h>

int top=-1;char C[20];

void Push(char x)
{
	top++;
	 C[top] = x;
}

void Pop()
{
	printf("%c",C[top]);
	top--;
}

int main()
{
	int i;
    printf("Enter name: ");
    scanf("%s", C);
    printf("Your name is %s.", C);
	
	for(i=0;i<strlen(C);i++)
		Push(C[i]);
	for(i=0;i<strlen(C);i++)
		Pop();

	return 0;
}