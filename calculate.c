#include<stdio.h>
#include<conio.h>
//sum
int sum(int a,int b){
int sum = a + b;
printf("The addition of%d and %d is : %d",a,b,sum);
}
//sub
int sub(int a,int b){
int sub = a - b;
printf("The subtraction of %d and %d is : %d",a,b,sub);
}
//mul
int mul(int a,int b){
int mul = a * b;
printf("The multiplication of %d and %d is : %d",a,b,mul);
}
//div
int div(int a,int b){
int div = a / b;
printf("The division of %d and %d is : %d",a,b,div);
}
//mod
int mod(int a,int b){
int mod = a % b;
printf("The modulo of %d and %d is : %d",a,b,mod);
}
//max
int max(int a,int b){
if(a > b){
printf("A is greater than B");
}else{
printf("B is greater than A");
}
}
//min
int min(int a,int b){
if(a < b){
printf("A is less than B");
}else{
printf("B is less than A");
}
}
int main(){
char oper;
printf("Enter the operator:");
scanf("%c",&oper);
int a,b;
printf("Enter the values one by one:");
scanf("%d %d",&a,&b);
if(oper == '+'){
sum(a,b);
}else if(oper == '-'){
sub(a,b);
}else if(oper == '*'){
mul(a,b);
}else if(oper == '/'){
div(a,b);
}else if(oper == '%'){
mod(a,b);
}else if(oper == '>'){
max(a,b);
}else if(oper == '<'){
min(a,b);
}else{
printf("Error");
}
}
