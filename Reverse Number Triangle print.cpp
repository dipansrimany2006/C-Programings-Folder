#include<stdio.h>

int main(){
	int row;
	printf("Enter the row number");
	scanf("%d",&row);
	//Row defining
	for(int i = 1;i<=row;i++){
		//sapce printing
		for(int j=1 ;j<=i ;j++){
			printf("    ");
		}
		//Number print
		for(int j =i; j<=row ;j++){
			printf("%d       ",j);
			}
				printf("\n");
		}
	
	return 0;
}
