#include<stdio.h>

int circumferenceOfc(float r){
    float circumference;

   
    circumference =2*3.14*r;
    return circumference;
}


int main(){
    float r;
    float x;

    printf("enter radius");
    scanf("%f",&r);

    x  = circumferenceOfc(r);

    printf("%.2f",x);
}