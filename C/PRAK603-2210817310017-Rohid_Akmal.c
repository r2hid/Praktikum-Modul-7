#include <stdio.h>

void main(){
    int b1, b2, i, in, hsl;
    scanf("%d %d", &b1, &b2);
    int baris1[b1], baris2[b2];
    if (b1 == b2){
        for (i = 0; i < b1; i++){
            scanf("%d", &in);
            baris1[i] = in;}
        for (i = 0; i < b2; i++){
            scanf("%d", &in);
            baris2[i] = in;}
        for (i = 0; i < b1; i++){
            hsl = baris1[i] * baris2[i];
            printf("%d ", hsl);}}
    else {
        printf("Jumlah tidak sama");}
}