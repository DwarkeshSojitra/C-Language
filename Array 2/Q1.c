#include<stdio.h>

int main(){
	
	int m,n;
	
	printf("Enter the element of rows : ");
	scanf("%d",&m);
	
	printf("Enter the element of columns : ");
	scanf("%d",&n);
    
	printf("\n");	

	int i,j;
	int a[m][n];
	
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			printf(" Enter element of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
			
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

