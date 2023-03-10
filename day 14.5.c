#include<stdio.h>

int main (){
	
	int i , n , Factorial=1 ;
	
	               printf("Enter the number Find Factorial : ");
        	       scanf("%d",&n);
	
	         for(i=1 ; i<=n ; i++ ){
		
		        Factorial = Factorial * i ;
		
        	}
	               printf("%d",Factorial);
	
	       return 0 ;
}
