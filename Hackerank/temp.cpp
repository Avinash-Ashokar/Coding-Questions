#include<iostream>
#include<vector>

using namespace std;

int main() {
  int a, max=-10;
  vector<vector<int>> arr
  vector<vector<int>> res;
  for(int i=0;i<6;i++) {
    vector<int> x;
    for(int j=0;j<6;j++) {
      cin>>a;
      x.push_back(a);
    }
    arr.push_back(x);
    x.clear();
  }
  for(int i=0; i<4; i++) {
    vector<int> y;
    for(int j=0; j<4; j++) {
      a = (arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
      y.push_back(a);
      if(a>max) max=a;
    }
    res.push_back(y);
    y.clear();
  }
  cout<<endl<<"max: "<<max<<endl;

