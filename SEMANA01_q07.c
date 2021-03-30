
#include <stdio.h>

int main()
{
    int saque, cem=0,cinq=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
    char b;
    scanf("%d", &saque);
    if (saque >= 500){
        cem = cem + 5;
        saque = saque - 500;
        }
    if (saque >= 400){
        cem = cem + 4;
        saque = saque - 400;
        }
    if (saque >= 300){
        cem = cem + 3;
        saque = saque - 300;
        }
    if (saque >= 200){
        cem = cem + 2;
        saque = saque - 200;
        }
    if (saque >= 100){
        cem ++;
        saque = saque - 100;
        }
        if (saque >= 50){
        cinq ++;
        saque = saque - 50;
        }
        if (saque >= 20){
        vinte ++;
        saque = saque - 20;
        }
        if (saque >= 10){
        dez ++;
        saque = saque - 10;
        }
        if (saque >= 5){
        cinco ++;
        saque = saque - 5;
        }
        if (saque >= 2){
        dois ++;
        saque = saque - 2;
        }
        if (saque >= 2){
        dois ++;
        saque = saque - 2;
        }
        if (saque == 1){
        um ++;
        saque = saque - 1;
        }
        
        
printf("%d notas de R$ 100\n%d notas de R$ 50\n%d notas de R$ 20\n%d notas de R$ 10\n%d notas de R$ 5\n%d notas de R$ 2\n%d notas de R$ 1", cem, cinq, vinte, dez,cinco,dois,um);
    
    
}
