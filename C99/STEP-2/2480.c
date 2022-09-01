#include <stdio.h>

int main(void) {

  int num1, num2, num3;
  int result;
  int max;

  scanf("%d %d %d", &num1, &num2, &num3);

  if((num1==num2)&&(num2==num3)){
    result = 10000+num1*1000;
    printf("%d",result);
  }
  else if((num1==num2)||(num2==num3)||(num1==num3)){
    if(num1==num2)
      result = 1000+num1*100;
    else if(num2==num3)
      result = 1000+num2*100;
    else
      result = 1000+num3*100;
    printf("%d",result);
  }
  else{
    max = num1;
    if(max < num2)
      max = num2;
    if(max < num3)
      max = num3;
    result = max*100;
    printf("%d", result);
  }
  
}
