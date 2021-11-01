// C++ program to find all the factors
// of a number using recursion

#include <bits/stdc++.h>
using namespace std;

int sum = 0;

// Recursive function to
// print factors of a number
int prime(int n, int i=2)
{
	// Checking if the number is less than N
	if (i <= n/2) {
    cout<<"n/2: "<<n/2<<endl<<"i: "<<i<<endl;    
		if (n % i == 0) {
      cout<<"n: "<<n<<endl<<"i: "<<i<<endl;
			return i;
		}

		// Calling the function recursively
		// for the next number
		sum = sum + prime(n, i + 1);
	}
  return sum;
}

// Driver code
int main()
{
	int N = 33;
  int sum = prime(N);
	if (sum>=N+1) {
    cout<<"Not Prime\n";
  } else {
    cout<<"Prime\n";
  }
}
