#include<iostream>
using namespace std;
int main()
{

    int a[4]={0,10,5,2};
    int beg=0,end=4,ans;
    int mid=(beg+end)/2;
    while(beg<end)
    {
        if(a[mid]>a[mid+1])
        {
            if(a[mid-1]<=a[mid])
           {
            ans=mid;
            break;
           }
        end=mid;
        }
        else
        {
            beg=mid+1;
        }
        mid=(beg+end)/2;
    }
    cout<<ans;
}
