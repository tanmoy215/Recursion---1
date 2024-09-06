#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return; //base case
    cout<<n<<endl;
    fun(n-1); //recursive call
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    fun(n);
}