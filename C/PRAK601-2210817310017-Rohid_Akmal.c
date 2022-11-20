#include <stdio.h>

void main(){
    int b, k, i, j, in;
    scanf("%d %d", &b, &k);
    int matrik[b][k];
    for (i = 0; i < b; i++){
        for (j = 0; j < k; j++){
        scanf("%d", &in);
        matrik[i][j] = in;}
    }
    printf("\n");
    for (i = 0; i < b; i++){
        for (j = 0; j < k; j++){
            printf("%d ", matrik[i][j]);}
        printf("\n");}
}