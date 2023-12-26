#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int SnakeWaterGun(char you, char comp){
    if(you == 's' && comp == 'g'){
        return -1;
    }
    else if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    char you;
    char comp;
    srand(time(0));
    int number = rand() % 3 + 1;
    printf("Let's play a (Snake, Water, Gun) game together.\n");
    printf("In this game you have to guess a correct option from Snake, Water or Gun.\n");
    printf("Here, 's' is for snake, 'w' is for water and 'g' is for gun.\n");    
    printf("Let's start the game.\n");
    printf("**************************************************************************\n");
    if (number == 1){
        comp = 's';
    }
    else if (number == 2){
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Now enter your choice: ");
    scanf("%c", &you);
    
    if (you == 's'){
        printf("You choose Snake!");
    }
    else if (you == 'w'){
        printf("You choose Water!");
    }
    else if (you == 'g'){
        printf("You choose Gun!");
    }
    else{
        printf("Please choose one from Snake, Water or Gun.\n");
    }
    int result = SnakeWaterGun(you, comp);
    printf("\nYou chose %c and computer chose %c\n", you, comp);
    if (result == 0){
        printf("Game Draw\n");
    }
    else if (result == -1){
        printf("Game Lost\n");
    }
    else{
        printf("Game Won\n");
    }
    return 0;
}
