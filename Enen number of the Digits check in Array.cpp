#include<stdio.h>

bool even(int n){
	int c=0;
	while(n>0){
		n=n/10;
		c++;
	}
	if(c%2==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int l;
	printf("Enter the length of the array:\n");
	scanf("%d",&l);
	int arr[l];
	printf("Enter the elements of the array to check them containing even number digits or not:\n");
	//input loop
	for(int i = 1; i<=l;i++){
		scanf("%d",&arr[i]);
	}
	printf("The even digits are:\n");
	//positioning loop
	for(int i=1; i<=l;i++){
	     even(arr[i]);
		if( even(arr[i]) == true){
			printf("%d\n",arr[i]);
		}
	}
return 0;	
}
