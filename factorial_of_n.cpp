#include<iostream>
using namespace std;
void fun(int n,int sum){
 if(n==0) {
    cout<<sum;
    return;
 }
sum*=n;
fun(n-1,sum);
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int sum=1;
    fun(n,sum);
}