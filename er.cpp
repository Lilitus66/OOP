#include <iostream>
using namespace std;
int pt(int &n){
    int x;
    x=n+10;
    return x;
}
int main(){
    int a=10;
    
    cout<<pt(a)<<endl;
    //cout<<pt(10)<<endl;
}
