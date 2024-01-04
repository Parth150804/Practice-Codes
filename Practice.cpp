#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef priority_queue <int, vector<int>, greater<int>> minheap;
typedef priority_queue <int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
const int N=1e9+7;
const int M=1e8+7;
 
int solve(int n, int arr[]) {
    if (n == 1) {
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < n-1; i++)  {
        if (arr[i] > arr[i+1]) {
            while (arr[i] > arr[i+1]) {
                arr[i+1] <<= 1;
                ans++;
            }
        }
    }
    return ans;
}
 
int main(){
    int t, n;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
        }
        std::cout << solve(n , arr) << "\n";
    }
}