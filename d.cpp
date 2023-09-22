#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < n-1; i++) //верхний треугольник
    {
        for (int j = 0; j < n-1-i; j++)
        {
            b[i][j]=a[n-1-j][n-(i+1)];
        }
        
    }
    for (int i = 0; i < n; i++) //диагональ
    {
        b[(n-1)-i][i]=a[(n-1)-i][i];
    }
    for (int i = n-1; i > 0; i--) //нижний треугольник
    {
        for (int j = n-1; j >n-i-1; j--)
        {
            b[i][j]=a[(n-1)-j][(n-1)-i];
        }
        
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j]=3*a[i][j]+2*b[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
       
}