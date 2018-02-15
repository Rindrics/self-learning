#include <stdio.h>
int main(void)
{
    /*comment
     can
     be broken into several
     lines*/
    int height;
    double stweight;
    printf("身長を入力して下さい．"); scanf("%d", &height);
    stweight = (double)(height - 100) * 0.9;
    printf("標準体重は%5.1fです．\n", stweight);
    return 0;
}
