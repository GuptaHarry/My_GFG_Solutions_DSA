//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        // int end
    //   rn arr[start];
    
     int y = 0;
        
        for(int i = 0 ; i<n;i++){
            y = y ^ arr[i];
        }
        
        return y;
    
    }
};


//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(len, arr) << '\n';
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends