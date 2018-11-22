//
//  main.c
//  CProgramming
//
//  Created by Levi on 11/19/18.
//  Copyright © 2018 Levi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void encryp(int);
void decryp(int);

int main(int argc, char *argv[]) {
    
   //Example of an 'e' with a key entered 2
   //SECRET MESSAGE
   //UGETGV OGUUCIG
    
    int key = atoi(argv[1]);
//
    char func = *argv[2];
//
    if(func == 'e'){
        
        encryp(key);
    }
    if(func == 'd') {
        
        decryp(key);
    }
    

    return 0;
}

/*
 * Function:  encrypt 
 * --------------------
 * computes an encrpytion for the message entered
 *
 *
 *  k: key, if the user provides a key of 2, all letters are shifted down the alphabet by 2, 
 *  so that A becomes C, D becomes F, and so forth
 *
 *  returns: the encrypted letter of each character
 *
 */
void encryp(int k) {
    char message[100];
    int key = k;


    printf("Enter the message to encrypt: ");
    fgets(message, 100, stdin);

    int count=0;
    while(isupper(message[count]) || isblank(message[count])) {
        if(isblank(message[count])) {
            printf("unencrypted letter: %c | encrypted letter: %c\n",message[count], message[count]);

            count++;
            continue;
        }

        printf("unencrypted letter: %c | encrypted letter: %c\n",message[count], message[count]+key);

        count++;
        
    }
 
    return;


}

/*
 * Function:  decryp 
 * --------------------
 * computes a decryption for the message entered
 *
 *  k: key, if the user provides a key of 2, all letters are shifted down the alphabet by 2, 
 *  so that A becomes C, D becomes F, and so forth
 *
 *  returns: the decryted letter of each character
 *
 */

void decryp(int k) {
    char message[100];
    int key = k;

    printf("Enter the message to decrypt: ");
    fgets(message, 100, stdin);

    int count=0;
    while(isupper(message[count])||isblank(message[count])) {
        if(isblank(message[count])) {
            printf("encrypted letter: %c | unencrypted letter: %c\n",message[count], message[count]);
            count++;
            continue;
        }

        printf("encrypted letter: %c | unencrypted letter: %c\n",message[count], message[count]-key);
        count++;

    }
    return;


}

