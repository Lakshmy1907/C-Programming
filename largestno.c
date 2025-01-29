#include<stdio.h>
 int main(){
 int num1,num2,num3;
 printf("Enter the largest number");
 scanf("%d,%d,%d",&num1,&num2,&num3);
 
if(num1>num2){
    if(num1>num3){
       printf("num1 is the largest");}} 
else {
 if(num2>num3){

   printf("num2 is largest");}
 else{
   printf("num3 is the largest");}}
 return 0;
}
