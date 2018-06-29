    #include<bits/stdc++.h>
    using namespace std;
    main()
    {
        double a,b,d;
        char c;
        cin>>a>>b>>c;
        if(c=='+') d=a+b;
        else if(c=='-') d=a-b;
        else if(c=='*') d=a*b;
        else d=a/b;
        printf("%lf\n",d);
    }
     
