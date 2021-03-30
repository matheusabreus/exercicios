
#include <stdio.h>

int main()
{
    float x=0,y=0, xdir=0,xesq=0,ycima=0,ybaixo=0;
    char b;
    scanf("%f %f", &x, &y);
    xdir = x + 11;
    xesq = x - 11;
    ycima = y + 11;
    ybaixo = y - 11;
        //printf("%f %f", xdir,xesq);
        if ((xesq <=58) || (xdir >=790) || (ycima >=244)){
            printf("UHHH");}
        else if ((xdir <= 98) && (xesq >= 58) && (ycima <= 244) && (ybaixo >=204)){
            printf("GOLACO");
                       }
        else if ((xdir <= 790) && (xesq >= 750) && (ycima <= 244) && (ybaixo >=204)){
            printf("GOLACO");
        } else{
                    printf("GOL");
                }
         
}
