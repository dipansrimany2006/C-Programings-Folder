#include<stdio.h>

int arr(int a){
    int input[a];
    // loop for taking input
    for(int i=0;i<a;i++){
    	printf("Enter number as input in Array\n");
        scanf("%d",&input[i]);
    }
    //To go every position in array
    for(int i=0;i<a;i++){
        // To check if any number from the positive integer number can divide the input number
		int flag =0; 
        for(int j =2;j<input[i];j++){
            if(input[i]%j==0){
            flag++;
            }
        }
        if(flag==0){
        	printf("%d is prime number.\n",input[i]);
			}
    }
return 0;
}

int main(){
    int inputnum;
    printf("Enter how many numbers you want to take input\n");
    scanf("%d",&inputnum);
    arr(inputnum);
    return 0;
} 
