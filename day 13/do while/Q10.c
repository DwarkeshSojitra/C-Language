#include<stdio.h>

int main(){
           
           int N,i=1;
           
           printf("enter N :");
           scanf("%d",&N);
           
           do{
           	
           	printf("%d*%d=%d\n",N,i,N*i);
           	i++;
		   }while(i<=10);
           
  return 0;		   	
}
