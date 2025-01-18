#include<stdio.h>
 int main(){
	 int number;
	 int a=0;
	  int b=1;
	   printf("Enter the number\n ");
	    scanf("%d",&number);
	     while(a<=number){
		     printf("the series is \n %d",a);
		     int next =a+b;
		     a=b;
		     b=next;
		      }
 }
