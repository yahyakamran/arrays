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
    for (int i = 0 ; i < 2; i++) {
        printf("%d ",P[i]);
    }
return 0;
}
