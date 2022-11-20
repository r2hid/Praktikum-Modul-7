#include <stdio.h>
#include<string.h>

void main (){
    char pesan1[100], pesan2[100];
    int i1, i2, a, bintang = 0, pagar = 0;
    scanf("%[^\n]%*c", &pesan1);
    scanf("%[^\n]%*c", &pesan2);
    i1 = strlen(pesan1);
    i2 = strlen(pesan2);
    if(i1 != i2){
        printf("\nPanjang kalimat berbeda, pesan palsu\n");}
    else{
        for(a = 0; a < i1; a++){
            if(pesan1[a] == pesan2[a]){
                if(pesan1[a] == ' '){
                    printf(" ");}
                else{
                    printf("*");
                    bintang++;}}
            else{
                printf("#");
                pagar++;}}
        printf("\n\n* = %d", bintang);
        printf("\n# = %d", pagar);
        if(bintang >= pagar){
            printf("\nPesan asli");}
        else{
            printf("\nPesan Palsu\n");}
    }    
}