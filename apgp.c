#include<stdio.h>
#include<math.h> 
int main(){
	  float a;
 float r;
  int n;

	 printf("enter the first number\n");
	 scanf("%f",&a);
	 printf("enter the common difference between them\n ");
	 scanf("%f",&r);
	 printf("enter the number of term");
	 scanf("%d",&n);
	
 
	    for (int i=0;i<n;i++){
		    printf("the ap is  %.2f\n",a+i*r);
	    }
	    for(int i =0;i<n;i++){
		     printf("the gp is  %.2f\n",a * pow(r,i));
				     }
	      for(int i=0;i<n;i++){
	      printf("the hp is  %.2f\n",1.0/(a+i*r));
	      }
	      }

		     
