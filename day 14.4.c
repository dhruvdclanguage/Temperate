#include<stdio.h>

int main (){
	
	int n , sum=0 , First , last ;
	
       	       printf("Enter the value:");
       	       
               scanf("%d",&n);
	
           	   last = n%10 ;
	
	           while(n>= 10){
		
		       n=n/10;
		
    	}
	
	          First = n;
	
	          sum = First + last ;
	
	          printf("First and last digit : %d", sum);
	
	return 0 ;
}
