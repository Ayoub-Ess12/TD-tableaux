#include <stdio.h>

int main() {
    int N;

    printf("entre la taille des tablaux :");
    scanf("%d", &N);

    int TT[N], T1[N], T2[N];

    for (int i = 0; i < N; i++) {
        printf("remplit le tablaux T1 :");
        scanf("%d", &T1[i]);
    }
    for (int j = 0; j < N; j++) {
        printf("remplit le tablaux T2 :");
        scanf("%d", &T2[j]);

    }
    for (int k = 0; k < N; k++) {
        TT[k] = T1[k] + T2[k];
        printf(" indice %d :%d ", k, TT[k]);

    }

    return 0;
}
