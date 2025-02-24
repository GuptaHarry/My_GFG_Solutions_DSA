//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        
        // vector<int>ans;
        int count=0;
        int distinct_element = arr[0];
        // ans.push_back( distinct_element);
        count++;
        
        
        
        int replace=1;
        for(int i=1 ; i<arr.size();i++){
            if( arr[i] != distinct_element){
                distinct_element= arr[i];
                // ans.push_back(distinct_element);
                count++;
                swap(arr[i] , arr[replace]);
                replace++;
            }
        }
        
        // return ans.size();
        return count;
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
        Solution ob;
        int ans = ob.removeDuplicates(arr);
        for (int i = 0; i < ans; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends