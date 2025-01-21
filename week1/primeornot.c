#include<stdio.h>
 int main(){
	 int num;
	 printf("Enter a number n: ");
	 scanf("%d", &num);
	  for(int i=2;i<=num;i++){
		   int isprime=1;
		    for(int j=2;j*j<=i;j++){
			    if(i%j==0){
				    isprime=0;
				    break;

			    }
		    }
		    if(isprime){
			     printf("%d\n",i);
		    }
	  }
 }


