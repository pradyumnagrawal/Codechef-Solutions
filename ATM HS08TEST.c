#include <stdio.h>

int main(void) {
  int x;
  float y;
  scanf("%d",&x);
  scanf("%f",&y);
  
  
  
   if(x%5==0&&(y-x-0.5)>=0)
  {
  y=y-0.50;
  
  
  printf("%.2f",y-x );
  }
  else if(x%5!=0)
  printf("%.2f",y);
  else
  
  printf("%.2f",y);
  
  
  return 0;
}
