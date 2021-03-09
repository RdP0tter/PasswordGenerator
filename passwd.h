#ifndef _PASSWD_H
#define _PASSWD_H

#include <stdlib.h>
#include <stdio.h>

#define TOTAL_CHARS 67

extern char opt[1];
extern char password[512];
extern int passwordLength;

void printPassword(void);
void generatePassword(void);
void Prog_intro(void);

#endif