#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cmp,g=1;
    while(scanf("%d %d",&n,&cmp),n||cmp)
    {
        vector<string> all;
        string al;
        for(int i=0; i<n; i++)
        {
            getline(cin,al);
            all.push_back(al);
        }
        float rate,final_rt;
        int req,c=0,total_c;
        string req_nm,cmp_nm;
        vector<string> compny;
        getline(cin,cmp_nm);
        compny.push_back(cmp_nm);
        printf("\n");
        scanf("%f %d",&rate,&req);
        final_rt=rate;
        for(int j=0; j<req; j++)
        {
            getline(cin,req_nm);
            for(int d=0; d<n; d++)
            {
                if(req_nm==all[d]) c++;
            }
        }
        total_c=c;
        cout<<compny[0]<<endl;
        printf("%d    %f\n\n",total_c,final_rt);
        for(int i=1; i<cmp; i++)
        {
            c=0;
            getline(cin,cmp_nm);
            scanf("%f %d",&rate,&req);
            printf("\n");
            string req_nm;
            for(int j=0; j<req; j++)
            {
                getline(cin,req_nm);
                for(int d=0; d<n; d++)
                {
                    if(req_nm==all[d]) c++;
                }
            }
            if(c>total_c)
            {
                compny.clear();
                compny.push_back(cmp_nm);
                final_rt=rate;
                total_c=c;
            }
            else if(c==total_c)
            {
                if(rate<final_rt)
                {
                    compny.clear();
                    compny.push_back(cmp_nm);
                    final_rt=rate;
                }
            }
        }
        cout<<"REP #"<<g<<endl;
        cout<<compny[0]<<endl;
        g++;
    }
    return 0;
}

