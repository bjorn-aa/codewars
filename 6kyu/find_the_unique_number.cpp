// There is an array with some numbers. All numbers are equal except for one. Try to find it!

// find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
// find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55

// It’s guaranteed that array contains at least 3 numbers.

// The tests contain some very huge arrays, so think about performance.


// My solution:

float find_uniq(const std::vector<float> &v)
{
  float diffNum = 0;
  for(unsigned long i=0; i<v.size(); i++){
    if(i > 1){
      if(v[i] != v[i-1] && v[i] != v[i-2]){
        diffNum = v[i];
        break;
      }
    }
    else if(i == 1){
      if(v[i] != v[i-1] && v[i] != v[i+1]){
        diffNum = v[i];
        break;
      }
    }
    else{
      if(v[i] != v[i+1] && v[i] != v[i+2]){
        diffNum = v[i];
        break;
      }
    }
  }
  return diffNum;
}