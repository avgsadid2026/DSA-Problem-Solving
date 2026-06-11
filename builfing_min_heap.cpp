#include<bits/stdc++.h>
using namespace std;
class heap {
    public : 
    int arr[100];
    int size ;
    heap ()
    {
        arr[0]=-1;
        size=0;

    }
    void heapify (int arr[], int n, int i)
    {
        int smallest= i;
        int right= 2*i+2;
        int left = 2*i+1;
        if (left <n && arr[smallest]>arr[left])
        {
            smallest=left;

        }
        if (right<n &&arr[smallest]>arr[right ] )
        {
           smallest= right ;
        }
        if (smallest!=i)
        {
            swap (arr[smallest], arr[i]);
            heapify(arr, n,smallest);
        }
    }
};
    
int main()
{
     heap p;
     int arr[6]={-1,54 , 53, 55, 52, 50};
     int n=5;
      for (int i = n/2-1; i>=0; i--)
      {
          p.heapify(arr,n, i);
      }
     cout<< "printing the array now "<<endl;
      for ( int i=1; i<=n; i++)
     {
        cout << arr[i]<<" ";
     }cout<<endl;
  
 return 0;
}