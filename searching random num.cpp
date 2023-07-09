#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int search_index( int arr[] ,int n,int num)
{
	for( int i=0; i<n;i++)
	{
		if( arr[i]==num)
		return i;
	}
	return -1;
}
int main()
{
	int n=10;
	int arr[n];
	srand( time( 0));
	for( int i=0;i<n;i++)
	{
	  arr[i]=rand()%15;
	  printf("%d ",arr[i]);
	}
	printf("\n");
	 int search;
	 printf(" enter any number:");
	 scanf("%d",&search);
	  int index=search_index( arr,n,search);
	  if ( index!=-1)
	  {
	  	printf("%d is found at index ",index);
	  	
	  }
	  else 
	  {
	  	printf("%d is  not found at index ",index);
	  }
}
