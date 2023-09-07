function kthFactor(n: number, k: number): number {
    let i : number;
    for(i=0;i<=n/2;i++){
        if(n%i==0)k--;
        if(k==0)return i;
    }
    if(k==1)return n;
    return -1;
};