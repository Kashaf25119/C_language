#include<stdio.h>
#include<conio.h>
int main(){
int user_guass,guass=7, attempt =5;
while(1){
printf("Enter your guess number(1 till 10) you have only%d attempts", attempt);
scanf("%d",&user_guass);

if(user_guass == guass){
printf("Hurrah! you guessed.");
break;
}
attempt-=1;
if(attempt <= 0){
printf("You enter wrong choice 5 times.Access denied.");
break;
}
printf("Wrong choice try again.\n");
}
}
