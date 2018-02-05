/*

 */
#include <stdio.h>

int main(void)
{
  int tensu1[4][3] = {{91,63,78}, {67,72,46}, {89,34,53}, {32,54,34}};
  int tensu2[4][3] = {{97,67,82}, {73,43,46}, {97,56,21}, {85,46,35}};
  int tensu3[2][4][3];

  int i, j, k;
  double ave_kyoka, ave_seito;

  printf("1回目の点数\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      printf("%d, ", tensu1[i][j]);
      tensu3[0][i][j] = tensu1[i][j];
    }
    putchar('\n');
  }
  printf("2回目の点数\n");
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
      printf("%d, ", tensu2[i][j]);
      tensu3[1][i][j] = tensu2[i][j];
    }
    putchar('\n');
  }
  for(k = 0; k < 2; k++){
    printf("%d回目の点数\n", k+1);
    for(i = 0; i < 4; i++){
      for(j = 0; j < 3; j++){
        printf("%d, ", tensu3[k][i][j]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
  return 0;
 }
