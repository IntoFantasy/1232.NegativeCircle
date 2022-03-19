#include <iostream>
using namespace std;

const int maxm=5000;
const int maxn=3000;
int n,m,cnt;
struct edge{
    int to;   //end
    int w; //weight
    int next;
}edges[maxm];
int head[maxn];
void init(){
    for(int i=0;i<=n;++i) head[i]=-1;
    cnt=0;
}
void add_edge(int u, int v, int w){
    edges[cnt].to=v;
    edges[cnt].w=w;
    edges[cnt].next=head[u];
    head[u]=cnt++;
}


int main() {
    cin>>n>>n;
    init();
    int u,v,w;
    for(int _=0;_<m;++_){
        cin>>u>>v>>w;
        add_edge(u,v,w);
    }

}
