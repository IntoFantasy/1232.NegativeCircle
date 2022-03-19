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



int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
