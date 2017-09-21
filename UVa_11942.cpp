#include<bits/stdc++.h>

using namespace std;

bool sortAscending(int arr[])
{
    int counter = 0;
    for(int i=0; i<9; i++)
    {
        if(arr[i] <= arr[i+1])counter++;
    }
    if(counter == 9)return true;
    else return false;
}

bool sortDescending(int arr[])
{
    int counter = 0;
    for(int i=0; i<9; i++)
    {
        if(arr[i] >= arr[i+1])counter++;
    }
    if(counter == 9)return true;
    else return false;
}

int main()
{
    int kase;
    scanf("%d",&kase);
    printf("Lumberjacks:\n");
    while(kase--)
    {
        int arr[10];
        for(int i=0; i<10; i++)scanf("%d",arr+i);
        if(sortAscending(arr) || sortDescending(arr))printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
