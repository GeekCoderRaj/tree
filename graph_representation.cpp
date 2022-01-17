#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph1[N][N]; //Adjcency matrix

vector<int> graph2[N];//Adjacency List
int main(){
    int n,m;// n = vertices m = edges
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2]=1;
        graph1[v2][v1]=1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
    //Adjacency Matrix 
          //space O(N^2)
    //Adjacency List
          //space O(n + m);




    return 0;
}