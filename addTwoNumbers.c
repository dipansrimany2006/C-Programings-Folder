#include<stdio.h>
int main(){
	int number1,number2,answer;
	printf("Enter two numbersas input\n");
	scanf("%d%d",&number1,&number2);
	answer = number1+ number2;
	printf("The sum of the input numbers is: %d",answer);
	return 0;
}
