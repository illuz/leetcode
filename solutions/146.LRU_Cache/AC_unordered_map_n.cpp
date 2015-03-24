/*
*  Author:      illuz <iilluzen[at]gmail.com>
*  File:        AC_unordered_map_n.cpp
*  Create Date: 2015-03-24 09:36:06
*  Descripton:  Use unordered_map(hash).
*/

#include <bits/stdc++.h>

using namespace std;
const int N = 0;

class LRUCache{
private:
    typedef list<int> L;
    //      map <key, pair <value, list.iterator> >
    typedef unordered_map<int, pair<int, L::iterator> > UM;

    int _capacity;
    L used;
    UM cache;

    void touch(UM::iterator it) {
        // move the node to front of list
        int key = it->first;
        used.erase(it->second.second);
        used.push_front(key);
        it->second.second = used.begin();
    }

public:
    LRUCache(int capacity) {
        _capacity = capacity;
    }
    
    int get(int key) {
        auto it = cache.find(key);
        if (it == cache.end())
            return -1;
        touch(it);
        return it->second.first;
    }
    
    void set(int key, int value) {
        auto it = cache.find(key);
        if (it == cache.end()) {
            // if key not in cache, then add key
            while (cache.size() >= _capacity) {
                cache.erase(used.back());
                used.pop_back();
            }
            used.push_front(key);
        } else {
            touch(it);
        }
        cache[key] = make_pair(value, used.begin());
    }
};

int main() {
    LRUCache l(1);
    l.set(2,1);
    cout << l.get(2) << endl;
    l.set(3,2);
    cout << l.get(2) << endl;
    cout << l.get(3) << endl;
    return 0;
}

