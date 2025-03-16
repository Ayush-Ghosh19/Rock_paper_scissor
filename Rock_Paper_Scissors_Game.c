#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Function to fetch Computer's Choice
char Get_computer_choice(){
    int random=rand()%3;//randomely generates a no. between 0,1 and 2
    if (random==0)
     return 'r';
    else if(random==1)
     return 'p';
    else
     return 's';
}
// Function to determine winner
void determineWinner(char user, char computer) {
    printf("Computer chose: %c\n", computer);
    
    if (user == computer) {
        printf("It's a tie!\n");
    } else if ((user == 'r' && computer == 's') ||
               (user == 'p' && computer == 'r') ||
               (user == 's' && computer == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}
//Main method
int main() {
    char u;
    srand(time(0)); // Seed for random number generation
    printf("Enter your choice:\n1.r for Rock\n2.p for Paper\n3.s for Scissors\n ");
    scanf(" %c", &u); 
    // Validate input
    if (u != 'r' && u != 'p' && u != 's') {
        printf("Invalid choice! Please enter r, p, or s.\n");
        return 1;
    }
    char computer_Choice = Get_computer_choice();
    determineWinner(u, computer_Choice);
    return 0;
}
