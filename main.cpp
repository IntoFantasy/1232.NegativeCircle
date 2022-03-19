#include <iostream>
#include <climits>
using namespace std;

const int maxm=6001;
const int maxn=4001;
int n,m,cnt;
struct edge{
    int start;
    int to;   //end
    long long w; //weight
}edges[maxm];
long long dis[maxn];
void add_edge(int u, int v, long long w){
    edges[cnt].start=u;
    edges[cnt].to=v;
    edges[cnt].w=w;
    cnt++;
}
void init(){
    cnt=0;
    for(int i=1;i<=n;++i) {
        dis[i]=INT_MAX;
        add_edge(0, i, 0);
    }
    dis[0]=0;
}


int main() {
    cin>>n>>m;
    init();
    int u,v;
    long long w;
    for(int _=0;_<m;++_){
        cin>>u>>v>>w;
        add_edge(u,v,w);
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<cnt;++j){
            if(dis[edges[j].start]+edges[j].w<dis[edges[j].to])
                dis[edges[j].to]=dis[edges[j].start]+edges[j].w;
        }
    }
    for(int j=0;j<cnt;++j){
        if(dis[edges[j].start]+edges[j].w<dis[edges[j].to]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}
