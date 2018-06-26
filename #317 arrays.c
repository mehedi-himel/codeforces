#include<stdio.h>
int main(){
    int i,j,p,q;
    int a,b;
    int k,l;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&k,&l);

    int m[a],n[b];

    for(i=0;i<a;i++){
        scanf("%d",&m[i]);}

    for(j=0;j<b;j++){
        scanf("%d",&n[j]);}

    if(m[k-1]<n[b-l]){
        printf("YES");}
    else{
        printf("NO");}
    }
