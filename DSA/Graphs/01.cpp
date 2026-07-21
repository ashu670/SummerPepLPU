#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, list<int>> adjList;

    int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    cout << "Adjency list: " << endl;

    for(auto i : adjList){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}