#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nuguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //GENERATES A RANDOM NUMBER
    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("CONGRATULATIONS!! You guessed in %d attempts\n", nuguesses);
        }
        nuguesses++;
    } while (guess != number);

    return 0;
}
