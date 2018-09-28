#include<bits/stdc++.h>
using namespace std;

int Adj[100][100];

int Q[100];
int top = -1;

void enqueue(int i){
    Q[++top] = i;
}

int dequeue(){
    return Q[top--];
}

bool queue_empty(){
    if(top==-1)
        return true;
    else
        return false;
}

struct Node{
    char color;
    int pi;
    int d;
};

struct Node G[100];

int main(){

    int n; // number of vertices
    int source; // source vertex
    // reading adjacency matrix
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> Adj[i][j];
        }
    }
    cin>>source;
    // initializing vertices
    for(int i=1; i<=n; i++){
        G[i].color = 'W';
        G[i].pi = -1;
        G[i].d = INT_MAX;
    }

    G[source].color = 'G';
    G[source].pi = -1;
    G[source].d = 0;

    enqueue(source);

    while(!queue_empty()){
        int u = dequeue();
        for(int v=1; v<=n; v++){
            if(Adj[u][v]==1){
                if(G[v].color=='W'){
                    G[v].color = 'G';
                    G[v].d = G[u].d + 1;
                    G[v].pi = u;
                    enqueue(v);
                }
            }
        }
        G[u].color='B';
    }

    for(int i=1; i<=n; i++){
        cout << i << " " << G[i].color << " " << G[i].pi << " " << G[i].d << endl;
    }


    return 0;
}

