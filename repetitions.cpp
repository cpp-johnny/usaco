/*

You are given a DNA sequence: a string consisting of characters 
A, C, G, and T. Your task is to find the longest repetition in the 
sequence. This is a maximum-length substring containing only one 
type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤10^6
Example

Input:
ATTCGGGA

Output:
3


*/
  
#include <iostream>

#include <algorithm>

using namespace std;

int main() {
  // Read the input DNA sequence
  string s;
  cin >> s;

  // Initialize the length of the longest repetition to 0
  int longest = 0;

  // Iterate through the DNA sequence
  for (int i = 0; i < s.size(); i++) {
    // Check for the longest repetition starting at this position
    char c = s[i];
    int count = 1;
    while (i + 1 < s.size() && s[i + 1] == c) {
      count++;
      i++;
    }
    // Update the length of the longest repetition
    longest = max(longest, count);
  }

  // Print the length of the longest repetition
  cout << longest << endl;

  return 0;
}
