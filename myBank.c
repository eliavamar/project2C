#include<stdio.h>
#include"myBank.h"
float arr [2][50];//the first line is the account status 
//the second line is the account balance,exemple:arr[0][0]->1(one is open zero its close)
int O(){
int p=-1;
float deposit=0;
for(int i=0;i<50;i++){
if(arr[0][i]==0){
arr[0][i]=1;
p=i;
break;
}
}
if(p==-1){
printf("sorry but we have already 50 accounts\n ");
return 0;
}
printf("please insert amount for your first diposit :\n");
scanf("%f",&deposit);
if(deposit>=0){
arr[1][p]=deposit;
printf("your account number is :%.2d\n",(p+901));
}
else{printf("sorry but you can not deposite negative amount! \n ");
arr[0][p]=0;
}
return 0;

}								   
int B(){
int accountN=0;
printf("please insert your account number :\n");
scanf("%d",&accountN);
if(accountN<901||accountN>950){
printf("you enterd an incorrect account number \n");
return 0;
}
if(arr[0][accountN-901]==1){
printf("your balance is :%.2f\n",arr[1][accountN-901]);
return 0;
}
printf("this account is close. ");
return 0;


}


int D(){
int accountN=0;
printf("please enter your account number :\n ");
scanf("%d", &accountN);
if((accountN<901)||(accountN>950)){
printf("you entered an inncorrect number\n ");
return 0;
}
int i=accountN-901;
if(arr[0][i]==0){
printf("sorry but this account does not exist in the system \n");
return 0;
}

else{
float add=0;
printf("please insert amount for deposit :");
scanf("%f",&add);
if(add>0){
arr[1][i]=arr[1][i]+add;
}
else{
printf("you entererd a negativ number your balance is'nt change\n");
}
printf("your balance is :%.2f\n",arr[1][i]);
return 0;

}

}
int W(){
int accountN=0;
printf("please insert your bank account number :\n");
scanf("%d",&accountN);
if((accountN<901)||(accountN>950)){
printf("you entered an inncorrect number\n");
return 0;
}
int i=accountN-901;
if(arr[0][i]==0){
printf("sorry but this account does not exist in the system\n");
return 0;
}
else{
float sub=0;
printf("please insert your withrawal amount :\n");
scanf("%f",&sub);
if((arr[1][i]>=sub)&&(sub>=0)){
arr[1][i]=arr[1][i]-sub;
printf("your balance is :%.2f\n",arr[1][i]);
}
else{
printf("you entered an inncorrect number");
}
return 0;

}
}
int C(){
int accountN=0;
printf("please insert your bank account number :\n");
scanf("%d",&accountN);
if((accountN<901)||(accountN>950)){
printf("you entered an inncorrect number \n");
return 0;
}
int i=accountN-901;
if(arr[0][i]==1){
arr[0][i]=0;
}
printf("the following bank account number is closed :%d\n",accountN);
return 0;
}

int I(){
float interest=0;
printf("please insert the interest rate :");
scanf("%f",&interest);
for(int i=0;i<50;i++){
if(arr[0][i]==1){
arr[1][i]=arr[1][i]+(arr[1][i]*interest)/100;
}

}


return 0;
}
int P(){
for(int i=0;i<50;i++){
if(arr[0][i]==1){
printf("bank account number is : %d -> the balance of this account number : %.2f\n",i+901,arr[1][i]);
}
}
return 0;
}
int E(){
for(int i=0;i<50;i++){
if(arr[0][i]!=0)
arr[0][i]=0;
}
return 0;

}




