#include<stdio.h>

int main(){
           
           int N,i=1,sum=0;
           
           printf("enter N :");
           scanf("%d",&N);
           
           do{
           	
           	sum=sum+i;
           	
           	i++;
		   }while(i<=N);
		   printf("\n%d",sum);
           
  return 0;		   	
}
