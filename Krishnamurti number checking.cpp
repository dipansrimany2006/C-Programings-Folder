#include<stdio.h>

int krishnamurti(int num)
	{
	int ans = 0;
	while(num>0){
		int rem = num%10;
		int fact = 1;
		for(int i =1;i<=rem;i++){
			fact = fact *i;
		}
		ans = ans+fact;
		num=num/10;
	}
	return ans;
}

int main(){
	int num;
	printf("Enter a Number to check it Krishnamurti number or not?\n");
	scanf("%d",&num);
	int check = krishnamurti(num);
	if(num==check){
		printf("Your input number %d is Krishnamurti number",num);
	}
	else{
	printf("Your input number %d is not Krishnamurti number",num);
}
	return 0;
}
