#include <stdio.h>
int main(){
    int i = 1650;
    if(i <= 1500){
        printf("70");
    }
    else{
        int h = i - 1500;
        if(h%100){
            printf("%d",70 + ((h / 100)+1)*10);
        }
        else{
            printf("%d",70 + (h/100)*10);
        }
    }
    return 0;
}
