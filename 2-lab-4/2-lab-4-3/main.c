#include<stdio.h>

int main() {
char phrase[100];
char* morse;
FILE *quest2;
quest2 = fopen("/home/daimon/Development/C/C-Lecture-Notes/2-lab-4/2-lab-4-3/output.txt", "w+");
fprintf(quest2,"\n");
printf("Enter a phrase:\n");
scanf("%s", phrase);
int i;
for(i = 0; phrase[i] != '\0'; i++) {
    switch(phrase[i]) {

    case 'a':
    case 'A':
    morse = ".-";
    break;

    case 'b':
    case 'B':
    morse = "-...";
    break;

    case 'c':
    case 'C':
    morse = "-.-.";
    break;

    case 'd':
    case 'D':
    morse = "-..";
    break;

    case 'e':
    case 'E':
    morse = ".";
    break;

    case 'f':
    case 'F':
    morse = "..-.";
    break;

    case 'g':
    case 'G':
    morse = "--.";
    break;

    case 'h':
    case 'H':
    morse = "....";
    break;

    case 'i':
    case 'I':
    morse = "..";
    break;

    case 'j':
    case 'J':
    morse = ".---";
    break;

    case 'k':
    case 'K':
    morse = "-.-";
    break;

    case 'l':
    case 'L':
    morse = ".-..";
    break;

    case 'm':
    case 'M':
    morse = "--";
    break;

    case 'n':
    case 'N':
    morse = "-.";
    break;

    case 'o':
    case 'O':
    morse = "---";
    break;

    case 'p':
    case 'P':
    morse = ".--.";
    break;

    case 'q':
    case 'Q':
    morse = "--.-";
    break;

    case 'r':
    case 'R':
    morse = ".-.";
    break;

    case 's':
    case 'S':
    morse = "...";
    break;

    case 't':
    case 'T':
    morse = "-";
    break;

    case 'u':
    case 'U':
    morse = "..-";
    break;

    case 'v':
    case 'V':
    morse = "...-";
    break;

    case 'w':
    case 'W':
    morse = ".--";
    break;

    case 'x':
    case 'X':
    morse = "-..-";
    break;

    case 'y':
    case 'Y':
    morse = "-.--";
    break;

    case 'z':
    case 'Z':
    morse = "--..";
    break;

    default:
    morse = " ";
    break;

    }

fprintf(quest2, morse);

}

fprintf(quest2,"\n");

fclose(quest2);
return 0;
}
