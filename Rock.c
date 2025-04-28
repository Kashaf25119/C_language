#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int ans=1;
int comp_score=0;
int user_score =0;
//whole game loop
while(ans){
//user input
int user_choice;
printf("Choose 1 for rock 2 for scissore and 3 for paper\n");
scanf("%d",&user_choice);

//checking for input 
if (user_choice < 1 || user_choice > 3 ) {
    printf("Invalid choice! Choose between 1 and 3 .\n");
    continue;
}

//checking for text
if(user_choice == 1){
    printf("You choose Rock\n");
} else if(user_choice == 2){
    printf("You choose scissor\n");
}else if(user_choice == 3){
    printf("You choose paper\n");
}

//generating computer choice 
srand(time(0)) ;
int computer_choice = rand() % 3+1;
//checking for text 
if(computer_choice == 1){
    printf("computer choose Rock\n");
} else if(computer_choice == 2){
    printf("computer choose scissor\n");
}else if(computer_choice == 3){
    printf("computer choose paper\n");
}
//checking for winner 
if(computer_choice == user_choice){
    printf("Game is draw\n");
} else if((computer_choice == 1)&&(user_choice == 2) || (computer_choice == 2) && (user_choice == 3) || (computer_choice == 3) && (user_choice == 1)){
    printf("computer win\n");
     comp_score++;
}else{
printf("You win\n");
user_score++;
}
//printing scores 
printf("Your Score = %d \n",user_score);
printf("Computer Score = %d\n", comp_score);
//asking to play again
printf("Do you want to play again ? press 1 for yes or 0 for no");
scanf("%d",&ans);
}
}
