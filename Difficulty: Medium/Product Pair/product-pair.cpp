//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        // code here
        
        
        //  sort( arr.begin(),arr.end());
        // int start=0;
        // int end = arr.size()-1;
        // if( x <0){
            
        //     while( start<end){
            
        //     long long ans=arr[start]*arr[end];
        //     if(ans == x){
        //         return 1;
        //     }
            
        //     else if( ans < x){
        //         end--;
        //     }
        //     else{
        //         start++;
        //     }
        // }
            
            
        // }else{
        //     while( start<end){
            
        //     long long ans=arr[start]*arr[end];
        //     if(ans == x){
        //         return 1;
        //     }
            
        //     else if( ans < x){
        //         start++;
        //     }
        //     else{
        //         end--;
        //     }
        // }
        // }
        
        // return false;
        
        // int start=0;
        // int end= 1;
        
        // long long ans;
        // while(end <= arr.size()-1){
            
        //     ans= arr[start]*arr[end];
        //     if( ans == x)
        //     return true;
            
        //     else if (ans < x)
        //     end++;
            
        //     else
            
        // }
        // return false;
         unordered_set<long long> hashSet;
    
    for (int num : arr) {
        if (num == 0) {
            if (x == 0) return true; // Special case: If x is 0 and array contains 0
            continue;
        }

        if (x % num == 0 && hashSet.count(x / num)) {
            return true;
        }
        
        hashSet.insert(num);
    }

    return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        Solution ob;
        auto ans = ob.isProduct(arr, x);
        cout << (ans ? "true\n" : "false\n");
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends