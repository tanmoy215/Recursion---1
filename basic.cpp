#include<iostream>
using namespace std;
int fun(int x, int y){
    if(x>y){
        return x;
    }
    else return y;
    
}
void sum(){
    cout<<"hellow Tanmoy";
    //return;
    cout<<"HIHIHI";
}
int main(){
    int a ,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int ans = fun(a,b);
    cout<<"Maximum number is  :"<<ans<<endl;
    swap(a,b);
    cout<<a<<endl<<b;
    sum();
}