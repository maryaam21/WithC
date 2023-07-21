#include <stdio.h>
int main(){
	int num1 ,num2,result;
	char operation;
	
	
	printf("Enter the operation  : \n");	
	scanf("%c", &operation);
		
	printf("Enter the first number : \n");
	scanf("%d", &num1);
	
	printf("Enter the second number : \n");	
	scanf("%d", &num2);
	
	
	switch(operation){
	case '+' : result = num1 + num2;
	printf("%d", result);
	break;
	
	case '-' : result = num1 - num2;
	printf("%d", result);
	break;
	
	case '*' : result = num1 * num2;
	printf("%d", result);
	break;	
	
	case '/' : result = num1 / num2;
	printf("%d", result);
	break;
	
	 default: printf("Invalid");
		
	}
	
	
	
}