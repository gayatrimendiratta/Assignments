#include<stdio.h>
#define BITS 32

int main(){
	 int n;
	 int s;
	  printf("ennter the number\n");
	  scanf("%d",&n);
	  printf("the bits for shifting\n");
	  scanf("%d",&s);
	  int x=n>>s;
	  int y=n<< (BITS-s);
	  int result=x|y;

	  int p=n<<s;
	   int z=n>>(BITS-s);
	   int result2=p|z;
	   printf("the right shift and then left shift and then ans %d\n",result);
	   printf("the left shift and then right shift and then and %d\n",result2);
}


    	
