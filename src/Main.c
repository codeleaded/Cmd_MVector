#if defined(__linux__)
#include "/home/codeleaded/System/Static/Container/MVector.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Container/MVector.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Container/MVector.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif


int main(){
    MVector v = MVector_New(sizeof(char));

    for(int i = 0;i<100000000;i++){
        if(v.size % 10000 == 0) printf("End: XSize: %lu, Size: %lu, Size: %lu\n",v.ExpandSize,v.size,v.SIZE);
        MVector_Push(&v,(char[]){'0'});
        //printf("%c\n",c);
    }
    printf("End: XSize: %lu, Size: %lu, Size: %lu\n",v.ExpandSize,v.size,v.SIZE);

    MVector_Free(&v);

    return 0;
}