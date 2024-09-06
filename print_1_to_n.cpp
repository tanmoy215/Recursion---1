// #include<iostream>
// using namespace std;
// void fun(int n,int x){
//  if(n==0) return;
//  cout<<x<<endl;
//  fun(n-1,x+1);
// }
// int main(){
//     int n;
//     cout<<"enter n  : ";
//     cin>>n;
//     int x=1;
//     fun(n,x);
// }
#include<iostream>
using namespace std;
void fun(int n,int x){
 if(x>n) return;
 cout<<x<<endl;
 fun(n,x+1);
}
int main(){
    int n;
    cout<<"enter n  : ";
    cin>>n;
    fun(n,1);
}