#include<stdio.h>
#include<string.h>

int main(){
  char str1[20],str2[20];
  printf("enter the first string");
  scanf("%s",str1);
  printf("enter the second string");
  scanf("%s",str2);
  int compare=strcmp(str1,str2);
  if (compare==0){
    printf("string is equal");
  }
  else{
    printf("string is not equal");
  }
  return 0;
}
  
