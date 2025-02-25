//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
        // Your code here
        
          int max= arr[0];
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int res=0;
        for(int i=0;i<arr.size();i++){
            if((max - arr[i]) % k !=0 ){
                return -1;
            }
            else{
                res += (max - arr[i]) /k;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        int res = ob.minOps(arr, k);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends