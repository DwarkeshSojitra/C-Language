#include<stdio.h>

int main(){
           
           int N,i=1,multi=1;
           
           printf("enter N :");
           scanf("%d",&N);
           
           do{
           	
           	multi=multi*i;
           	
           	i++;
		   }while(i<=N);
		   printf("\n%d",multi);
           
  return 0;		   	
}
