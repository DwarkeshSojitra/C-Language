#include<stdio.h>

void sum(int a,int b){
	
	printf("Sum : %d\n\n",a+b);
} 

void sub(int a,int b){
	
	printf("Sub : %d\n\n",a-b);
} 

void div(int a,int b){
	
	printf("Div : %d\n\n",a/b);
} 
 
void mul(int a,int b){
	
	printf("Mul : %d\n\n",a*b);
} 




int main(){
	
	int a,b;
	char sign;
	
	while(1){
		
		printf("Enter a : ");
		scanf("%d",&a);
		
		printf("Enter b : ");
		scanf("%d",&b);
		
		printf(" '+','-','/','*' ");
		
		Printf("selection : ");
		scanf("%c",&sign);
		
		   switch(sign){
		   	
		   	     case '+':
		   	     	sum(a,b);
		   	     	break;
		   	     	
		   	     case '-':
		   	     	sub(a,b);
		   	     	break;
		   	     
				 case '/':
		   	     	div(a,b);
		   	     	break;		
		   	     	
		   	     case '*':
		   	     	mul(a,b);
		   	     	break;
		   	     	
		   	   
		   }
	}
	return 0;
}
