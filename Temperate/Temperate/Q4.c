#include<stdio.h>

int main(){
	int i,j;
	
	printf("Enter value : ");
	scanf("%d",&i);
	
	j=i%10;
    while(i>9){
		
		i=i/10;
		
		
	}
		

	printf("sum of first and last digit : %d",i+j);
  
  return 0;
}
