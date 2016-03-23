#include <stdio.h>

struct Kisiler{
    char sehir[50];
    char adiniz[50];
    int flag;
};

int main(int argc, const char * argv[]) {
    struct Kisiler kisi;
    char a;
    printf("What is your name:\n");
    gets(kisi.adiniz);
    printf("Are you from Turkey ( Y / N ) ");
    scanf("%c",&a);
        if ( a == 'Y' || a == 'y') {
            printf("Where is your hometown :");
            scanf("%s",kisi.sehir);
            kisi.flag = 1;
        }

        if ( a == 'N' || a == 'n') {
            printf("Where is your country :");
            scanf("%s",kisi.sehir);
            kisi.flag = 0;
        }
    printf("\n --------------- \n");
    printf("Your name is :");
    puts(kisi.adiniz);
    if (kisi.flag == 1) {
            printf("Your hometown is : ");
        }
        else{
            printf("Your county is : ");
        }
    puts(kisi.sehir);
    printf("\n");
    return 0;
}

