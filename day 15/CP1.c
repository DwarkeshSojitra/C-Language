#include<stdio.h>

int main(){
	
	char i,j;
	
	for(i=5; i>=1; i--){             
		             
		for(j=1; j<=i; j++){
			
			printf("%d",j);
		}
	    printf("\n");
	}
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=i; j++){
			
			printf("%d",j);
		}
		printf("\n");
	}
  return 0;
}
