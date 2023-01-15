#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_number(int n){
 srand (time(NULL));
  return rand() % n;
}
int main()
{
    int n;
        n=random_number(6);
        if (n==0){
            n=1;
        }
     printf("The number on the dice is %d\n",n);
  if(n==6){
      n=random_number(6);
      printf("The dice is Rolling twice beacuse the number is 6\n");
 printf("The number on the dice is %d\n",n);
  }

    return 0;
}
