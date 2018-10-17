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

main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,i,j=0,k=0,l=0,a0[200],ap[200],an[200],x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==0) a0[j++]=x;
		else if(x>0) ap[k++]=x;
		else an[l++]=x;
	}
	if(l%2==0)
	{
		if(k==0)
		{
			cout<<l-3<<" ";
			for(i=3;i<l;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<2<<" ";
			for(i=0;i<2;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<j+1<<" ";
			cout<<an[2]<<" ";
			for(i=0;i<j;i++)
				cout<<a0[i]<<" ";
			cout<<endl;
		}
		else
		{
			cout<<l-1<<" ";
			for(i=1;i<l;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<k<<" ";
			for(i=0;i<k;i++)
				cout<<ap[i]<<" ";
			cout<<endl;
			cout<<j+1<<" ";
			cout<<an[0]<<" ";
			for(i=0;i<j;i++)
				cout<<a0[i]<<" ";
			cout<<endl;
		}
	}
	else
	{
		if(k>0)
		{
			cout<<l<<" ";
			for(i=0;i<l;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<k<<" ";
			for(i=0;i<k;i++)
				cout<<ap[i]<<" ";
			cout<<endl;
			cout<<j<<" ";
			for(i=0;i<j;i++)
				cout<<a0[i]<<" ";
			cout<<endl;
		}
		else
		{
			cout<<l-2<<" ";
			for(i=2;i<l;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<k+2<<" ";
			for(i=0;i<2;i++)
				cout<<an[i]<<" ";
			cout<<endl;
			cout<<j<<" ";
			for(i=0;i<j;i++)
				cout<<a0[i]<<" ";
			cout<<endl;
		}
	}
}
