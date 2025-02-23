// #error.cpp
// Use Case: Stopping compilation if a condition isn't met

#ifndef CONFIG
    #error "CONFIG must be defined!"
#endif

int main() {
    return 0;
}
