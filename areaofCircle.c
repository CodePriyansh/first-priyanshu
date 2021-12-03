#include<stdio.h>

 float areaOfc(int r){
    float area;
area = 3.14*r*r;
   
return area;
}

int main(){

    int r;
    float x;
    printf("enter radius\n ");
    scanf("%d",&r);

    x = areaOfc(r);

    printf("%.2f",x);


}