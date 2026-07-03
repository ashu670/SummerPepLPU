#include<iostream>
void doble(int num){
    num*=10;
}
int main(){
    int num=10;
    int*ptr=&num;
    doble(num);
    std::cout<<num<<"---"<<*(ptr+1);
}
//here we are storin the pass by referce n pass by value man