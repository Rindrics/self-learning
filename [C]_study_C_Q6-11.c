#include <stdio.h>
#define NUMBER 5
#define FAILED -1

int search_idx(const int v[], int idx[], int key, int n)
{
  int i = 0;
  int j = 0;
  while(i<n){
    if(v[i]==key){
      idx[i]=v[i];
      j++;
    }
    i++;
  }
  return j;
}
int main(void)
{
  int i, ky, ans;
  int vx[NUMBER], idx[NUMBER];

  for(i=0; i<NUMBER; i++){
    printf("vx[%d]:", i);
    scanf("%d", &vx[i]);
  }
  printf("探す値:");
  scanf("%d", &ky);

  ans = search_idx(vx, idx, ky, NUMBER);
  printf("探す値と等しい要素は%d個あります。\n", ans);
  return 0;
}
