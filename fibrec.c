#include<stdio.h>
void fibo(int a,int b,int n){

	
if(a>n){
	 return ;

} 
printf("%d",a);
fibo(b,a+b,n);
}

 int main(){
	 int n;
	  printf("ente the number\n");
	  scanf("%d",&n);
	  printf("Print the fibno number %d\n",n);
	  fibo(0,1,n);
	  }

