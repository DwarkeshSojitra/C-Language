#include<stdio.h>

int main(){
	int i,ld,fd;
	
	printf("Enter value : ");
	scanf("%d",&i);
	
	ld=i%10;
	
	
    while(i>9){
		
		fd=i/10;
		
		
	}
	printf("last dijit :  %d",ld);
	
	printf("first dijit :  %d",i/10);
	

	printf("%d",fd+ld);
  
  return 0;
}
