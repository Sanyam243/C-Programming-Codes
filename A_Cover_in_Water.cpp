#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ans = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1)
            {
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
                {
                    flag = true;
                    break;
                }
            }

            if (s[i] == '.')
            {
                ans++;
            }
        }

        if (flag)
        {
            ans = 2;
        }
        cout << ans << endl;
    }
}