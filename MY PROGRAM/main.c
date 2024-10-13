#include <stdio.h>
#include <stdlib.h>


int oriarr(int arr[15],int size){
	int i;
	for(i=0;i<=size;i++)
	{
		printf("%d",arr[i]);
	}
}

int insearr(int arr[15],int size,int element,int index)
{
	for(int i=size;i>index;i--)
	{
		arr[i]=arr[i+1];
		
		
	}
	
	arr[index]=element;
	
}

int main() {
	
	int arr[15]={1,2,3,4,5,6,7,8,9,0};
	int size=sizeof(arr[15])/sizeof(int);
	int index,element;
	
	printf("orignal array is :-");
	oriarr(arr[15],size);
	
	
	
	printf("enter the index which you insert the number");
	scanf("%d",index);
	
		printf("enter the element which you insert");
	scanf("%d",element);
	insearr(arr[15],size,element,index`1111111111```							);
		
	
	
	
	
	
	
	return 0;
}