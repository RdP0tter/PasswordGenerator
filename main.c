#include <stdio.h>
#include <stdlib.h>
#define TOTAL_CHARS 67

char allChars[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@@!!##$$&&*"};
char password[512];
int passwordLength;
void printPassword();
void generatePassword();

void main(){

    printf("Type the length of your password: ");
    scanf("%d", &passwordLength);

    generatePassword();

    printPassword();

return;
}
void generatePassword(){

    srand(time(NULL));
    int i, x;

    for(i=0;i<passwordLength;i++){
        x = allChars[rand()%TOTAL_CHARS];
        password[i] = x;
    }

}
void printPassword(){
    printf("\nyour password is: %s\n", password);
    system("pause");
}