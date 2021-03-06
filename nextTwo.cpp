// Given an array arr[] of size n, The task is to replace every element of the array by the sum of 
// next two consecutive elements in a circular manner 
// i.e. arr[0] = arr[1] + arr[2], arr[1] = arr[2] + arr[3], … arr[n – 1] = arr[0] + arr[1].

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

void nextTwoSum( vector<int> &a, int n){
 int zero,one;
 for(int i=0;i<n;i++){
    if(i == 0){
        zero = a[i+1] + a[i+2];
    }
    else if(i == 1){
        one = a[i+1] + a[i+2];
    }
    else{
        if(i == (n-2) ){
            a[i] = a[i+1] + a[ (i+2) -n ];
        }
        else if(i == (n-1) ){
            a[i] = a[(i+1) -n] + a[(i+2) -n];
        }
        else{
            a[i] = a[i+1] + a[i+2];
        }
    } 
 }
 a[0] = zero; a[1] = one;
 cout<<"Output : "<<endl;
  for(int j=0;j<n;j++){
      cout<<a[j]<<" ";
  }

} // end nextTwoSum

int main(){
int n; cin>>n;
vector<int>  a(n);

for(int i=0;i<n;i++){
  cin>>a[i]; 
}

nextTwoSum(a,n);
} // end main
  
