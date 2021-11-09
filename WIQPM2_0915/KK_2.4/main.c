#include <stdio.h>
#include <stdlib.h>

void ir();
void olvas(int);

struct Auto {
    char rendszam[6];
    char tipus[20];
    double ar;
};

int main()
{
    ir();
    olvas(1);
    return 0;
}

void ir(){
    struct Auto a;
    FILE *f;
    int i=0;
    printf("rsz:");
    scanf("%s", &a.rendszam);
    printf("tipus:");
    scanf("%s", &a.tipus);
    printf("ar:");
    scanf("%d", &a.ar);
    f = fopen("Autok.bin", "wb");
    fwrite(&(a), sizeof(struct Auto), 1, f);
    fclose(f);
}

void olvas(int poz){
    FILE *f;
    f = fopen("Autok.bin", "rb");
    struct Auto a;
    if (f == NULL) {
        printf ("Hiba a fajl megnyitasakor. \n");
        return;
    }
    fseek(f, (poz-1)*sizeof(struct Auto), 0 );
    fread(&a, sizeof(struct Auto), 1, f);
    printf ("rsz: %s\n", a.rendszam);
    printf ("tip: %s\n", a.tipus);
    printf ("ar: %d\n", a.ar);
    fclose(f);
}
