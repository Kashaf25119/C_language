#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int ans=1;
while(ans){
int user_choice;
printf("Choose 1 for rock 2 for scissore and 3 for paper");
scanf("%d",&user_choice);
srand(time(0)) ;
int computer_choice = rand() % 3+1;
if(computer_choice == 1){
printf("computer choose Rock\n");
} else if(computer_choice == 2){
printf("computer choose scissor\n");
}else if(computer_choice == 3){
printf("computer choose paper\n");
}
if((computer_choice == 1) && (user_choice == 1) ||(computer_choice == 2) && (user_choice == 2) || (computer_choice == 3) && (user_choice == 3)){
printf("Game is draw\n");
} else if((computer_choice == 1)&&(user_choice == 2) || (computer_choice == 2) && (user_choice == 3) || (computer_choice == 3) && (user_choice == 1)){
printf("computer win\n");
}else{
printf("user win\n");
}
printf("Do you want to play again ? press 1 for yes or 0 for no");
scanf("%d",&ans);
}
}
