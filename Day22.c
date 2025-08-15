#include <stdio.h>

int main(){


    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);

        int a[11];
        int b[11];

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
         for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }

        int ans =1;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                ans+=(a[i]-b[i]);
            }
        }
        printf("%d\n",ans);
    }
}