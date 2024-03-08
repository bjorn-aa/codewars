// This time no story, no theory. The examples below show you how to write function accum:
// Examples:

// accum("abcd") -> "A-Bb-Ccc-Dddd"
// accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// accum("cwAt") -> "C-Ww-Aaa-Tttt"

// The parameter of accum is a string which includes only letters from a..z and A..Z.


// My solution:

class Accumul
{
public:
    static std::string accum(const std::string &s){
      int i = 0;
      std::string returnString = "";
      for(char c : s){
        if(c < 97)
          c |= 0x20;
        returnString += c ^ 0x20;
        
        for(int j=0; j<i; j++)
          returnString += c;
        
        i++;
        
        if(i < s.length())
          returnString += "-"; 
      }
      
      return returnString;
    }
};