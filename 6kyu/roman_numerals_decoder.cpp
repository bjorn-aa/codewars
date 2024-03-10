// Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman numeral.

// Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in descending order.
// Example:

// "MM"      -> 2000
// "MDCLXVI" -> 1666
// "M"       -> 1000
// "CD"      ->  400
// "XC"      ->   90
// "XL"      ->   40
// "I"       ->    1

// Help:

// Symbol    Value
// I          1
// V          5
// X          10
// L          50
// C          100
// D          500
// M          1,000

// Courtesy of rosettacode.org


// My Solution:

#include <iostream>
#include <string>

int solution(std::string roman) {
  std::map<char, int> romanMap{
    {'M', 1000},
    {'D', 500},
    {'C', 100},
    {'L', 50},
    {'X', 10},
    {'V', 5},
    {'I', 1}
  };
  int outNum = 0;
  
  for(unsigned long i=0; i<roman.length()-1; i++){
    if(romanMap[roman[i]] < romanMap[roman[i+1]]){
      outNum -= romanMap[roman[i]];
    }
    else{
      outNum += romanMap[roman[i]];
    }
  }
  outNum += romanMap[roman.back()];
  
  return outNum;
}