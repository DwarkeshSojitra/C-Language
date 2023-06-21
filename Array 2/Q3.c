#include<stdio.h>

int main(){
	
	int m,n,i,j,sum=0,avg;
	
	printf("enter the number of Rows (m) : ");
	scanf("%d",&m);

    printf("enter the number of Columns (n) : ");
	scanf("%d",&n);

    printf("\n");
    
    int a[m][n];
    
    for(i=0; i<m; i++){
    	
    	for(j=0; j<n; j++){
    		
    		printf("enter element of a[%d][%d] : ",i,j);
    		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

//print array:-	
	for(i=0; i<m; i++){
    	
    	for(j=0; j<n; j++){
    		
    		printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

// avg of array :- 	
	for(i=0; i<m; i++){
    	
    	for(j=0; j<n; j++){
    		
    		sum = sum + a[i][j];
    		avg=sum/(m*n);
 		}
 		printf("\n");
	}
	printf("sum of this 2D array : %d ",sum);
	printf("\navg of this 2D array : %d",avg);
		
	
  return 0;
}
