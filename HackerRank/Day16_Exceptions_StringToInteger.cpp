#include<iostream>
using namespace std;

int main() {
  string str;
  getline(cin, str);
  try {
    cout<<stoi(str);
  } catch (...) {
    //catch(...) -> Catches all Exceptions
    cout<<"Bad String";
  }
}
