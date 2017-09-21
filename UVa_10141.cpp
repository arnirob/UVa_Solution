#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,cmp,g=1;
    while(scanf("%d %d",&test,&cmp),test||cmp)
    {
        if(g > 1)printf("\n");
        string s;
        cin.ignore();
        for(int i=0; i<test; i++){
            getline(cin,s);
        }

        string cmm;
        float rate,ratee=0.0;
        int req,reqq=0;
        string cmpny,baaal;

        for(int i=0; i<cmp; i++){
            getline(cin,cmpny);
            scanf("\n%f %d\n",&rate,&req);
            int xx=req;

            for(int bal=0; bal<xx; bal++){
                getline(cin,baaal);
            }

            if(req>reqq){
                ratee=rate;
                cmm=cmpny;
                reqq=req;
            }

            else if(req==reqq){
                if(rate<ratee){
                    ratee=rate;
                    cmm=cmpny;
                    reqq=req;
                }
            }
        }
        cout<<"RFP #"<<g<<endl;
        cout<<cmm<<endl;
        g++;

    }

    return 0;
}
