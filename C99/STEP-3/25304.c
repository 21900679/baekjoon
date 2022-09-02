#include <stdio.h>

int main(void) {

  int X; //총 금액 
  int N; //종류의 수
  int a[100], b[100]; //a: 물건의 가격, b: 개수
  int result = 0;

  scanf("%d %d", &X, &N);

  for(int i = 1; i <= N; i++)
    scanf("%d %d", &a[i], &b[i]);

  for(int j = 1; j <= N; j++)
    result = result + a[j]*b[j];

  if(result == X)
    printf("Yes");
  else
    printf("No");

  return 0;
    
}
