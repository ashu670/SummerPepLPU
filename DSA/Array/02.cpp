#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == target) return true;
        }
    }

    return false;
}

void sum(int arr[][3]){

    int sum = arr[0][0];
    int index = 0;

    for(int i = 0; i < 3; i++){
        int s = 0;
        for(int j = 0; j < 3; j++){
            s += arr[i][j];
        }
        if(sum <= s){
            sum = s;
            index = i;
        }
    }

    cout<<index<<" : "<<sum;
}

int main(){
    int arr[3][3] = {1,1,1,1,1,1,1,1,1};
    sum(arr);
}