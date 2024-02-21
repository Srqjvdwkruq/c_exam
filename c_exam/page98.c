#include <stdio.h>
     main(){
          int i = 1, sum;
               while(i <= 100)
               {
                    if(i % 2 != 0){
                         sum += i;
                    }
                    i++;
               }
          printf("sum : %d", sum);
     }