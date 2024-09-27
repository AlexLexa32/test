#pragma GCC optimize("Ofast,unroll-loops,mfma,mavx,mavx2")
#pragma GCC target("avx,avx2,fma")
#include <iostream>
#include <vector>

int32_t main() {
    int m = 1000000;
    std::vector<bool> isp(m, true);
    isp[0] = isp[1] = false;
    for (int i = 2; i < m; ++i) {
        if (isp[i]) {
            for (int j = i*i; j < m; j += i) {
                isp[j] = false;
            }
        }
    }
    std::vector<bool> good(m, true);


    return 0;
}
