#include <stdio.h>

int main(void) {

  int N;
  int num[1000000];
  int max, min;

  scanf("%d", &N);

  for(int i = 0; i < N; i++)
    scanf("%d", &num[i]);

  min = max = num[0];

  for(int j = 0; j < N; j++){
    if(max < num[j])
      max = num[j];
    if(min > num[j])
      min = num[j];
  }

  printf("%d %d", min, max);
  
  return 0;  
}
