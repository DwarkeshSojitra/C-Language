#include<stdio.h>
#include<string.h>

void div(int a){
	
	
	if(a%3==0 && a%5==0){
	
	   printf("a is divide by 3 & 5 both.");
    }
    else{
    	printf("a is not divide 3 & 5 both.");
	}
}

int main(){

   int n;
   
   printf("enter number : ");
   scanf("%d",&n);
   
   div(n);
 
  return 0;
}
