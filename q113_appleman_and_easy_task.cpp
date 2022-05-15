#include <cstdio>
#define N_max 110

const int dx[5] = {0, 0, 1, 0, -1};
const int dy[5] = {0, 1, 0, -1, 0};

int n, a[N_max][N_max];

void init()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("\n");

        for (int j = 1; j <= n; j++)
        {
            char ch;

            scanf("%c", &ch);
            if (ch == 'o')
                a[i][j] = 1;
        }
    }
}

void solve()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int sum = 0;

            for (int k = 1; k <= 4; k++)
                sum += a[i + dx[k]][j + dy[k]];

            if (sum % 2)
            {
                printf("NO\n");
                return;
            }
        }

    printf("YES\n");
}

int main()
{
    init();
    solve();
}