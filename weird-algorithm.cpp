/*

Consider an algorithm that takes as input a positive integer n. If n is even, 
the algorithm divides it by two, and if n is odd, the algorithm multiplies it by 
three and adds one. The algorithm repeats this, until n is one. For example, 
the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.

Constraints
1≤n≤10^6
Example

Input:
3

Output:
3 10 5 16 8 4 2 1

*/


#include <iostream>

using namespace std;

int main() {
  // Read the input integer
  int n;
  cin >> n;

  // Print the initial value of n
  cout << n << " ";

  // Repeat the algorithm until n is 1
  while (n != 1) {
    // If n is even, divide it by 2
    if (n % 2 == 0) {
      n /= 2;
    }
    // If n is odd, multiply it by 3 and add 1
    else {
      n = 3 * n + 1;
    }

    // Print the current value of n
    cout << n << " ";
  }

  return 0;
}
