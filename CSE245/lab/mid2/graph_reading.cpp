#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int A[100][100];
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> A[i][j];
        }
    }

    bool first;
    for(int i=0; i<n; i++){
        cout << "Vertex " << i+1 << " is connected with vertex ";
        first = false;
        for(int j=0; j<n; j++){

            if(A[i][j]==1){
                if(first==false){
                    cout << j+1;
                    first = true;
                }
                else{
                    cout << ", " << j+1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
