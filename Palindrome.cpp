#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n=10;
	int arr[n];
	srand( time( 0));
	for( int i=0;i<n;i++)
	{
	  arr[i]=rand()%11;
	  printf("%d ",arr[i]);
	}
	printf("\n");
	int count =0;
	for( int i=0;i <n/2 ;i++)
	{
		if (arr[i]!= arr[n-i-1])
		{
			count ++;
			break;
		}
	}
	if ( count ==0)
	{
		printf ( " array is palndrome");
	}
	else 
	{
		printf("array is not palmdrome");
	}
}
