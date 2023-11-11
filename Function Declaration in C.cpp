#include<stdio.h>
#include<stdlib.h>
//function declaring
int sum(int x, int y){
    return(x+y);
}
int sub(int x, int y){
    return(x-y);
}
int mul(int x, int y){
    return(x*y);
}
float divi(int x, int y){
    return(x/y);
}
 int main(){
     int a,b,ch;
     do{
     puts("Write two numbers to calculate themselves");
     scanf("%d",&a);
     scanf("%d",&b);
     printf("The Sum of two number is: %d\n",sum(a,b));
     printf("The Substraction of two number is: %d\n",sub(a,b));
     printf("The Multiplication of two number is: %d\n",mul(a,b));
     printf("The Division of two number is: %f\n",divi(a,b));
     puts("If you want to exit press 0 Or to continue press ANY NUMBER ");
     scanf("%d",&ch);
     if(ch==0){
         exit(0);
     }
     } while(1);
     return 0;
 }
