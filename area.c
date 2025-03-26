#include<stdio.h>
#define pi 3.14159
int main(){
float circle_area,cylinder_area;
int r, h;
printf("enter the radius of a cicle and height of the cylinder");
scanf("%d%d",&r,&h);
circle_area=pi*r*r;
cylinder_area=2*pi*r*r+2*pi*r*h;
printf("circle area=%f",circle_area);
printf("cylinder area=%f",cylinder_area);
return 0;
}
