#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>>t;
   while(t--){
    
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int x;
    cin>>x;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi =0;

    for(int i =1;i<n;i++ ){
        maxi=max(maxi,arr[i]-arr[i-1]);
    }

    int fuel = 2*(x-arr[n-1]);
    maxi =max(maxi,fuel);

    cout<<maxi<<endl;

   }


}