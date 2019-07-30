#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int secret, guess;
  srand (time(NULL));
  secret = rand() % 100 + 1;
  bool win = 0;
  
  for (int i = 0; i < 5; i++)
  {
    printf ("Guess the number between 1-100: ");
    scanf ("%d",&guess);
	
	if(secret == guess) {
			puts("You win");
			win = 1;
			break;
		}
	
    if (secret<guess && i != 4) puts ("Guess lower");
    else if (secret>guess && i != 4) puts ("Guess higher");

		
  }
  


  if(!win) puts ("You lose");
  return 0;
}