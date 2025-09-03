#include <iostream>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int> count(26,0);

        for(int i=0;i<n;i++){
            int index = s[i]-'a';
            count[index]++;
        }

        int o =0;
        for(int i=0;i<26;i++){
            if(count[i]%2==1){
                o++;
            }
        }

        if(o>k+1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}