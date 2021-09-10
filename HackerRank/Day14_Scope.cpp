#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      
    Difference(vector<int> e) {
        this->maximumDifference =0;
        this->elements = e;
    }
    void computeDifference() {
        for (int i=0; i<elements.size();i++) {
            for (int j=i; j<elements.size();j++) {
                if (abs(elements[i]-elements[j]) > maximumDifference) {
                    maximumDifference = abs(elements[i] - elements[j]);
                }
            }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
