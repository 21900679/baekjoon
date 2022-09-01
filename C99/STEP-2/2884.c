#include <stdio.h>

int main(void) {

  int hour, minute;

  scanf("%d %d", &hour, &minute);

  if(minute - 45 < 0){
    hour = hour - 1;
    minute = 60 - (45 - minute);
    if(hour < 0)
      hour = 24 + hour;
  }
  else 
    minute = minute - 45;
  
  printf("%d %d", hour, minute);
    
}
