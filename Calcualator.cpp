#include<stdio.h>
// Calculator making Using switch case
int main(){
	char op;
	double num1, num2;
	printf("Welcome to Standard Calculator\n");
	printf("\n");
	printf("Enter what operator you want to use: \n");
	scanf("%c",&op);
	printf("Enter First input number:\n");
	scanf("%lf",&num1);
	printf("Enter Second input number:\n");
	scanf("%lf",&num2);
	double ans;
	switch(op){
	case '+': 
	    ans = num1 + num2;
	    printf("Your answer is %.4lf",ans);
		break;
	case '-':
		ans = num1 - num2;
		printf("Your answer is %.4lf",ans);
		break;
	case '*' :
		ans = num1 * num2;
		printf("Your answer is %.4lf",ans);
		break;
	case '/' :
		if(num2==0){
			printf("Your second number input is wrong");
		}
		else{
		ans = num1 / num2;
		printf("Your answer is %.4lf",ans);
	}
		break;
	default:
	printf("Your input operator is wrong\n");
    }
	return 0;
}
