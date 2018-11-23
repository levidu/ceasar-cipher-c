# ceasar-cipher-c
Caesar Cipher in C Programming Language. The program takes a single command line argument that defines the key. The second command line argument will be set to either ‘e’ or ‘d’. For instance, the value e stands for encrypt and d stands for decrypt.

You can assume that all messages are uppercase and you will not be given lowercase
letters, punctuation or special characters (except space characters).

The C application will return other asiic character. This is okay and powerful. 

So, I thinking of making certain changes that would only return alphabetic characters. A-Z


    int main(int argc, char *argv[]) {
    
    char alpha[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
    
    char message[20] = "FOR YOUR EYES ONLY";
    
    
    int count = 0;
    while(isupper(message[count]) || isblank(message[count]) ) {
        if(isblank(message[count])){
            printf("%s","\n");
            count++;
            continue;
        }
    for(int i = 0; i<30;i++) {
        
        if(alpha[i] == message[count]) {
            
            printf("%c\n",alpha[(i+8)%26]);
          
            
        }
        
    }
        count++;
    }
    
    return 0;
    }
