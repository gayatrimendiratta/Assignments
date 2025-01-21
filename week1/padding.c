#pragma pack(2)  // 1-byte alignment, reduces padding
#include<stdio.h>

struct Example {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};

int main() {
    struct Example example;
    printf("Size of struct: %lu\n", sizeof(example));  // May output 6 bytes, no padding
    return 0;
}

