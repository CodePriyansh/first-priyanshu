#include<stdio.h>
float basicsalry(float,float,float,float);
float basicsalry(float s,float hra,float da,float gs){
if(s<=10000){
hra=(s*hra)/100;
da=(s*da)/100;
gs=s+hra+da;
}
printf("%.2f",gs);
}
int main(){
float s,hra,da,gs;
printf("enter salry");
scanf("%f",&s);
printf("enter hra");
scanf("%f",&hra);
printf("enter da");
scanf("%f",&da);

basicsalry(s,hra,da,gs);
}