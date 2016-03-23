#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char sentence[50];
    int transporter[100];
    int i = -1;
    int j = 0;
    printf("sentenceyi yazin(sonuna nokta koyunuz):\n");
    gets(sentence);
    do{
    i++;
    printf("%c",sentence[i]);
    j++;
        if(sentence[i] == ' ' || sentence[i] == '.'){
        printf("%d\n",j-1);
        j=0;
        }
    }
    while(sentence[i] != '.');
    return 0;
}
