#include<stdio.h>
void sizeofint(){
 
 printf("int is %d byte \n",sizeof(short int));
 printf("long int is %d byte \n",sizeof(long int));
 printf("float is %d byte \n",sizeof(float));
 printf("double is %d byte \n",sizeof(double)); 
 printf("char is %d byte \n",sizeof(char));
 printf("unsigend is %d byte \n",sizeof(unsigned int));
 printf("signed is %d byte \n",sizeof(signed int));
} 

int main(){
sizeofint();
}