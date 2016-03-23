#include <stdio.h>
int main(void) {
    int i=0;
    int j=0;
    FILE *lab4;
    lab4 = fopen("/home/daimon/Desktop/yusuf.txt", "w+");
    for (i=0; i<3; i++) {
        for (j=0; j<5; j++) {
            fprintf(lab4,"*");
        }
        fprintf(lab4,"\n");
    }
    fprintf(lab4,"\n");
    for (i=0; i<=5; i++) {
        if (i%2 == 1) {
            for (j=0 ; j<i; j++) {
                fprintf(lab4,"*");
            }
            fprintf(lab4,"\n");
        }
    }
    fprintf(lab4,"\n");
    for (i=1; i<=3; i++) {
        if (i % 3 != 0) {
            fprintf(lab4,"*\n");
        }
        else{
            for (j=0; j<5; j++) {
                fprintf(lab4,"*");
            }
            fprintf(lab4,"\n");
        }
    }
    fprintf(lab4,"\n");
    fclose(lab4);
    return 0;
}
