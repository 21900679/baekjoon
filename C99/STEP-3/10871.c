#include <stdio.h>

int main(void) {

  int N; //정수 개수
  int A; //A보다 작은 수 구분
  int X[10000];

  scanf("%d %d", &N, &A);

  for(int i = 1; i <= N; i++){
    scanf("%d", &X[i]);
  }  

  for(int j = 1; j <= N; j++){
    if(X[j] < A){
      printf("%d ", X[j]);
    }
  }
  
  return 0;
    
}
