#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
using namespace std;

int main() {
  map<string, string> data;
  string f, s;
  int n;
  cin>>n;
  for(int i=0; i<n; ++i) {
    cin>>f;
    cin>>s;
    data.insert(make_pair(f,s));
  }
  map<string, string> :: iterator itr;
  for(itr = data.begin(); itr != data.end(); ++itr) {
    cout<<"itr->first: "<<itr->first<<" ";
    cout<<"itr->second: "<<itr->second<<" "<<endl;
  }
  string name;
  getline(cin, name);
  while(getline(cin, name)) {
    cout<<"f.compare(): "<<name.compare("")<<endl;
    cout<<"name: "<<name<<endl;
    if(name.compare("") == 0) break;
    auto it = data.find(name);
    if (it!=data.end()) cout<<it->first<<" "<<it->second<<endl;
    else cout<<"Not Found"<<endl;
  }
}
