//Array operation in switch case without function

#include<stdio.h>
#define SIZE 101
int main()
{
	int choice=0;
	int arr[SIZE]={0};
	int index,value,num;
	while(1)
	{
		printf("******Menu for Array******\n");
		puts("1.Create");
		puts("2.Insert");
		puts("3.Delete");
		puts("4.Update");
		puts("5.Display");
		puts("6.Exit");
		printf("$$$$$$$$$$$$$$$$$$$\n");
		printf("Enter Your Choice = \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
   			case 1:
				printf("Enter how many number you want = ");
				scanf("%d",&num);
				
				if(num<=0 || num<SIZE-1)
				{
					printf("Invalid Input\n");
				}
				for(int i=0;i<num;i++)
				{
					printf("Enter Value %d = ",i+1);
					scanf("%d",&arr[i]);
				}
				break;
				case 2:
					printf("Enter Index = ");
					scanf("%d",&index);
					
					if(index<0 || index>num-2)
					{
						printf("Invalid Index\n");
						break;
					}
					
					printf("Enter value = ");
					scanf("%d",&value);
					
					for(int i=num-1;i>=index;i--)
					{
						arr[i+1]=arr[i];
					}
					arr[index] = value;
					num++;
					break;
					case 3:
						printf("Enter index which data you want delete = ");
						scanf("%d",&index);
						
						if(index<0 || index>num-1)
						{
							printf("Invalid Index\n");
							break;
						}
						for(int i=index;i<=num-1;i++)
						{
							arr[i]=arr[i+1];
						}
						num--;
						break;
					case 4:
					    printf("Enter index = ");
						scanf("%d",&index);
						
						if(index<0 || index>num-1)
						{
						     printf("invalid index\n");
							 break;	
						}	
						printf("Enter New Value = ");
						scanf("%d",&value);
						
						arr[index]=value;
						break;
					case 5:
						for(int i=0;i<num;i++)
						{
							printf("arr[%d]=%d\n",i,arr[i]);
						}
						break;
					case 6:
						return 0;
					    default:
					    printf("Sorry !! Invalid Choice \n Please Select correct option\n ");	
	}
	return 0;   
}
