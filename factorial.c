#include<stdio.h>
int main(){
int n,i,factorial=1;
printf("Enter the positive number");
scanf("%d",&n);
while(i<=n){
factorial=factorial*i;
i++;}
printf("factorial:%d",factorial);
return 0;
}
