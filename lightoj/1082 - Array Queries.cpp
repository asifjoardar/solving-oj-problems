/** BiSmIlLaHiR rAhMaNiR rAhIm **\

*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*

            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

#define mx 100005
int arr[mx];
int tree[mx * 4];
int init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return arr[b];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1=init(Left, b, mid);
    int p2=init(Right, mid + 1, e);
    tree[node] = min(p1,p2);
    return tree[node];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2);
}
main()
{
    /*#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif*/
    int n,m,t,i,j,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    	scanf("%d%d",&n,&m);
    	for(j=1;j<=n;j++)
    		scanf("%d",&arr[j]);
    	init(1, 1, n);
    	printf("Case %d:\n",i);
    	for(j=0;j<m;j++)
    	{
    		scanf("%d%d",&x,&y);
    		printf("%d\n",query(1, 1, n, x, y));
    	}
    }
}
