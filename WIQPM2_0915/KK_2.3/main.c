#include <stdio.h>
#include <stdlib.h>

void pelda_1();

int main()
{
    pelda_1();
    return 0;
}

void pelda_1(){
    FILE *fp1;
    FILE *fp2;
    char ch;
    char fnev1[50];
    char fnev2[50];
    printf("Filenev1 (olvas.txt van csak): ");
    scanf("%s", fnev1);
    printf("Filenev2: ");
    scanf("%s", fnev2);
    fp1=fopen(fnev1, "r");
    fp2=fopen(fnev2, "w");

    while( (ch = getc(fp1)) != EOF){
        putc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}
