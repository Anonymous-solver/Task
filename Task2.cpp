#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n], fill_up=100.00;

    /*getting input*/
    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    /*sorting the array list in ascending order*/
    sort(arr,arr+n);

    int cnt=0;
    /*adding the index value of starting and ending respectively*/
    for(int i = 0; i < n ; i++)
    {
        for(int j=n-1; j>i; j--)
        {
            if(arr[i]+ arr[j] <=3.00)
            {
                cnt++;
                //cout<<arr[i]<<" "<<arr[j]<<endl;
                //assigning a value
                arr[i] = fill_up;
                arr[j] = fill_up;
                break;
            }
        }
    }
    /*find the index which doesnt make a pair*/
    for(int i = 0; i <n; i++)
    {
        if(arr[i] != 100.00)
        {
            cnt++;
        }
    }
    /*required output*/
    cout<< cnt <<endl;


}
