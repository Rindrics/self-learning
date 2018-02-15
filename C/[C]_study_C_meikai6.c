/*

 */
#include <stdio.h>
void rev_intary(int v[], int n){
    int i;
    for(i = 0; i < n ; i++){
        printf("%d", v[n-i-1]);
        printf(" ");
    }
}
int main(void){
    int ary[] = {0, -5, -150, 1, 200, 32, 41, 8, 10};
    printf("The array input was reversed. {"); rev_intary(ary, 9); printf("}\n");
    
    return 0;
}
