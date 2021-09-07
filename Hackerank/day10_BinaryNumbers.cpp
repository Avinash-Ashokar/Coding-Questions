#include<iostream>
using namespace std;

int main() {
  int n, i=0, j=0, count=0, value, max=0;
  cin>>n;
  int arr[1000000], b[1000000];

  //While Loop converts integer number into array of binary numbers
  while(true) {
    if (n<2) {
      arr[i] = n;
      value = i+1;
      break;
    }
    else {
      arr[i] = n%2;
      n = n/2;
    }
    i++;
  }

  //This for loop is used to count the maximum consecutive no. of 1's
  for(int i=0;i<value+1;i++) {
    if (arr[i] == 1) count++;
    else {
      b[j] = count;
      count = 0;
      j++;
    }
  }

  //This for loop is just used to find the maximum number in the array
  for(int i=0; i<j;i++) {
    if (b[i]>=max)
      max = b[i];
  }
  cout<<max;
}
