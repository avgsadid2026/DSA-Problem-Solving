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
     void insert (int val)
    {
        size = size +1 ;
        int index = size ;
        arr[index]=val;
        while (index >1)
        {
            int parent = index/2;
            if (arr[parent ]<arr[index])
            {
                swap (arr[parent], arr[index]);
                index = parent ;

            }
            else {
                return;
            }
        }
    }


    void deletefromheap ()
    {
        if (size==0)
        {
            return;
        }
        arr[1]=arr[size];
        size --;
        int i=1;
        while (i<size)
        {
            int leftindex= 2*i;
            int rightindex =2*i+1;
            if (leftindex<size&& arr[i]<arr[leftindex])
            {
                swap (arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if (rightindex<size&& arr[i]<arr[rightindex])
            {
                swap (arr[i],arr[rightindex]);
                i=rightindex;
            }
            else {
                return;
            }


        }

    }






     void print ()
    {
        for (int i=1 ; i<=size ; i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
};
int main()
{
     heap p;
    p.insert (50);
    p.insert (55);
    p.insert (53);
    p.insert (52);
    p.insert (54);
    p.print ();

    p.deletefromheap();
    p.print();
 return 0;
}