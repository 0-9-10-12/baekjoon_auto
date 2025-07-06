#include <bits/stdc++.h>

int main(){
    int chicken, coke, beer;
    std::cin >> chicken >> coke >> beer;
    
    std::cout << std::min(chicken, coke / 2 + beer);
}