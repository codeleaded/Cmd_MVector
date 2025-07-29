#include "C:/Wichtig/System/Static/Container/MVector.h"
#include "C:/Wichtig/System/Static/Library/w->ElapsedTime.h"
#include <Windows.h>

int main(){
    MVector v = MVector_New(sizeof(char));

    for(int i = 0;i<100000000;i++){
        if(v.size % 10000 == 0) printf("End: XSize: %llu, Size: %llu, Size: %llu\n",v.ExpandSize,v.size,v.SIZE);
        MVector_Push(&v,(char[]){'0'});
        //printf("%c\n",c);
        
    }
    printf("End: XSize: %llu, Size: %llu, Size: %llu\n",v.ExpandSize,v.size,v.SIZE);

    Sleep(1000);

    MVector_Free(&v);

    return 0;
}