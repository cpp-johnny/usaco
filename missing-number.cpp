/* 

You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅10^5
Example

Input:
5
2 3 1 5

Output:
4

*/


#include <iostream>

#include <unordered_set>

using namespace std;

int main() {
  // Read the input values
  int n;
  cin >> n;

  // Use an unordered set to store the numbers
  unordered_set < int > numbers;
  for (int i = 1; i <= n; i++) {
    numbers.insert(i);
  }

  // Read the input numbers and remove them from the set
  int x;
  while (n - 1 > 0) {
    cin >> x;
    numbers.erase(x);
    n--;
  }

  // The remaining number in the set is the missing number
  cout << * numbers.begin() << endl;

  return 0;
}
