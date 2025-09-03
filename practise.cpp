#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

       long long int ans = b;

        for(int i=0;i<n;i++){
            ans+= min(a-1,v[i]);
        }
        cout<<ans<<endl;
    }
}