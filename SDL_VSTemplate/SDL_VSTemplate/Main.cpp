#include <SDL.h>

#if defined _WIN64 || defined WIN32
#undef main
#endif

int main(int argc, char argv[]) {
    return 0;
}