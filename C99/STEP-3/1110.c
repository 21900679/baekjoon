#include <stdio.h>

int main(void) {

  int N; //처음 주어진 수
  int first, second; 
  int sum = 0;
  int newnum = 0; //새로운 수
  int a = 0; //사이클 길이

  scanf("%d", &N);

  newnum = N;
  
  for(int i = 1;;i++){
    first = newnum / 10;
    second = newnum % 10;
    sum = first + second;
    newnum = second * 10 + sum % 10;
    a++;
    if(newnum == N)
      break;
  }
  printf("%d", a);
  
  return 0;
    
}
