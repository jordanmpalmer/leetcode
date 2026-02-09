#ifndef LC_DEBUG_H
#define LC_DEBUG_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

// Scaler Types
template <typename T>
void print(const T& val) { std::cout << val; }

inline void print(const std::vector<char>& v) {
    print("[");
    for (size_t i = 0; i < v.size(); ++i) {
        print(v[i]);
        if (i < v.size() - 1) {
            print(",");
        }
    }
    print("]");
}

// Pairs (needed for maps)
template <typename T, typename U>
void print(const std::pair<T, U>& p) {
    print("{");
    print(p.first);
    print(": ");
    print(p.second);
    print("}");
}

// Vectors and Sets
template <typename C>
void print_collection(const C& c, char open = '[', char close = ']') {
    std::cout << open;
    auto it = c.begin();
    while (it != c.end()) {
        print(*it);
        if (++it != c.end()) std::cout << ", ";
    }
    std::cout << close;
}

// Overloads
template <typename T> void print(const std::vector<T>& v) { print_collection(v, '[', ']'); }
template <typename T> void print(const std::set<T>& s) { print_collection(s, '{', '}'); }
template <typename T> void print(const std::unordered_set<T>& s) { print_collection(s, '{', '}'); }
template <typename T> void print(const std::multiset<T>& s) { print_collection(s, '{', '}'); }
template <typename T> void print(const std::unordered_multiset<T>& s) { print_collection(s, '{', '}'); }

// Maps
template <typename K, typename V, template <typename...> class MapType>
void print_map(const MapType<K, V>& m) {
    print("{ ");
    auto it = m.begin();
    while (it != m.end) {
        print(*it);
        if (++it != m.end()) print(", ");
    }
    print(" }");
}

// Overloads
template <typename K, typename V> void print(const std::map<K, V>& m) { print_map(m); }
template <typename K, typename V> void print(const std::unordered_map<K, V>& m) { print_map(m); }

// Utility
template <typename T>
void println(const T& val) {
    print(val);
    std::cout << std::endl;
}

template <typename T>
void println(const std::string& label, const T& val) {
    print(label);
    print(": ");
    println(val);
}

#endif
