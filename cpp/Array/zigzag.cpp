#include<iostream>
using namespace std;

void pattern(int arr[][4]){
    int c = 0;
    for(int i = 0; i < 4; i++){
        int r = 3;
        for(int j = 0; j < 4; j++){
            if(c == 0){
                cout<<arr[j][i]<<" ";
            }
            else{
                cout<<arr[r][i] << " ";
                r--;
            }
        }
        c = c == 0 ? 1 : 0;
        cout<<endl;
    }
}

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    pattern(arr);
}