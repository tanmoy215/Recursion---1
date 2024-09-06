#include<iostream>
using namespace std;
int fun(int n, int sum){
    if(n==0){
        return sum;
    }
    else {
    fun(n-1,sum+n);
    }
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ans = fun(n,0);
    cout<<"the final ans is : "<<ans;
    return 0;
}