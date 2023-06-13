/*#include<stdio.h>

int main(){
	
	char i,j,s;
	
	for(i=1; i<=5 ;i++){
		
		for(j=1; j<=i ; j++){
			
			s=s+1;
			printf("%c",s);
		}
		printf("\n");
	}
  return 0;
}

*/

#include<stdio.h>

int main(){
	
	char i,j,s=65;
	
	for(i=1 ; i<=5; i++){
		
		for(j=1 ; j<=i ; j++){
			
			//printf("%d",j);
			
			printf(" %c",s);
			s=s+1;
			}
			printf("\n");
	}
  return 0;	
}
