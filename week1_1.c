#include<stdio.h>


int isperfect(int num){
	int sum=0;
	for(int i=1;i<=num/2;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	return sum;
}

int main(){

	int number;
	int a;

	printf("enter the number");
	scanf("%d",&number);
	a=isperfect(number);

	if(a==number){

		printf("%d the number is perfect",number);
	}
	else{ 

		printf(" the numbere is not perfect ");


	}	}
