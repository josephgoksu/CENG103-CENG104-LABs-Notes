#include <stdio.h>
#include <string.h>
void degistir(int *ilk, int *ikinci, int *uc);
int main(void) {
    int A=0;
    int B=0;
    int C=0;
    int *a;
    int *b;
    int *c;

    printf("A : ");
    scanf("%d",&A);
    printf("B : ");
    scanf("%d",&B);
    printf("C : ");
    scanf("%d",&C);
    a=&A;
    b=&B;
    c=&C;
    printf("A = %d , B = %d , C = %d \n",A,B,C);
    degistir(a,b,c);
    return 0;

}
void degistir(int *first, int *second, int *third){
    int *x;
    x = second;
    second = first;
    first = third;
    third = x;
    printf("A = %d , B = %d , C = %d \n",*first,*second,*third);

}
