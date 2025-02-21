//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        // code here
        
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;
        
        for(int i=0 ; i <arr.size();i++){
            if(arr[i]>max1)
            max1=arr[i];
        }
        
        for(int i=0 ; i<arr.size();i++){
            if( arr[i]> max2 && arr[i]!=max1)
            max2 = arr[i];
        }
        
        
        for(int i=0 ; i<arr.size();i++){
            if( arr[i]> max3 && arr[i]!=max1 && arr[i]!=max2)
            
            max3 = arr[i];
        }
        
        vector<int>ans;
        ans.push_back(max1);
        if( max2 !=INT_MIN){
        
        ans.push_back(max2);
        
        }
        
        if( max3!=INT_MIN){
            ans.push_back(max3);
        }
            return ans;
    }
    
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // To ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input);

        vector<int> arr;
        stringstream ss(input);
        int num;

        while (ss >> num) {
            arr.push_back(num);
        }

        Solution obj;
        vector<int> ans = obj.getThreeLargest(arr);

        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends