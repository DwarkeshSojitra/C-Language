#include<stdio.h>

int main(){
	
	char i,j,k,s=65;
	
	for(i=65; i<=69; i++){
		
		for(k=69; k>i; k--){
			
			printf(" ");
		}             
		             
		for(j=i; j>=65; j--){
			
			printf("%c",j);
			s++;
		}
	    printf("\n");
	}
  return 0;
}
