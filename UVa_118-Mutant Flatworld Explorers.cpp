#include<bits/stdc++.h>
#define mx 55
using namespace std;
int rw,clm;
char dir[]= {'N','E','S','W'};
int arr[mx][mx];
bool posOk( int i, int j )
{
    return ( i>=0 && i<=rw && j>=0 && j<=clm );
}
bool pre_die(int i, int j)
{
    return ( arr[i][j] != -1 );
}
int main(){
    int x,y;
    scanf("%d %d",&rw,&clm);
    char dr;
    while((scanf("%d %d %c",&x,&y,&dr)) != EOF){
        string cmnd;
        cin>>cmnd;
        int in_dir,f=1;
        for(int i=0; i<4; i++){
            if(dir[i]==dr){
                in_dir=i;
                break;
            }
        }
        for(int i=0; i<cmnd.length(); i++){
            if(cmnd[i]=='R'){
                if( (in_dir+1)>3 ){
                    in_dir=0;
                    dr=dir[in_dir];
                }
                else{
                    ++in_dir;
                    dr=dir[in_dir];
                }
            }
            else if(cmnd[i]=='L'){
                if( (in_dir-1)<0 ){
                    in_dir=3;
                    dr=dir[in_dir];
                }
                else{
                    --in_dir;
                    dr=dir[in_dir];
                }
            }
            else{
                if(dr=='N'){
                    if(posOk(x,y+1)) y++;
                    else if(pre_die(y,x)){
                        f=0;
                        printf("%d %d %c LOST\n",x,y,dr);
                        arr[y][x]= -1;
                        break;
                    }
                }
                else if(dr=='E'){
                    if(posOk(x+1,y)) x++;
                    else if(pre_die(y,x)){
                        f=0;
                        printf("%d %d %c LOST\n",x,y,dr);
                        arr[y][x]= -1;
                        break;
                    }
                }
                else if(dr=='S'){
                    if(posOk(x,y-1)) y--;
                    else if(pre_die(y,x)){
                        f=0;
                        printf("%d %d %c LOST\n",x,y,dr);
                        arr[y][x]= -1;
                        break;
                    }
                }
                else if(dr=='W'){
                    if(posOk(x-1,y)) x--;
                    else if(pre_die(y,x)){
                        f=0;
                        printf("%d %d %c LOST\n",x,y,dr);
                        arr[y][x]= -1;
                        break;
                    }
                }
            }
        }
        if(f) printf("%d %d %c\n",x,y,dr);
    }
    return 0;
}
