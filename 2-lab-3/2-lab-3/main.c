//  Author: Yusuf Emre Göksu. Emeğe saygı
#include <stdio.h>

struct disrupter {
    int numerator;
    int denumerator;
    int gcd;
    int lcm;
    int sonNum;
};
int gcd(struct disrupter fraction,struct disrupter fraction2);
int lcm(struct disrupter fraction,struct disrupter fraction2);
int main(void) {
    int toNm;
    int toDm;
    struct disrupter fraction;
    struct disrupter fraction2;
    printf("Please Enter The First Fraction:");
    scanf("%d%d",&toNm,&toDm);
    fraction.numerator=toNm;
    fraction.denumerator=toDm;
    printf("\n");
    printf("Please Enter The Second Fraction:");
    scanf("%d%d",&toNm,&toDm);
    printf("\n");
    fraction2.numerator=toNm;
    fraction2.denumerator=toDm;
    fraction.gcd = gcd(fraction,fraction2);
    fraction.lcm = lcm(fraction, fraction2);
    printf("%d/%d + %d/%d = ",fraction.numerator,fraction.denumerator,fraction2.numerator,fraction2.denumerator);
    fraction.numerator = fraction.numerator * ( fraction.lcm/fraction.denumerator);
    fraction2.numerator = fraction2.numerator * ( fraction.lcm/fraction2.denumerator);
    fraction.sonNum = fraction.numerator + fraction2.numerator;
    printf("%d/%d \n\n",fraction.sonNum,fraction.lcm);
    return 0;
}
int gcd( struct disrupter fraction,struct disrupter fraction2 ){
    int i;
    int ebob = 0;
    for (i = 1; i<fraction2.denumerator || i<fraction.denumerator; i++) {
        if(fraction.denumerator%i == 0 && fraction2.denumerator%i == 0)
        {
            ebob = i;
        }
    }
    return ebob;
}

int lcm(struct disrupter fraction,struct disrupter fraction2){
    int ekok=0;
    ekok = (fraction.denumerator * fraction2.denumerator) / fraction.gcd;
    return ekok;
}
