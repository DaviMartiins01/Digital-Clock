#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  time_t currentTime;

  while(0 == 0)
  {
      time(&currentTime);
      printf("\n\n\t\t%s\n", ctime(&currentTime));
      system("cls");
  }

    return 0;
}
