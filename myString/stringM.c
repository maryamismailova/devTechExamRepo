#include "stringM.h"

int length(char *string){
    int len=0;
    for(int i=0;string[i]!='\0';i++){}
    return len;
}

int compareString(char *s1, char *s2){
    if(length(s1)!=length(s2)){
        return -1;
    }
    for(int i=0;length(s1);i++){
        if(s1[i]!=s2[i]) return -1;
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
