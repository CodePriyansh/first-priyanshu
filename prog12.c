#include<stdio.h>
int simpleinterest(int,int,int);
int simpleinterest(int p,int r,int t){
int si;
si=(p*r*t)/100;
printf("%d",si); 
}
int main(){
int p,r,t;
printf("enter principle");
scanf("%d",&p);
printf("enter rate");
scanf("%d",&r);
printf("enter time");
scanf("%d",&t);
simpleinterest(p,r,t);
}