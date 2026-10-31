#include <stdio.h>
int main()
{
   float minutes = 16000;
   float minutesperhour =60;
   float minutestohours = minutes/60;

   printf("minutes=%f\nminutes per hour=%f\nminutes to hours=%f\n", minutes, minutesperhour, minutestohours);

   return 0;
}
