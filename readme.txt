step 1) type "make"
step 2) type "./main < inputFile.txt > outputFile.txt", or replace the names with the filenames you want to input/output

test cases:
  inputFile.txt - test case that professor gave us
  inputFile2.txt - case with no matching keys, should output 0 bit file

explanation: I create a hashmap that contains all of the sums in the keys (created by iterating through the keys array). The hashmap stores the sum as a key, and a pair of ints that represent the indicies of the two keys as a value. 
This allows for o(1) lookup time of the sums. after this, I iterate through the array again, this time checking to see if each value exists in the sums hashmap. If it does, print it out, along with the two keys that add to said key.

time complexity: since I iterate through the array twice, the worst case big o is O(2n) or just O(n).