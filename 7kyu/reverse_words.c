// Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.
// Examples

// "This is an example!" ==> "sihT si na !elpmaxe"
// "double  spaces"      ==> "elbuod  secaps"


// My solution:

#include <stdlib.h>
#include <string.h>

char* reverseWords(const char* text) {
  int textLen = strlen(text);
  
  char* textOut;
  textOut = (char *) malloc(textLen+1);
  for(int i=0; i<textLen; i++)
    textOut[i] = ' ';
  
  int sliceBegin = 0;
  
  for(int sliceEnd=0; sliceEnd<textLen; sliceEnd++){
    if(text[sliceEnd] == ' '){
      sliceBegin = sliceEnd+1;
    }
    else if(text[sliceEnd+1] == ' ' || text[sliceEnd+1] == '\0'){
      for(int i=0; i<(sliceEnd+1-sliceBegin); i++){
        textOut[i+sliceBegin] = text[sliceEnd-i];
      }
    }
  }
  
  textOut[textLen] = '\0';
  return textOut;
}