#include<stdio.h>

int main(){
	
	int m,n,i,j,length;
	
	printf("enter the number of rows (m) :");
	scanf("%d",&m);
 
    printf("enter the number of columns (n) :");
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
	
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
		printf(" %d ",a[i][j]);
     	}
		printf("\n");
	}
	
	printf("\n");
	length=sizeof(a)/sizeof(0);
	
	printf("length of this 2D array : %d",length);
  return 0;
}
