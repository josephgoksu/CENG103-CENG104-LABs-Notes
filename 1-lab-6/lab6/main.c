#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int i;
    int x[31];
    int y[31];
    int islemtop=0;
    int islembol=0;
    int islem1=0;
    int islem2=0;
    int random;

    for (i = 0; i <= 30; i++) {
        random = 1+rand()%35;
        x[i] = random;
        random = 1+rand()%35;
        y[i] = random;

        islemtop = (x[i]+y[i]);
        islembol = (x[i]*2);
        islem1 = (islemtop/islembol);
        islem2 += islem1+x[i]+y[i];
    }

    printf("%d\n", islem2);
    return 0;
}
