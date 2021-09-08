#include<iostream>
#include<vector>
using namespace std;

int main() {

  //Declaring Vector 2D Array
  vector<vector<int>> arr;
  vector<vector<int>> res;
  vector<int> x;
  int a, max=-63; //max is stored as -63 because the element in the Array 
  //cannot be less than -9. In a hourglass we have 7 elements. 
  //So max = -63.

  //Getting input for the vector array
  for(int i=0; i<6; i++){  
    for(int j=0;j<6;j++){
      cin>>a;
      x.push_back(a);
    }
    arr.push_back(x);
    x.clear();
  }

  //Storing the sum of hourglass elements in a 2D Array res
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){

      //Adding Hourglass elements and storing it in a
      a = (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);

      //Storing the value of a in vector x
      x.push_back(a);

      //Storing the maximum hourglass value
      if(a>max) max=a;
    }
    res.push_back(x);
    x.clear();
  }
  cout<<max;
}
