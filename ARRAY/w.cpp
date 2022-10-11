//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
    
        vector<int>bb;
        
        int i=0;
        int j=0;
        // int t=0;
        while(i<n && j<m){
            if(a[i]<b[j]){
                bb.push_back(a[i++]);

                }
              else 
              if(a[i]>b[j]){
                bb.push_back(b[j++]);

                    
                }
                else
                 
                { bb.push_back(b[j++]);

                    i++;
                
                }
            }
        
        while (i<n)
        {
             bb.push_back(a[i++]);

        }
        for(;j<m;j++){
             bb.push_back(b[j]);

        }
    int t=bb.size();
    return t;}
    
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends