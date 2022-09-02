#include <stdio.h>

int main(void) {

  int T; // 케이스 개수
  int A[100], B[100];

  scanf("%d", &T);

  for(int i = 1; i <= T; i++)
    scanf("%d %d", &A[i], &B[i]);

  for(int j = 1; j <= T; j++)
    printf("Case #%d: %d\n",j, A[j]+B[j]);
  
  return 0;
    
}
