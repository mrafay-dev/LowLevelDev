#include <array>
#include <cstring>
#include <algorithm>
#include <string>
#include <iostream>

template<size_t N>
class FixedString {
private:
    char buff[N];
    int tail{0};
public:
    FixedString() {
        buff[0] = '\0';
    }
    
    FixedString(const char* str) {
        buff[0] = '\0';
        if(str) {
            append(str);
        }
    }
    
    void append(const char* str) {
        if(!str || tail >= N -1) return;
        size_t remaining = N - 1 - tail;
        size_t len = strlen(str);
        size_t to_copy = std::min(remaining, len);
        std::memcpy(buff+tail, str, to_copy);
        tail += to_copy;
        buff[tail] = '\0';
    }
    
    void clear() {
        tail = 0;
        buff[tail] = '\0';
    }
    
    const char* c_str() const {
        return &buff[0];
    }
    
    size_t size() const{
        return tail;
    }
    
};
