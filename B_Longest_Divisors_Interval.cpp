#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n;
        cin>>n;

        long long int maxrange =min(1e7,n*1.0);
        vector<long long int> fac;

        for(long long int i=1;i*i<=maxrange;i++){

            if(n%i==0){
              
                fac.push_back(i);
                 if(i*i!=n){
               
                fac.push_back(n/i);
            }
            }

           

        }
        sort(fac.begin(),fac.end());
        int maxi =1;
        int consecutive =1;
        for(int i=1;i<fac.size();i++){
            //cout<<fac[i]<<" ";
            if(fac[i]-fac[i-1]==1){
                consecutive++;
            }else{
                consecutive=1;
            }
            maxi =max(maxi,consecutive);
        }

        cout<<maxi<<endl;
    }
    
}