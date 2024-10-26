#include<stdio.h>
int main(){
	int num,count,fact=1;
	printf("Enter the number for factorial:");
	scanf("%d",&num);
	for(count=1;count<=num;count++){
	fact = fact*count;
	}
	printf("\nThe factorial of %d is %d \n",num,fact);
	return 0;
}
