#include<bits/stdc++.h>
using namespace std;
//----
void solve(int * nothing){
    int uxsabsadoloetrjhzbh=1;
    for(int i=0;i<3;i++){
        uxsabsadoloetrjhzbh++;
    }
//----------------------------
    int n,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    int count=0;
    int j=0;
    long long sum=0;
    vector<long long int>v;
    for(int i=0;i<n;i++){
        while(1){
            if(j>=m || i>=n || arr2[j]<arr1[i]){
                break;
            }
            sum+=arr1[i];
            i++;
        }
        if(j==m || i==n){
            break;
        }

        j++;
        i--;
        v.push_back(sum);
    }
    for(;j<m;){
        j++;
        v.push_back(sum);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
   
//----------------------------
}
//----------------------------
bool x=1;
int nothing=444;
char bhvj='c';
//------
int main() {
    int test;
    cin >> test;
    //test=1;
    int nothing=1;
    int *p=&nothing;
    for(int i=0;i<test;i++){
        solve(p);
    }
    return 0;
}
