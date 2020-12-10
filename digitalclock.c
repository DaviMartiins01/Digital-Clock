#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void SetAlarm(void);

int hour, minute, second;
int hourAlarm, minuteAlarm = 99;

char answer;


int main()
{

    SetAlarm();

    printf("Type the current hour >>> ");
    scanf("%i", &hour);

    printf("Type the current minute >>> ");
    scanf("%i", &minute);

    printf("Type the current second >>> ");
    scanf("%i", &second);

    system("cls");

    while(0 == 0)
    {
          if(second >= 60)
          {
              second = 0;
              minute++;
          }

          if(minute >= 60)
          {
               minute = 0;
               hour++;
          }

          if(hour >= 24)
          {
               hour = 0;
               minute = 0;
               second = 0;
          }

          if(hourAlarm == hour && minuteAlarm == minute)
          {
              printf("your alarm is ringin\n");
          }

          printf("(%i : %i : %i)\n", hour, minute, second);

          sleep(1);
          second++;
          system("cls");
    }

    return 0;
}

void SetAlarm(void)
{
     printf("Do you wanna set the alarm?");
     scanf("%s", &answer);

     if(answer == 'y')
     {
          printf("Type the hour >>> ");
          scanf("%i", &hourAlarm);

          printf("Type the minute >>> ");
          scanf("%i", &minuteAlarm);
     }

     system("cls");
}
