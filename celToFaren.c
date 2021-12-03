#include <stdio.h>
float fahandcel(float temp, char choice)
{
    if ((choice == 'c') || (choice == 'C'))
    {
        return (temp - 32) * 5 / 9.0f;
    }

    else if (choice == 'f' || choice == 'F')
    {
        return (temp * 9 / 5.0f) + 32;
    }
    else
        return (printf("invalid choice"));
}
int main()
{
    float temp;
    char choice;
    printf("enter your choice (C|F)\n");
    scanf("%c", &choice);
    printf("enter temp");
    scanf("%f", &temp);

    printf("%f", fahandcel(temp, choice));

    return 0;
}