#include<iostream>
using namespace std;

void pattern(int arr[][5]){
    int n1, n2, n3, n4;
    n1 = n3 = 0;
    n2 = n4 = 4;

    while(n1 <= n2 && n3 <= n4){
        for(int i = n1; i < n4; i++){
            cout<<arr[n1][i]<<" ";
        }
        n1++;
        
        for(int i = n3; i <= n4; i++){
            cout<<arr[i][n4]<<" ";
        }
        n4--;

        for(int i = n4; i >= n3; i--){
            cout<<arr[n2][i]<<" ";
        }
        n2--;

        for(int i = n2; i >= n1; i--){
            cout<<arr[i][n3]<<" ";
        }
        n3++;
    }
}

int main(){
    int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    pattern(arr);
}