#include<stdio.h>

int soma(int v[], int q){
    int i, rs = 0;
    for(i = 0 ; 1 < q ; i++){
        rs += v[i];
    }
    return rs;
}

int media(int v[], int q){
    int i, rs = 0;
    for(i = 0 ; 1 < q ; i++){
        rs += v[i];
    }
    return rs/q;
}
int max(int v[], int q){
    int m = v[0];
    for(i = 1 ; i < q; i++){
        if(v[i] >m){
        }  
    }   
    return rs/q;
}  

int min(int v[], int q){
    int m = v[0];
    for(i = 1 ; i < q; i++){
        if(v[i] < m){
        }  
    }
    return m;
}  