#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int random, guess;
   int no_of_guess = 0;
   srand(time(NULL));

   printf("welcome to the world of guessing Numbers\n");
   random = rand() % 100 + 1; // Genrating between 0 to 100
   do {
      printf("\nPlease enter your Guess between (1 to 100)");
      scanf("%d", &guess);
      no_of_guess++;

      if(guess < random) {
         printf("Guess a larger nummber. \n");
      } else if (guess > random) {
         printf("Guess a smaller number. \n");
      }else {
         printf("Got it buddy in %d attempts", no_of_guess);
      }
      
   } while (guess != random);

   printf("\n Bye Bye, thanks for playing.");
   printf("\n Devloped by HRIDAY");
}   