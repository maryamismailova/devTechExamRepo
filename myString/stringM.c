#include "stringM.h"

int length(char *string){
    int len=0;
    for(int i=0;string[i]!='\0';i++){
        len++;
    }
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

int polyndrome(char *s1){
    int l=length(s1);
    int end=l-1;
    for(int i=0;i<l;i++){
        if(s1[i]!=s1[end])return -1;
    }
    return 0;
}