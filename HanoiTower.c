#include<stdio.h>
#include<conio.h>
int status;
 
/*PUSH FUNCTION*/
void push (int stack[], int item,int* top)
{   
	*top=*top+1;
	stack[*top] = item;
    }
 
/*POP FUNCTION*/
int pop (int stack[],int* top)
{  
    int ret;
    if (*top == -1)
    {   ret = 0;
    }
    else
    {   
	ret = stack [*top];
	*top=*top-1;
    }
return ret;
}
display(int stack[],int top){
	int loop;
	for(loop=0;loop<=top;loop++){
		printf("%d \t",stack[loop]);
	}
}
int main(){
	char z;
	do{
	int top1=-1;
	int top2=-1;
	int top3=-1; 
	int stack1[10];
    int stack2[10];
	int stack3[10];	
	int level;
	int moves=0;
	
	printf("\t\t***********HANOI TOWER***********\n\n");
//	while(level>0 && level<9){
	printf("Select Level Of Tower From 1 to 8 = \t");
	scanf("%d",&level);
	printf("\n\n");
	if(level>8){
		printf("\nSorry Level Not In Range\n");
		break;
	}
	
	else{
		int loop;
		for(loop=level;loop>0;loop--){
			push(stack1,loop,&top1);
		}
			printf("Stack 1: ");
			display(stack1,top1);
			printf("\n");
			printf("Stack 2: ");
			display(stack2,top2);
			printf("\n");
			printf("Stack 3: ");
			display(stack3,top3);
			printf("\n");
			printf("Your Moves: %d\n\n",moves);
	}
	int logout=1;
	
	while(logout && top3<level-1){
	printf("\nSelect one:\n");
	printf("1)From Stack1 to Stack2\n");
	printf("2)From Stack1 to Stack3\n");
	printf("3)From Stack2 to Stack1\n");
	printf("4)From Stack2 to Stack3\n");
	printf("5)From Stack3 to Stack1\n");
	printf("6)From Stack3 to Stack2\n");
	printf("7)Exit Game\n\n");
	int choice;
	int val;
	scanf("%d",&choice);
	system("cls");
	printf("\n");
	printf("\n");
	switch(choice){
		case 1:
			if(top1==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top2==-1){
				val=pop(stack1,&top1);
				push(stack2,val,&top2);
				moves++;
				
			}
			else{
				if(stack2[top2]<stack1[top1]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack1,&top1);
					push(stack2,val,&top2);
					moves++;
				}
			}
			break;
		case 2:
			if(top1==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top3==-1){
				val=pop(stack1,&top1);
				push(stack3,val,&top3);
				moves++;
			}
			else{
				if(stack3[top3]<stack1[top1]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack1,&top1);
					push(stack3,val,&top3);
					moves++;
				}
			}

			break;
		case 3:
			if(top2==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top1==-1){
				val=pop(stack2,&top2);
				push(stack1,val,&top1);
				moves++;
			}
			else{
				if(stack1[top1]<stack2[top2]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack3,&top3);
					push(stack1,val,&top1);
					moves++;
				}
			}
			break;
		case 4:
			if(top2==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top3==-1){
				val=pop(stack2,&top2);
				push(stack3,val,&top3);
				moves++;
			}
			else{
				if(stack3[top3]<stack2[top2]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack2,&top2);
					push(stack3,val,&top3);
					moves++;
				}
			}
			break;
		case 5:
			if(top3==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top2==-1){
				val=pop(stack3,&top3);
				push(stack1,val,&top1);
				moves++;
			}
			else{
				if(stack1[top1]<stack3[top3]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack3,&top3);
					push(stack1,val,&top1);
					moves++;
				}
			}
			break;
		case 6:
			if(top3==-1){
				system("cls");
				printf("*******No value to move*******\n\n");
			}
			else if(top2==-1){
				val=pop(stack3,&top3);
				push(stack2,val,&top2);
				moves++;
			}
			else{
				if(stack2[top2]<stack3[top3]){
					system("cls");
				printf("======================================");
				printf("\nHigher Number Can't come on Small\n");
				printf("======================================\n\n");
				}
				else{
					val=pop(stack3,&top3);
					push(stack2,val,&top2);
					moves++;
				}
			}
		break;
		case 7:
			logout=0;
			break;
		default:
			system("cls");
		printf("\n***********  NOTE:Select from 1 to 6  ********** \n\n");		
		}
		    printf("Stack 1: ");
			display(stack1,top1);
			printf("\n");
			printf("Stack 2: ");
			display(stack2,top2);
			printf("\n");
			printf("Stack 3: ");
			display(stack3,top3);
			printf("\n");
			printf("Your Moves: %d\n\n",moves);
		
			
		}
			if(top3==level-1){
			system("cls");
			printf("**************Congratulation! You Won**************\n\n");
			printf("Stack 1: ");
			display(stack1,top1);
			printf("\n");
			printf("Stack 2: ");
			display(stack2,top2);
			printf("\n");
			printf("Stack 3: ");
			display(stack3,top3);
			printf("\n");
			printf("Your Moves: %d\n\n",moves);
		}
		
		printf("Press AnyKey to Play Again Or Escape To Exit\n\n");
		z=getch();
		system("cls");
	}
	while(z!=27);
}
/*FUNCTION TO DISPLAY STACK*/
//void display (int stack[],int stack2[],int stack3[],int top)
//{   int i;
//    if (top == -1)
//	printf ("empty");
//    else
//    {printf("Stack1\tStack2\tStack3");   
//	for (i=top; i>=0; --i)
//	   printf ("\n\n %d \t %d \t %d",stack[i],stack2[i],stack3[i]);
//    }
//    printf ("\n");
//}
 
