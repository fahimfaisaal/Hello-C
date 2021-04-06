#include <stdio.h>

int main(void)
{
    char name[20];
    name[0] = 'F';
    name[1] = 'S';
    name[2] = ' ';
    name[3] = 'S';
    name[4] = 'O';
    name[5] = 'I';
    name[6] = 'K';
    name[7] = 'O';
    name[8] = 'T';
    printf("%s\n",name);


    char name1[20] = {'F','S',' ','S','O','I','K','O','T'};
    printf("%s\n",name1);

    char name2[20] = "FS SOIKOT";
    printf("%s\n",name2);

    char my_name[30];
    printf("Whats your name?");
    scanf("%s",&my_name);
    printf("Thank you %s\t",my_name);

    return 0;
}