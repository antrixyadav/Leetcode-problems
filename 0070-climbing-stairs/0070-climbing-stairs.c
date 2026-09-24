int climbStairs(int n) {
    if (n <= 2) return n;
    
    int f = 1, s = 2, t = 0;
    
    for (int c = 3; c <= n; c++) {
        t = f + s;
        f = s;
        s = t;
    }
    
    return s;
}