#include<stdio.h>
#include"myBank.c"
int main(){
printf("hello and welcome to E&T Bank,please choose the operations\n");
printf("press please :\nO->for open an account\nB->for chack your balance\n");
printf("D->for deposit\nW->for withdrawal\nC->for closing account\nI->for add intrest rate\n");
printf("P->print all the open's account\nE->closing all the account and log out the program\n");
char word;
while(word!='E'){
scanf("%c",&word);
switch(word)
{
case 'O':
O();
break; 

case 'B':
B();
break;

case 'D':
D();
break;

case 'W':
W();
break;

case 'C':
C();
break;

case 'I':
I();
break;

case 'P':
P();
break;

case 'E':
E();
break;

default:
printf("please choose the operations\n");
printf("press please :\nO->for open an account\nB->for chack your balance\n");
printf("D->for deposit\nW->for withdrawal\nC->for closing account\nI->for add intrest rate\n");
printf("P->print all the open's account\nE->closing all the account and log out the program\n");
break;
} 
}
printf("thanks for visiting in E&T Bank :-)\n");
}





