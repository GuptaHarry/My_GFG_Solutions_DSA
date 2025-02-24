//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    
    // clockwise kr diya 
    // void rotateby1(vector<int>&arr){
    //     int last = arr[arr.size()-1];
        
    //     for(int i = arr.size()-2; i>=0;i--){
    //         arr[i+1]=arr[i];
    //     }
        
    //     arr[0]=last;
    // }
    
    
    
    
    
    // // anti-clockwise ->
    // brute force approach
    
    // void rotateacwby1(vector<int>&arr){
        
    //     int first = arr[0];
    //     for(int i=1 ; i<arr.size();i++){
    //         arr[i-1]=arr[i];
    //     }
        
    //     arr[arr.size()-1]= first;
    // }
    
    
    
    // void rotateArr(vector<int>& arr, int d) {
    //     // code here
    //     int ans= d;
    //     while(ans>d){
    //         ans=ans%arr.size();
    //     }
        
    //     while(ans--){
    //         rotateacwby1(arr);
    //     }
        
        
        
        // optimised approach
        
       void rotateArr(vector<int>& arr, int d) {
        // code here
        
        d%=arr.size();
        reverse(arr, 0, d - 1); 
        reverse(arr, d, arr.size() - 1);
        reverse(arr, 0, arr.size() - 1);
    }
    
    private:
     void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
        
    
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends