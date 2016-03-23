#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char letters[20];
int i=0;
char letter;
printf("Enter a word\n");
scanf("%s",letters);
for(i=0 ; i<20; i++){
   letter = letters[i];
    if(letter == 'a'){
        printf(".- ");}
    if(letter == 'b'){
        printf("-... ");}
    if(letter == 'e'){
        printf(". ");}
    if(letter == 'k'){
        printf("-.- ");}
    if(letter == 'm'){
        printf("-- ");}
    if(letter == 'o'){
        printf("--- ");}
    if(letter == 'r'){
        printf(".-. ");}
    if(letter == 's'){
        printf("... ");}
    if(letter == 'z'){
        printf("--.. ");}
        if (letters[i]=='\0'){
            printf("Finish");
            break;
        }
}
return 0;
}
