#include <bits/stdc++.h>
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define GOLD ((1 + sqrt(5)) / 2)
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapi(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void preprocess()
{
} //end prepreprocess

void refresh()
{
} //end refresh

void compute()
{
    int n, size, x, temp, ans = 0;
    vector<int> a;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        ans += temp;
        a.push_back(temp);
    }

    if (ans % x)
    {
        cout << n << "\n";
        return;
    }

    size = n;
    while (--n)
    {
        temp = ans - a[n];
        ans = temp;
        for (int i = 0; i <= size - n; ++i)
        {
            if (temp % x)
            {
                cout << n << "\n";
                return;
            }
            temp -= (a[i] - a[i + n]);
        }
    }
    cout << "-1\n";
} //end compute

int main()
{
#ifdef debug
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("log.txt", "w", stderr);
#endif
    int t, i, j;
    preprocess();
    scanf("%d", &t);
    while (t--)
    {
        compute();
    } //end while
#ifdef debug
    fprintf(stdout, "\nTIME: %.3lf sec\n", (double)clock() / (CLOCKS_PER_SEC));
#endif
    return 0;
} //end main*