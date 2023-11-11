#include<stdio.h>
int main(){
	int n;
	printf("Enter how many number till you want to sum:\n");
	scanf("%d",&n);
	float ans=0;
	for(int i = 1;i<=n;i++){
		ans = ans +(1.0/i);
	}
	printf("your answers is %.4f",ans);
	return 0;
}
