#include <stdio.h>

int main()
{
     char name[50];
     int score;
     char grade;

     printf("name: ");
     scanf("%s", name);

     printf("exampoints : ");
     scanf("%d", &score);

     if (score >= 80)
     {
          grade = '4';
     }
     else if (score >= 71)
     {
          grade = '3';
     }
     else if (score >= 61)
     {
          grade = '2';
     }
     else if (score >= 50)
     {
          grade = '1';
     }
     else
     {
          grade = '0';
     }

     printf("name: %s\n", name);
     printf("exampoints: %d\n", score);
     printf("grade: %c\n", grade);

     return 0;
}
