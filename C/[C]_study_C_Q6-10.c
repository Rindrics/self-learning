/*

 */
#include <stdio.h>
void intary_rcpy(int v[], const int v2[], int n){
    int i;
    for(i = 0; i < n ; i++){
        printf("%d", v2[n-i-1]);
        printf(" ");
    }
}
int main(void){
    int i;
    int ary[6];
    int ary2[6] = {0, -5, -150, 1, 200, 32};
    printf("The initial array is {");
    for(i = 0; i<6; i++){
        if(i != 5){
            printf("%d, ", ary2[i]);
        }else{
            printf("%d}", ary2[i]);
        }
    }
    putchar('\n');
    printf("The array input was reversed. {");
    intary_rcpy(ary, ary2, 6); printf("}\n");
    return 0;
}
