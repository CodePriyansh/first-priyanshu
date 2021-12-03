#include<stdio.h>
int areaoftriangle(int,int);
int areaoftriangle(int b, int h){
float area;
area=(b*h)/2;
printf("%.2f",area);
}
int main(){
int b,h;
printf("enter breath");
scanf("%d",&b);
printf("enter height");
scanf("%d",&h);

areaoftriangle(b,h);
}