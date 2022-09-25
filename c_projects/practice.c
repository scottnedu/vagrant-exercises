#include <stdio.h>

int main(){
	   int age;

	      printf("Hello there!,Plz, enter your age\n(user): ");
	         scanf("%d", &age);
		    if (age <= 20 && age >=0){
			        printf("You are really young\n");
				   }
		       else if (age > 20 && age <=50){
			           printf("Wow you are mature\n");
				      }
		          else{
				      printf("You are old");
				         }
			     
			  return (0);
}
