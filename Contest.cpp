#include "bits/stdc++.h"

using namespace std;

int min_oper(string &x, string &s, int &m) {
    int i = 0;
    int j = 0;
    int count = 0;
    while (j < m) {
        if (i < x.size()) {
            if (x[i] == s[j]) {
                j++;
            }
            else {
                j = 0;
                if (x[i] == s[j]) {
                    j++;
                }    
            }
            i++;
        }
        else {
            x += x;
            if (j == 0 or x[i] != s[j]) {
                return -1;
            }
            else {
                count++;
                i++;
                j++;
            }
        }
    }
    return count;
}

int main() {
    int t, n, m;
    string x, s;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n >> m >> x >> s;
        std::cout << min_oper(x, s, m) << "\n";
    }
}

// bool possible(int a, int b, int c) {
//     int min_v = min(a, min(b, c));
//     int i = 0;
//     bool check = true;
//     int a1 = a;
//     int b1 = b;
//     int c1 = c;
//     while (i < 3) {
//         if (a != 0 and a - min_v >= 0) {
//             a -= min_v;
//         }
//         if (b != 0 and b - min_v >= 0) {
//             b -= min_v;
//         }
//         if (c != 0 and c - min_v >= 0) {
//             c -= min_v;
//         }
//         if ((a == 0 && b == 0 && c != 0) || (a == 0 && b != 0 && c == 0) || (a != 0 && b == 0 && c == 0)) {
//             check = false;
//         }
//         i++;
//     }

//     if (a == 0 and b == 0 and c == 0) {
//             std::cout << "ok" << "\n";
//         if (check and a1 != b1) {
//             return false;
//         }
//         return true;
//     }
//     if (a != 0 and a == min_v) {
//         if (b1 == c1 and c1 == a) {
//             return true;
//         }
//     }
//     else if (b != 0 and b == min_v) {
//         if (a1 == c1 and c1 == b) {
//             return true;
//         }
//     }
//     else if (c != 0 and c == min_v) {
//         if (a1 == b1 and b1 == c) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {

//     int t, a, b, c;
//     std::cin >> t;
//     for (int i = 0; i < t; i++) {
//         std::cin >> a >> b >> c;
//         if (possible(a, b, c)) {
//             std::cout << "YES" << "\n";
//         }
//         else {
//             std::cout << "NO" << "\n";
//         }
//     }
// }