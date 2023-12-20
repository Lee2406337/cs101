#include <stdio.h>

int main(){
    int n = 7;
    int spc = n;
    for (int i = 1; i <= n; i++){
        for (int j = spc; j >= 1; j--){
            if (j > i) {
                printf(" ");
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
        spc--;
    }
    return 0;
}
