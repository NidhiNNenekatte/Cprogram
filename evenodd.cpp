#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int sumeven=0,sumodd=0;
        while(n>0){
            int i=n%10;
            if(i%2==0){
                sumeven=sumeven+i;
            }
            else{
                sumodd=sumodd+i;
            }
            n=n/10;
        }
        cout<<sumeven<<" "<<sumodd;
        }
