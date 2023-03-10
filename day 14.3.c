#include<stdio.h>

int main (){
	
	int n , number=0 ;
	
	printf("Enter the value to find  numbers:");
	scanf("%d",&n);
	
	while(n!=0){
		
		n=n/10;
		number++ ;
		
	}
	
	printf("Numbers your value : %d ",number);
	
	return 0 ;
}
