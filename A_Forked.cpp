#include <iostream>
#include <vector>

using namespace std;

// int arr[2][3]

vector<vector<int>> findPossibleCoordinates(int x, int y, int a, int b)
{
    vector<vector<int>> coordinates;
    int dx[] = {a, a, b, b, -a, -a, -b, -b};
    int dy[] = {b, -b, a, -a, b, -b, a, -a};

    for (int i = 0; i < 8; i++)
    {
        int nx = dx[i] + x;
        int ny = dy[i] + y;

        bool flag =true;

        int n = coordinates.size();
       
        for(int j=0;j<n;j++){
            if(nx==coordinates[j][0] && ny==coordinates[j][1]){
                flag =false;
                break;
            }
        }
        if(flag)
        coordinates.push_back({nx, ny});
    }
    return coordinates;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        int kx, ky;
        cin >> kx >> ky;

        int qx, qy;
        cin >> qx >> qy;

        vector<vector<int>> k = findPossibleCoordinates(kx, ky, a, b);
        vector<vector<int>> q = findPossibleCoordinates(qx, qy, a, b);

        int count =0;

        for(int i=0;i<k.size();i++){
            for(int j=0;j<q.size();j++){
                if(q[j][0]==k[i][0] && q[j][1]==k[i][1]){
                  //  cout<<q[i][0]<<" "<<q[i][1]<<endl;
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}