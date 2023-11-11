#include <stdio.h>

int main() {
	// your code goes here
	int n;
	printf("Enter how many numbers you want to take in input\n");
	scanf("%d",&n);
	int arr[n];
	//input taking loop
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//Swapping loop
	for(int i = 0;i<n-1;i+=2){
		int temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1]=temp;
	}
	printf("After swapping:\n");
	//printing loop
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

