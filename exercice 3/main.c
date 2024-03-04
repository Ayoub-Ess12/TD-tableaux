#include <stdio.h>

int main() {

    int T1[100],T2[100] ,N ,c;
    do {

    printf("entre la taille :");
    scanf("%d",&N);

} while (N>100 || N<= 0);

    for (int i = 0; i < N; i++) {
        printf("remplis le tableau 1:");
        scanf("%d",&T1[i]);
    }
    for (int j = 0; j < N; j++) {
        printf("rempis le tableau 2:");
        scanf("%d",&T2[j]);
    }
    for (int k = 0; k < N; k++) {
       if(T1[k]==T2[k]){
       c++ ;
    } if(N=c){
            printf("egaux");
       }
    }

    return 0;
}
