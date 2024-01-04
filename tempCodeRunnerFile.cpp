#include <bits/stdc++.h>

using namespace std;

int cost(string s, string s1) {
    int cost = 0;
    int i = 0;
    int j = 0;
    while (j < s1.size()) {
        if (s[i] != s1[j]) {
            i++;
            j++;
        }
        else {
            cost += 1;
            j++;
        }
    }
    return cost;
}

int making_t_good(string s) {
    if (s.size() == 1) {
        return 1;
    }
    else{
        int ones = 0;
        int zeros = 0;
        for (auto i: s) {
            if (i == '0') {
                zeros++;
            }
            else {
                ones++;
            }
        }
        if (ones == zeros) {
            return 0;
        }
        else {
            string s1 = s;
            int i = 0; 
            int j = s1.size()-1;
            while (i <= j) {
                if (s1[i] == s1[j]) {
                    j--;
                }
                else {
                    swap(s1[i], s1[j]);
                    i++;
                    j--;
                }
            }
            return cost(s, s1);
        }
    }
}

int main() {
    int t;
    string s;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> s;
        std::cout << making_t_good(s) << "\n";
    }
}