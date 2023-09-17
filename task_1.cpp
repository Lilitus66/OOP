#include <iostream>
#include <ctime>
using namespace std;
void push(int *arr,int n);
int main(){
    srand(time(NULL));
    int n;
    cin>>n;
    int *arr= new int[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
}

void push(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            n++;
            for (int j = n; j >i; j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i+1]=0;  
        }   
    }
    
}