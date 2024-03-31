#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A[2] = {420,69};
    int *P = (int *)malloc(2*sizeof(int));
    P[0] = 69;
    P[1] = 420;
    for (int i = 0 ; i < 2; i++) {
        printf("%d ",A[i]);
    }
    printf("\n");

    int *q = (int *)malloc(5*sizeof(int));
    for(int i = 0 ; i < 2 ; ++i){
        q[i] = P[i];
    }

    free(P);
    P=q;
    q = NULL;
    for (int i = 0 ; i < 5; i++) {
        printf("%d ",P[i]);
    }
    printf("\n");

    return 0;
}
