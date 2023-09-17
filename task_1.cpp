#include <iostream>
using namespace std;
void push(int *arr,int *pn);
int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    push(arr,&n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    
    
}

void push(int *arr,int *pn){
    for (int i = 0; i < *pn; i++)
    {
        if (arr[i]>0)
        {
            (*pn)++;
            for (int j = *pn-1; j >i; j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i+1]=0;  
        }   
    }
    
}