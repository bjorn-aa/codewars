// The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.
// Examples

// "din"      =>  "((("
// "recede"   =>  "()()()"
// "Success"  =>  ")())())"
// "(( @"     =>  "))((" 


// My solution:

#include <string>
std::string duplicate_encoder(const std::string& word){
  std::string wordLower = word;
  std::transform(wordLower.begin(), wordLower.end(), wordLower.begin(), [](char c) { return std::tolower(c); });
  
  std::string outStr = "";
  for(auto c : wordLower){
    if(count(wordLower.begin(), wordLower.end(), c) > 1){
      outStr += ")";
    }
    else{
      outStr += "(";
    }
  }
  return outStr;
}