#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[4],d=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<3;i++){
        if(arr[i]!=arr[i+1]){
            d++;
        }
    }
    cout<<4-(d+1)<<endl;
    return 0;
}