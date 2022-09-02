#include <stdio.h>

int main(void) {

  int num[8];
  int max;
  int a = 1;

  for(int i = 0; i < 9; i++)
    scanf("%d", &num[i]);
  
  max = num[0];
  
  for(int j = 0; j < 9; j++){
    if(max < num[j]){
      max = num[j];
      a = j + 1;
    }
  }

  printf("%d\n%d", max, a);
  
  return 0;  
}
