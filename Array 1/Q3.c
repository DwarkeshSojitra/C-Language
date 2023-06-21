#include<stdio.h>

int main(){
	
	int n,i,sum=0,avg;
	
	printf("enter size of array (n) : ");
	scanf("%d",&n);
	
	printf("\n");
	
	int a[n];
	
	for(i=0; i<n; i++){
	
                   	printf("enter element a[%d] : ",i);
                   	scanf("%d",&a[i]);
    }
    
    for(i=0; i<n; i++){
                    
					sum=sum + a[i]; 	        
                   	avg=sum/n;
    }
	printf("\nsum of  element : %d  ",sum);
    printf("\navg of  element : %d  ",avg);
  
  return 0;
}
