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
    map<int,int>mp;
    map<int,int>::iterator it;
    void c(ll n)
    {
    	while(n%2==0)
    	{
    		mp[2]++;
    		n/=2;
    	}
    	for(ll i=3;i<=sqrt(n);i+=2)
    	{
    		while(n%i==0)
    		{
    			mp[i]++;
    			n/=i;
    		}
    	}
    	if(n>1) mp[n]++;
    }
    main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
        ll t,i,j,n,count,p;
        scanf("%lld",&t);
        for(i=1;i<=t;i++)
        {
            count=1;
            scanf("%lld",&n);
            c(n);
            for(it=mp.begin();it!=mp.end();it++)
            {
            	int x=it->first;
            	int y=it->second;
            	if(x==2)
            		continue;
            	count*=(y+1);
            }
            mp.clear();
            printf("Case %lld: %lld\n",i,count-1);
        }
    }

