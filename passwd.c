#include "passwd.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void generatePassword(){

    srand(time(NULL));
    int i, x;
    char r;

    if (opt[0] == 'a'){
        for(i=0;i<passwordLength;i++){
            r = 97 + (rand() % 25 + 1);
            password[i] = r;
        }
    } else if (opt[0] == 'b'){
        for(i=0;i<passwordLength;i++){
            r = 64 + (rand() % 26 + 1);
            password[i] = r;
        }
    } else if (opt[0] == 'c'){
        for(i=0;i<passwordLength;i++){
            x = 48 + (rand() % 10);
            password[i] = x;
        }
    } 

}
void Prog_intro(){

    printf("%s", "\n\t  Welcome to TribePass!\n\tMy own Password Generator!\n");
    printf("\nAll you have to do is choose what parameters\nyou want and your password will be generated!\n");
    printf("\nOptions:\na)a-z\nb)A-Z\nc)0-9\nd)a-z | A-Z | 0-9\ne)All Opts with Specials\n");
    
    printf("\nType the option you want: ");
    scanf("%c", opt);
    
    printf("\nType the length of your password: ");
    scanf("%d", &passwordLength);
    

}
void printPassword(){
    printf("\nyour password is: %s\n", password);
    getchar();

}