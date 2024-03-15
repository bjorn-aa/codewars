// Count the number of Duplicates

// Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.
// Example

// "abcde" -> 0 # no characters repeats more than once
// "aabbcde" -> 2 # 'a' and 'b'
// "aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
// "indivisibility" -> 1 # 'i' occurs six times
// "Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
// "aA11" -> 2 # 'a' and '1'
// "ABBA" -> 2 # 'A' and 'B' each occur twice


// My Solution:

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

size_t duplicate_count(const char *text) {
  bool dup = false;
  int count = 0;
  const int textLen = strlen(text);
  
  
  char* textCopy;
  textCopy = (char *) malloc(textLen+1);
  for(int i=0; i<textLen; i++){
    if(text[i]>=97) 
      textCopy[i] = text[i];
    else 
      textCopy[i] = text[i] | 0b00100000;
  }
  
  
  for(int i=0; i<textLen; i++){
    dup = false;
    
    if(textCopy[i]){
      for(int j=i+1; j<textLen; j++){
        if(textCopy[i] == textCopy[j]){
          dup = true;
          textCopy[j] = 0;
        }
      }
    }
    if(dup) count++;
  }
  
  return count;
}