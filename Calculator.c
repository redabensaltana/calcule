#include <stdio.h>
#include <stdlib.h>


	

int main (){
		printf("\n\t\tMENU\n");
		printf("\t1) arithmetic operations\n\t2) logical operations\n\t3) comparaison\n\t4) history\n\n\t");
		
		int firstNum,secondNum,result;
		int choice;
		char operato;
		
		scanf("%d",&choice);
		
		//menu
		switch(choice){
			case 1:
				system("cls");
				
					printf("Enter the first number : ");
					scanf("%d",&firstNum);
					printf("\nEnter the second number : ");
					scanf("%d",&secondNum);
					printf("\nchoose the operator :");
					scanf("%s",&operato);
						
						//arithmetic operations
						switch(operato){
							case '+':
								result = firstNum+secondNum;
								printf("%d + %d = %d",firstNum,secondNum,result);
								break;
							case '-':
								result = firstNum-secondNum ;
								printf("%d - %d = %d",firstNum,secondNum,result);
								break;
							case '*':
								result = firstNum*secondNum;
								printf("%d * %d = %d",firstNum,secondNum,result);
								break;
							case '/':
								result = firstNum/secondNum ;
								printf("%d / %d = %d",firstNum,secondNum,result);
							default:
								printf("\n choose an operator !!");
						}		
//				logicqal operation

			case 2:
				system("cls");
				
					int number1,number2;
					printf("please enter 1 or 0 : ");
					scanf("%d",&number1);
					printf("please enter 1 or 0 :");
					scanf("%d",&number2);
					
					int opeLogic ;

   					 printf("\t1. 1 . and\n");
    				printf("\t2. 2 . nand\n");
   					 printf("\t3. 3 . or\n");
    				printf("\t4. 4 . nor\n");
   					 printf("\t5. 5 . xor \n\n");
    				printf("\tChoose the logical operator: ");
    				scanf(" %d", &opeLogic);
    				
    				int andop() {
	   					 int number1,number2;
	   					 printf (" please enter 1 or 0 : ");
	   					 scanf ("  %d", &number1);
	   					 printf (" please enter 1 or 0 : ");
	   					 scanf ("  %d", &number2);
	
	   					 if (number1 == 1 && number2 == 1)
	   					 printf(" logical answer is : 1 "); 
	   					 else
	    			    printf(" logical answer is : 0 ");
							}
					int nand() {

							    int number1,number2;
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number1);
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number2);
							
							    if (number1 == 1 && number2 == 1) 
							        printf(" logical answer is : 0 ");
							
							    else printf(" logical answer is : 1 ");

							}
							int orep() 
							{
							
							    int number1,number2;
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number1);
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number2);
							
							    if (number1 == 0 && number2 == 0) 
							        printf(" logical answer is : 0 ");
							
							    else printf(" logical answer is : 1");
							
							}
							int nor() {
							
							    int number1,number2;
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number1);
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number2);
							
							    if (number1 == 0 && number2 == 0) 
							        printf(" logical answer is : 1 ");
							
							    else printf(" logical answer is : 0");

							}
							int xorep() 
											{
							
							    int number1,number2;
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number1);
							    printf (" please enter 1 or 0 : ");
							    scanf ("  %d", &number2);
							
							    if (number1 == 0 && number2 == 0 || number1 == 1 && number2==1) 
							        printf(" logical answer is : 0 ");
							
							    else printf(" logical answer is : 0");
												
											
								}
    						
							switch (opeLogic)
    							{
       							 case 1: 
									andop();
        							break;
        						 case 2: nand();
       								 break;
       							 case 3: orep();
       								 break;
        						case 4: nor();
        							break;
        						case 5: xorep();
       								 break;
       						
   								 }




 }



}
