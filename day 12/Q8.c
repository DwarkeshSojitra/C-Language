#include<stdio.h>

int main(){
           
           int N,i=1,sum=0;
           
           printf("enter N :");
           scanf("%d",&N);
           
           while(i<=N){
           	
           	sum=sum+i;
           	
           	i++;
		   }printf("\n%d",sum);
           
  return 0;		   	
}
