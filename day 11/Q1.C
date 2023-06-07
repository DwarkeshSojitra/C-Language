#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("\n..-*welcome to God Stuff Cafe*-..\n");
	printf("\n1.food \n2.coffee \n3.Moctail\n ");
    printf("\nenter your order:");
	scanf("%d",&a);
	
	switch(a){
		 
		     case 1:
		          printf("\n1.cheesecake");
		          printf("\n2.brownie");
		          printf("\n3.cheese croissant");
		          printf("\n4.cruffin");
				  
				  printf("\n\norder your food:");
				  scanf("%d",&b);
			
			 switch(b){
			 	 
			 	  case 1:
			 	  	   printf("\n\nyour order is cheesecake");
			 	  	   break;
			 	  
				  case 2:
				       printf("\nyour order is brownie");
					   break;
					   
				  case 3:
				       printf("\nyour order is cheese croissant");
					   break;
					   
				  case 4:
				       printf("\nyour order is cruffin");
					   break;
					  
				  default:
				       printf("\nInvalid Input");
					   break;
			 }break;
			 
			 case 2:
			 	  printf("\n1.Espresso");
                  printf("\n2.Latte");
				  printf("\n3.Mocha");				
				  printf("\n4.Hazelnut");
				  
				  printf("\n\norder your coffee: ");
				  scanf("%d",&c);
			 
			 switch(c){
			 	
			 	 case 1:
			 	  	   printf("\nyour order is Espresso");
			 	  	   break;
			 	  
				  case 2:
				       printf("\nyour order is Latte");
					   break;
					   
				  case 3:
				       printf("\nyour order is Mocha");
					   break;
					   
				  case 4:
				       printf("\nyour order is Hazelnut");
					   break;
					  
				  default:
				       printf("\nInvalid Input");
					   break;
		     }
			 break;
			  
			 case 3:
			 	  printf("\n1.Rose punch");
                  printf("\n2.Faux fizz");
				  printf("\n3.Apple");				
				  printf("\n4.crenberry");
				  
				  printf("\n\norder your mocktail: ");
				  scanf("%d",&c);
			 
			 switch(c){
			 	
			 	 case 1:
			 	  	   printf("\nyour order is rose punch");
			 	  	   break;
			 	  
				  case 2:
				       printf("\nyour order is faux fizz");
					   break;
					   
				  case 3:
				       printf("\nyour order is apple");
					   break;
					   
				  case 4:
				       printf("\nyour order is creanbeery");
					   break;
					  
				  default:
				       printf("\nInvalid Input");
					   break;
		     }break;   
		     
		     default:
		     	printf("\nInvalid Input");
		     	break;
	}
	return 0;
}

