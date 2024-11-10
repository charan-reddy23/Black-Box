    const int N = 1e6;// N -> Depending up on  the requirments take it
    vector<int> prime(N + 1, 1), lp(N + 1, -1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= N; i++) {
        if (!prime[i]) continue;
        lp[i] = i;
        for (int j = i+i; j <= N; j += i) {
        prime[j] = 0;
        if (lp[j] == -1) lp[j] = i;
        }
    }
