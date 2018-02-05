#include<stdio.h>

enum seasons {Spring, Summer, Fall, Winter, End};

void spring(void)
{
  puts("Mar, Apr, May");
}
void summer(void)
{
  puts("Jun, Jul, Aug");
}
void fall(void)
{
  puts("Sep, Oct, Nov");
}
void winter(void)
{
  puts("Dec, Jan, Feb");
}

enum seasons select(void)
{
  int tmp;
  do{
    printf("0. Spring; 1. Summer; 2. Fall; 3. Winter; 4. End:");
    scanf("%d", &tmp);
  }while(tmp < Spring || tmp > End);
  return tmp;
}

int main(void)
{
  enum seasons selected;
  do{
    switch(selected = select()){
      case Spring : spring(); break;
      case Summer : summer(); break;
      case Fall   : fall(); break;
      case Winter : winter(); break;
    }
  }while(selected != End);
  return 0;
}
