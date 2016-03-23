#include <stdio.h>
int main(int argc, const char * argv[]) {
    FILE *lab4_1;
    char satir[250];
    char sozcuk[250];
    char anlam[250];
    char girilen[100];
    int i = 0;
    int j=0;
    int a = 0;
    int b = 1;
    lab4_1 = fopen("/home/daimon/Development/C/C-Lecture-Notes/2-lab-4/2-lab-4-2/dictionary.txt", "r");
    printf("Aramak istediğiniz sözcüğü girin : ");
    printf("\n");
    gets(girilen);
    printf("\n");
    while ( fgets ( satir ,sizeof satir,lab4_1) != NULL ) {
        for (i=0; satir[i] != ':'; i++) {
            if (satir[i] == girilen[i]) {
                puts(satir);
                a++;
                break;
            }
        }
   }
    if (a == 0) {
        printf("I don't know this word\n");
    }
    return 0;
}


