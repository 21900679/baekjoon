#include <stdio.h>

int main(void) {

  int hour, minute;
  int cook;

  scanf("%d %d %d", &hour, &minute, &cook);

  if(minute + cook > 60){
    if((minute + cook) % 60 == 0) {
      hour = hour + (minute + cook) / 60;
      minute = 0;
    }
    else {
      hour = hour + (minute + cook) / 60;
      minute = (minute + cook) % 60;
    }
  }
  else if(minute + cook == 60){
    hour = hour + 1;
    minute = 0;
  }
  else
    minute = minute + cook;

  if(hour >= 24){
    if(hour == 24)
      hour = 0;
    else
      hour = hour - 24;
  }

  printf("%d %d", hour, minute);

  return 0;
    
}
