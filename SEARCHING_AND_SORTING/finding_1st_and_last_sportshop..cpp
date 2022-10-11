//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int first(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) 
    {
        
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
        
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;

        // If arr[mid] is same as x, we
        // update res and move to the left
        // half.
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

/* If x is present in arr[] then returns 
the index of LAST occurrence of x in
arr[0..n-1], otherwise returns -1 */
int last(int arr[], int x, int n)
{
    int low = 0, high = n , res = -1;
    while (low <= high) 
    {
        
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
    if(x==arr[mid])
    {
            res = mid;
            low = mid + 1;
        }
        
     else 
     if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;

        // If arr[mid] is same as x, we
        // update res and move to the right
        // half.
      
    }
    return res;
}

vector<int> find(int arr[], int n , int x )
{int s=0;
int f=first(arr,x,n);
int m=last(arr,x,n-1);
vector<int>a={f,m};
return a;
    // code here
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        cout<<"enter the shop ID number ";
        cin>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<" the position of 1st shop and last shop is  ";
        cout<<ans[0]<<"and "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends