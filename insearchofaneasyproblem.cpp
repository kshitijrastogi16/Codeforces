#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        if(arr[i]==1){
            count++;
        }
    }
    if(count>=1){
        cout<<"HARD"<<endl;
    }
    else if(count==0){
        cout<<"EASY"<<endl;
    }
    return 0;
}