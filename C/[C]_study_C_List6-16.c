#include <stdio.h>

void mat_mul(const int [4][3], const int b[4][3], int c[2][4][3])
{
  int i, j;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      c[0][i][j] = a[i][j];
      c[1][i][j] = b[i][j];
    }
  }
}
void mat_print2(const int m[4][3])
{
  int i, j;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 4; j++){
      printf("%8d", m[i][j]);
    }
    putchar('\n');
  }
}
void mat_print3(const int m[2][4][3])
{
  int i, j, k;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 4; j++){
      for(k = 0; k < 3; k++)
      printf("%8d", m[i][j][k]);
    }
    putchar('\n');
  }
}
int main(void)
{
  int tensu1[4][3] = {{30, 40, 65},{45, 76, 56},{39, 73, 29},{22, 80, 65}};
  int tensu2[4][3] = {{10, 20, 30},{24, 89, 78},{30, 45, 65},{34, 88, 79}};
  int multiple[2][4][3];

  mat_mul(tensu1, tensu2, multiple);
  puts("1回目の点数"); mat_print2(tensu1);
  puts("1回目の点数"); mat_print2(multiple);
  puts("1回目の点数"); mat_print(multiple);

  return 0;
}
