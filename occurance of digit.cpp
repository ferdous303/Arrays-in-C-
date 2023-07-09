#include<stdio.h>
main(){
	int n=5;
	int arr[]={1,2,1,2,1};
	int b=0;
	for(int i=0;i<n;i++){
		int count=0;
		b++;
		int q=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			q++;
			}
		}
		if(q<b){
		
		printf("%d is %d times\n",arr[i],count);
	}}
}
