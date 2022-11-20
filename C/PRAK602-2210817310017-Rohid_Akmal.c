#include <stdio.h>

void main(){
    int b, i, in;
    scanf("%d", &b);
    int zetsu[b];
    for (i = 0; i < b; i++){
        scanf("%d", &in);
        zetsu[i] = in;
    }
    for(i = 0; i < b; i++){
        printf("%d ", zetsu[i] * (i + 1));
    }
}