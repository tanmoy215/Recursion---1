#include<iostream>
using namespace std;
void fun(int n, int i){
    if(n==0){
        cout<<i;
       return;
    }
  fun(n-1,i+n);
  
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
   fun(n,0);
}