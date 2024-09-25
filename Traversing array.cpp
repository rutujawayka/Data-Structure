#include<stdio.h>
#define SIZE 101
int main()
{
	int arr[SIZE]={0};
	int index,value,num;
    printf("Enter how many number you want to = ");
    scanf("%d",&num);
    //filter
    if(num<=0 || num>SIZE-1)
    {
    	printf("Invalid Input\n");
    	return -1;
	}
	//store the value in array
	for(int i=0;i<num;i++)
	{
		printf("Enter a value %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	//Display array
	printf("finally print array value \n");
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}
