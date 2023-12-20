#include <stdio.h>

int main()
{
    int i = 123456; 
    int more_thousand = i - (i % 10000);
    int thousand = i / 1000 % 10;
    int hundred = i / 100 % 10;
    int ten = i / 10 % 10;
    int one = i / 1 % 10;
    int temp = thousand;
    thousand = one;
    one = temp;
    int ans_num = more_thousand + one * 1 + ten * 10 + hundred * 100 + thousand * 1000;
    printf("%d=>%d\n", i ,ans_num);
    return 0;
}
