#include<bits/stdc++.h>

struct num {
    int id;
    int priority;
};

int main() {
    num n;
    std::priority_queue<int> pq;
    num a[100]; //asumsi input 100 kali
    for(int i=0; i<100; i++) {
        std::cin>>n.id>>n.priority;
        a[i] = n;
        pq.push(n.priority);
        for(int j=i; j==0; j--) {
            if (a[j].priority==pq.top()) {
                std:: cout << a[j].id << std::endl;
                pq.pop();
            }
        }
    }
}