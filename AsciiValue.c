#include<stdio.h>
char asci(char ch ){

    // if(ch >= 'A' && ch <= 'Z'){
    //     printf("%d",ch);
    // }else if(ch >= 'a' && ch <= 'z'){
    //     printf("%d",ch);
    // }else{
    //     printf("data not found");
    // }
        printf("%d",ch);

    
}
int main(){

    char ch;
    printf("enter any characteer");
    scanf("%c",&ch);
    asci(ch);

}