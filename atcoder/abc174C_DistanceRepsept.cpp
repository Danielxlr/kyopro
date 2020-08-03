// Danielxlr
// https://atcoder.jp/contests/abc174/tasks/abc174_c
// math

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int k , kkk=7, steps=1;
    cin>>k;

while(kkk%k!=0){
    if(steps>=(pow(10,6)+5)){
        steps=-1;
        break;
    }
    steps++;
    kkk=kkk*10+7;
    kkk%=k;
    }
    cout<<steps;
    return 0;
}