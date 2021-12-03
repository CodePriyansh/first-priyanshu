#include<stdio.h>

     void Abbreviated(char fname[20],char Mname[20],char lname[20]){

         printf("%c %c %s",fname[0],Mname[0],lname);

     }
int main(){
    char fname[20],Mname[20],lname[20];
    printf("enter person Fill name");
    scanf("%s%s%s",&fname,&Mname,&lname);

    Abbreviated(fname,Mname,lname);

}
