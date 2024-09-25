#include<stdio.h>
#define SIZE 101
int choice=0,flag;
int arr[SIZE]={0};
int index,value,num;
void Create();
void Insert();
void Delete();
void Update();
void Display();
void Search();
int main()
{
	while(1)
	{
		printf("*****Menu for Array*****\n");
		puts("1.Create");
		puts("2.Insert");
		puts("3.Delete");
		puts("4.Update");
		puts("5.Display");
		puts("6.Search");
		puts("7.Exit");
		printf("**********\n");
		printf("Enter your Choice = ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				Create();
				flag=1;
				break;
			case 2:
				if(flag==0)
				{
					printf("please create array first\n");
			        break;
				}
				Insert();
				break;
			case 3:
				if(flag==0)
				{
					printf("Please create array first\n");
					break;
				}
				Delete();
				break;
			case 4:
				if(flag==0)
				{
					printf("Please create array first\n");
				    break;
				}
				Update();
				break;
			case 5:
				if(flag==0)
				{
					printf("Please create array first\n");
				    break;
				}
				Dispaly()
				break;
			case 6:
				if(flag==0)
				{
					printf("Please create array first\n");
					break;
				}
				Search()
				break;
			case 7:
				return 0;
			default:
				printf("Sorry !! Invalide Choice\n Please select correct option\n");
		}
	}
	return 0;
}
void Create()
{
	printf("Enter how many number you want = ");
	scanf("%d",&num);
	
	if(num<=0 || num>SIZE-1)
	{
		printf("Invalide input\n");
		return 0;
	}
	for(int i=0;i<num;i++)
	{
		printf("Enter value %d =",i+1);
		scanf("%d",&arr[i]);
	}
	return;
}
void Insert()
{
	printf("Enter Index =");
	scanf("%d",index);
	
	if(index<0 || index>num-2)
	{
		printf("Invalid Index\n")
		return;
	}
	
	printf("Enter value = ");
	scanf("%d",&value);
	
	for(int i=num-1;i>=index;i--)
	{
		arr[i+1]=arr[i]
	}
	arr[index]=value;
	num++;
	return;
}
void Update()
{
	printf("Enter index = ")
	scanf("%d",&index);
	
	if(index<0 || index>num-1)
	{
		printf("Invalid Index\n");
		return;
	}
	
	printf("Enter New Value = ");
	scanf,("%d",&value);
	arr[index]=value;
	return;
}
void Delete()
{
	printf("Enter index which data you want delete = ");
	scanf("%d",&index);
	
	if(index<0 || index>num-1)
	{
		printf("Invalid index\n");
		return;
	}
	for(int i=index;i<num-1;i++)
	{
		arr[i]=arr[i+1];
	}
	num--;
	return;
}
void Display()
{
	if(num==0)
	{
		printf("Array is Empty\n");
		return;
	}
	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return;
}
void Search()
{
	printf("Enter value which you want search = ");
	scanf("%d",&value);
	int pos=-1;
	for(int i=0;i<num;i++)
	{
		if(value == arr[i])//condition to check match.
		{
			pos=i;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Value not found\n");
	}
	else
	{
		printf("%d value found at %d location",value,pos);
	}
	return;
}
