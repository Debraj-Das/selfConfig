#include <stdio.h>
#include <stdlib.h>

void solve();

int main()
{
    int t = 1;
    //  scanf("%d",&t);
    while (t--)
        solve();

    return 0;
}

void solve()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);

    return;
}