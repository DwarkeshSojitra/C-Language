#include<stdio.h>

int main(){
           
           int N,i,multi=1;
           
           printf("enter N :");
           scanf("%d",&N);
           
           for(i=1;i<=N;i++){
           	
           	multi=multi*i;
           	
           	
		   }printf("\n%d",multi);
           
  return 0;		   	
}
