#include<stdio.h>
 int main(){
	  printf("the size of the char is %zu\n",sizeof(char));
	  printf("the size of the int is %zu\n",sizeof(int));
	  printf("size of the float is %zu\n",sizeof(float));
	  printf("the size of the double is %zu\n",sizeof(double));
	  printf("the size of the long long is %zu\n",sizeof(long long));
	  printf("the size of the short is %zu\n",sizeof(short));
	  int arr[10];
	  printf("the size of the array is %zu\n ",sizeof(arr));
	  int *ptr;
	  printf("the size of the pointer is %zu\n",sizeof(ptr));
	  struct class {
		   int a;
		   char c;
		   float d;
	  };
	   printf("the sie of the struct is %zu\n",sizeof(struct  class));
 }
 

