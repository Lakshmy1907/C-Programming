#include<stdio.h>
int main(){
int num1,num2,calcular;
char al;
printf("Enter the numbers");
scanf("%d,%d",&num1,&num2);
printf("Enter the operators");
scanf(" %c",&al);
switch(al){
  case '+': printf("sum:%d",num1+num2);
  break;
  case '-': printf("difference:%d",num1-num2);
  break;
  case '*': printf("product:%d",num1*num2);
  break;
  case'/' : printf("division:%d",num1/num2);
  break;
  case'%': printf("remainder:%d",num1%num2);
  break;
  default : printf("invalid");
  break;}
  
return 0;
}



  
