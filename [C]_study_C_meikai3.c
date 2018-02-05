/*

 */
#include <stdio.h>
#define NUMBER 80
#define CLASS 11
int main(void)
{
  int i, j, max;
  int num;
  int tensu[NUMBER];
  int bunpu[CLASS] = {0};

  printf("人数を入力してください: ");
  do{
    scanf("%d", &num);
    if(num < 1 || num > NUMBER)
      printf("\a1–%dで入力してください:", NUMBER);
  }while(num < 1 || num > NUMBER);

  printf("%d人の点数を入力してください．\n", num);
  for(i = 0; i < num; i++){
    printf("%2d番: ", i + 1);
    do{scanf("%d", &tensu[i]);
      if(tensu[i] < 0 || tensu[i] > 100){
        printf("\a1–100で入力してください: ");
      }
    }while(tensu[i] < 0 || tensu[i] > 100);
    bunpu[tensu[i] / 10]++;
  }
  max = bunpu[0];
  for(i = 0; i <= max; i++){
    for(j = 0; j < CLASS; j++){
      if(bunpu[j] > max - i){
        printf(" * ");
      }else{
        printf("   ");
      }
    }
    putchar('\n');
  }

  for(j = 0; j < CLASS; j++){
    printf("---");
  }
  putchar('\n');

  for(j = 0; j < CLASS; j++){
    printf(" %2d", j * 10);
  }
  putchar('\n');


  return 0;
 }
