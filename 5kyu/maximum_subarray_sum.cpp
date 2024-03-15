// The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:

// maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
// //should be 6: {4, -1, 2, 1}

// Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.

// Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.


// My Solution:

#include <vector>
#include <numeric>

int maxSequence(const std::vector<int>& arr){
  int arrLen = arr.size();
  int currSum = 0;
  int result = 0;
  
  for(int i=0; i<arrLen; i++){
    for(int j=0; j<i; j++){
      currSum = std::reduce(arr.begin()+j, arr.end()+1-(i-j));
      if(currSum > result){
        result = currSum;
      }
    }
  }
  return result;
}