#include<stdio.h>
int main(){
	 int arr1[3]={1,3,8};
	 int arr2[4]={7,9,10,11};
	 int marged[7];
	  for(int i=0;i<3;i++){
		  marged[i]=arr1[i];

	  }
	   for(int j=0;j<4;j++){
		   marged[j+3]=arr2[j];
	   }
	   for(int i=0;i<7;i++){
		   for(int j=0;j<7-i;j++){
		    if( marged[j]>marged[j+1]){
		    int temp=marged[j];

		     marged[j]=marged[j+1];
		     marged[j+1]=temp;
		    }
		   }
	   }

	   


printf("the sorted array is\n ");

 for(int i=0;i<7;i++){
	  printf("%d\n",marged[i]);
 }
double median;

	   int size=7;
	   if(size%2==0){//even
		   median =marged[size/2]+(marged[size/2]+1);
	 }
 else{
 median =marged[size/2];

	  }

		    printf(" the median is %.2f\n:",median);
}	    
