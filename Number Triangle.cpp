#include<stdio.h>

int main(){
	int n;
	printf("Enter the row number upto 999:\n");
	scanf("%d",&n);
	//row defining outer loop rining
	for(int i = 0; i<=n; i ++){
		//print the space
		for(int j = 1; j<=n-i; j++){
			printf("    ");
		}
		//printing number
		for(int j =i; j<(i*2-1); j++){
			printf("%4d",j);
		}
		//number reverse printing
		for(int j=(i*2-1);j>=i; j--){
			printf("%4d",j);
		}
		printf("\n");
	}
	return 0;
}
