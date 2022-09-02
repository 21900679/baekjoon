#include <stdio.h>

int main(void) {

  int A[100], B[100];

  for(int i = 1; ; i++){
    scanf("%d %d", &A[i], &B[i]);
    if(A[i]==0 && B[i]==0){
      for(int j = 1; j <= i-1; j++)
        printf("%d\n", A[j]+B[j]);
      break;
    }
      
  }
  
  return 0;
    
}
