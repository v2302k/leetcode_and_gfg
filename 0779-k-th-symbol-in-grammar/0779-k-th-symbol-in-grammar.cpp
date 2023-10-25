class Solution {
public:
    int kthGrammar(int n, int k) {
        int N =n; int K = k;
        if (n == 1) return 0;
	if (K % 2 == 0) return (kthGrammar(n - 1, K / 2) == 0) ? 1 : 0;
	else return (kthGrammar(n - 1, (K + 1) / 2) == 0) ? 0 : 1;
    }
};