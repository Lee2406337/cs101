#include <stdio.h>

int main()
{
    int i = 8;
    if(i & (i-1)){
        printf("ture");
    }
    else{
        printf("false");
    }
    return 0;
}
