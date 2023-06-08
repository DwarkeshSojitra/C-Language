#include<stdio.h>

int main(){
           
           int N,i=1,multi=1;
           
           printf("enter N :");
           scanf("%d",&N);
           
           while(i<=N){
           	
           	multi=multi*i;
           	
           	i++;
		   }printf("\n%d",multi);
           
  return 0;		   	
}
