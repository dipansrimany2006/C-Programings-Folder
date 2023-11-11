#include<stdio.h>
//to the power
int main(){
	long int base, power;
	long int ans=1;
	printf("Enter the base number:\n");
	scanf("%d",&base);
	printf("Now enter the power:\n");
	scanf("%d",&power);
	for(int i =1; i<=power; i++){
		ans = ans*base;
	}
	printf("Your answer is: %d",ans);
	return 0;
}
