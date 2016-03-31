#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct stackNode {
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions(void);

int main (void){

    StackNodePtr stackPtr = 0;
    int choice;
    int value;
    instructions();
    printf("? ");
    scanf("%d" , &choice);

    while ( choice != 3 ){
        switch ( choice ){
            case 1:
                printf("Enter an integer : ");
                scanf("%d" , &value);
                push (&stackPtr , value);
                printStack ( stackPtr );
                break;

            case 2:
                if( !isEmpty( stackPtr )){
                    printf("The popped value is %d.\n" , pop( &stackPtr ));
                }
                printStack( stackPtr );
                break;
            default:break;
        }
        printf("? ");
        scanf("%d", &choice);
    }
    printf("End of run.\n");
    return 0;
}
void instructions(void){
    printf("Enter choice:\n"
                   "1 to push a value on the stack\n"
                   "2 to pop a value off the stack\n"
                   "3 to end program\n");
}
void push( StackNodePtr *topPtr , int info){
    StackNodePtr newPtr;
    newPtr = (StackNodePtr) malloc(sizeof( StackNode ) );
    if( newPtr != 0){
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else {
        printf("%d not inserted. No memory available.\n" , info);
    }
}

int pop( StackNodePtr *topPtr){
    StackNodePtr tempPtr;
    int popValue;
    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free( tempPtr );
    return popValue;
}

void printStack( StackNodePtr currentPtr ){
    if(currentPtr == 0){
        printf("The stack is Empty.\n");
    }
    else {
        printf("The stack is : \n");

        while ( currentPtr != 0 ){
            printf("%d --->" , currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}

int isEmpty( StackNodePtr topPtr ){
    return topPtr == 0;
}