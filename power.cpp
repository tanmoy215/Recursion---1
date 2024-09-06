        //basic for loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n : ";
//     cin>>n;
//     int sum =1;
//     for(int i=1;i<=3;i++){
//        sum*=n; 
//     }
//     cout<<sum;
// }
            //recursion
#include<iostream>
using namespace std;
int power(int n,int p){
   if(p==0) return 1;
  return n*power(n,p-1);
}
int main(){
   int ans =  power(4,3);
   cout<<ans;
}