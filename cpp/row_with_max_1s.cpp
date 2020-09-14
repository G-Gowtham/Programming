void fn()
{
    int n,m,l_max=0,g_max = 0,i;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<m ; j++)
        {

            cin >>a[i][j]
            if(a[i][j]==1)
                l_max += 1;
        }
        if(l_max > g_max)
        {
            g_max = l_max;
            index = i;
        }
        l_max = 0;
    }
    cout<<index<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fn();
    }
    return 0;
}