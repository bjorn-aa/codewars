// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case


// My solution:

unsigned int countBits(unsigned long long n){
    int count = 0;
    int binaryArray[64] = { 0 }; 

    int i = 0; 
    while (n > 0) { 
        binaryArray[i] = n % 2; 
        n = n / 2; 
        if (binaryArray[i] > 0)
          count++;
        i++;   
    } 
  
    return count;
}