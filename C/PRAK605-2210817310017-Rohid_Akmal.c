#include <stdio.h>

void main(){
    int ordo, x, y, z, isi, hsl;
    scanf("%d", &ordo);
    int matrik1[ordo][ordo], matrik2[ordo][ordo];
    printf("\nMatriks A\n");
    for(x = 0; x < ordo; x++){
        for(y = 0; y < ordo; y++){
            scanf("%d", &isi);
            matrik1[x][y] = isi;}}
    printf("\nMatriks B\n");
    for(x = 0; x < ordo; x++){
        for(y = 0; y < ordo; y++){
            scanf("%d", &isi);
            matrik2[x][y] = isi;}}
    printf("\nMatriks A x B\n");
    for(x = 0; x < ordo; x++){
        for(y = 0; y < ordo; y++){
            for(z = 0, hsl = 0; z < ordo; z++){
                hsl += matrik1[x][z] * matrik2[z][y];}
            printf("%d ", hsl);}
    printf("\n");}
}