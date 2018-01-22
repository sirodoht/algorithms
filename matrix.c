#include <stdio.h>
#include <string.h>
#include <stdlib.h>    
    
    /*
      Author: Kulverstukas; http://9v.lt/
     
      text -- text to print;
      loops - times to loop over char
              array before putting the
              right char. Increase the
              count to increase delay.
    */
    
    
    void printText(char * text, int loops) {
        // char matrix
        const char chars[52] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o',
                                'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k',
                                'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', '1',
                                '2', '3', '4', '5', '6', '7', '8', '9', '-',
                                '=', '[', ']', ';', '/', '?', ':', '}', '{',
                                '+', '*', '0', '!', '@', '#', '\0'};
     
        int totalChars = strlen(text); // total chars in a given string
        int charCount = 0; // counter that keeps track of scrolling chars
        int loopCount = 0; // counter that counts loops
        char newArr[totalChars]; // new char array to build new string
        int i = 0;  // index counter, keeps track of given text index
        for (i; i <= totalChars; i++) {
            newArr[i] = text[i];
            newArr[i+1] = '\0'; // must be terminated by nullbyte, else garbage will be shown
            while (loopCount <= loops) {
                printf("%s%c\r",newArr,chars[charCount]);
                if (charCount == 51) {
                    charCount = 0;
                    loopCount++;
                }
                charCount++;
                int c;
                for (c = 0 ; c <= 999999; c++) {} // work emulator to delay execution
            }
            loopCount = 0;
        }
    }
int main(int argc, char *argv[])
{
    char matrix[]="Enter the matrix, and when you do call me. Morpheus.";
    
    printText(matrix, 1);
    
    getchar();
    //system("PAUSE");
    return 0;
}
