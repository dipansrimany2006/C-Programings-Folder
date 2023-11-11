#include <stdio.h>

int main() {
	// your code goes here
	int n;
	printf("Enter how many number you want to check:\n");
	scanf("%d",&n);
	while(n--){
	    int num;
	    printf("Enter the number to check it Amstrong or not?\n");
	    scanf("%d",&num);
	int ans=0;
		int temp = num;
		while(num!=0){
		int rem = num%10;
	    num=num/10;
		ans = ans + (rem * rem * rem);
		}
		
		if(temp==ans){
			printf("Yes, that is Amstrong number.\n");
			printf("\n");
		}
		else
			printf("No, that is not Amstrong number.\n");
			printf("\n");
	}
	return 0;
}

