#include<stdio.h>
#define SIZE 10
void push();
int stack_arr[SIZE];
int top = -1;
int main()
{
	int value;
//	int stack_arr[SIZE];
	//int top = -1;
	for(int i=0;i>=SIZE-1;i++);
	{
    	printf("Enter a value = ");
		scanf("%d",&value);
	}
	push();
	return 0;
}
void push()
{
	int value;
	if(top == SIZE-1)
	{
		printf("stack is full\n");
	}
	top=top+1;
	stack_arr[top] = value;
	printf("%d",value);
}
