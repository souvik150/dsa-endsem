#include <bits/stdc++.h>
using namespace std;

void printbfs(int** edges, int v, int sv, bool* visited){
    queue<int>pendingNodes;

    pendingNodes.push(sv);
    visited[sv]=true;

    while(!pendingNodes.empty()){
        int m = pendingNodes.front();
        pendingNodes.pop();

        cout<<m<<" ";

        for(int i = 0; i<v; i++){
            if(i==m){
                continue;
            }
            if(edges[m][i]==1 && !visited[i]){
                pendingNodes.push(i);
                visited[i]=true;
            }
        }
    }
}

void BFS(int**edges, int n){
    bool* visited = new bool [n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            printbfs(edges, n, i, visited);
        }
    }
}

int main() {
    int v;
    int e;

    cin >> v >> e;

    if(v==0 and e==0){
        return 0;
    }

    int** edges = new int* [v];
    for (int i = 0; i < v; i++){
        edges[i] = new int [v];
        for(int j=0; j<v;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0; i<e; i++){
        int s,m;
        cin>>s>>m;
        edges[s][m]=1;
        edges[m][s]=1;
    }
    BFS(edges, v);
}

// 4 4
// 0 1
// 0 3
// 1 2
// 2 3

