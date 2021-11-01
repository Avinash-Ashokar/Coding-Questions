#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int arr[k], j=0;
        for(int i=nums.size()-k; i<nums.size(); i++){
          //cout<<"nums.size(): "<<nums.size()<<endl;
          //cout<<"i: "<<i<<endl;
          arr[+i-(nums.size()-k)] = nums[i];
          //cout<<"arr: "<<arr[+i-(nums.size()-k)]<<endl;
        }
        for(int i=nums.size()-1; i>=k; i--) {
          //cout<<"i: "<<i<<endl;
          //cout<<"i-k: "<<i-k<<endl;
          nums[i] = nums[i-k];
        }
        for(int i=0; i<nums.size(); i++) {
          if (j<k) nums[i] = arr[j];
          //cout<<"nums[i]: "<<nums[i]<<endl;
          j++;
        }
    }
};

int main() {
  Solution s;
  vector<int> arr = {1,2,3,4,5};
  s.rotate(arr, 2);
}
