#include<stdio.h>
int subject(int,int,int,int,int);
int subject(int maths, int science, int social, int hindi, int english){
float total,average,percentage;

total=maths+science+social+hindi+english;
average=total/5;
percentage=(total/500)*100;

printf("total marks %.2f\n",total);
printf("average marks %.2f\n",average);
printf("percentage marks %.2f%%\n",percentage);
}
int main(){
int maths,science,social,hindi,english;
printf("enter maths marks : ");
scanf("%d",&maths);
printf("enter science marks : ");
scanf("%d",&science);
printf("enter social marks : ");
scanf("%d",&social);
printf("enter hindi marks : ");
scanf("%d",&hindi);
printf("enetr english marks : ");
scanf("%d",&english);
subject(maths,science,social,hindi,english);
}