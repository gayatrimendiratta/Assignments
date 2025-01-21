#include<stdio.h>
int main(){
	int num;
	int fact=1 ;

	printf("enter the number\n");
		scanf("%d",&num);
		if(num==1 || num==0){
			 return 1;
		}
		

			 for(int i=num;i>=2;i--){
                    fact =fact *i ;
		  
			 }
			 printf(" the factorial is %d\n",fact);
			 return 0;

		
}
 
