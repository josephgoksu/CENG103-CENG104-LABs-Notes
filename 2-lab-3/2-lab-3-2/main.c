#include <stdio.h>
struct student{
    char adci[50];
    float ortalama;
    float marks[5];
};

int main(int argc, const char * argv[]) {
    struct student ogrenci[10];
    int i;
    int j=0;
    printf("Enter information of students:\n");
    for(i=0;i<3;++i){
        printf("Enter name of %d. stdent: ", i+1);
        scanf("%s",ogrenci[i].adci);

        for (j=0; j<5; j++) {
            printf("Enter %d. mark: ",j+1);
        scanf("%f",&ogrenci[i].marks[i]);
            ogrenci[i].ortalama += ogrenci[i].marks[i];
    }
        printf("\n");
    }

    for(i=0;i<3;++i){
        printf("%d. Student\n",i+1);
        printf("--------------------\n");
        printf("Name: ");
        puts(ogrenci[i].adci);
        printf("Marks:");
        for (j=0; j<5; j++) {
            printf("%.2f  ",ogrenci[i].marks[i]);
        }
        printf("\n");
        printf("Roll: %.2f \n",ogrenci[i].ortalama/5);
        printf("--------------------\n\n");
    }
    return 0;
}