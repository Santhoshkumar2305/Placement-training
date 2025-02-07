// 1. Number of valid parenthesis expressions that consists of N pair of "(" and ")" braces
// 2. Number of different ways N+1 factors can be completely parenthesized
// 3. A rooted binary tree with one root node where each node as either 0 or 2 branches descending from it . How many rooted BT are present with N-internal nodes
// 4. Count of structurally unique BST with N keys 
// 5. Count of number of ways to divide a circle using N non-intersecting chords
// 6. Number of ways to reach from B-L to T-R without crossing main diagonal in N*N matrix

unsigned long long catalan(int n) {
    vector<unsigned long long> catalanNumbers(n + 1, 0);
    catalanNumbers[0] = 1; // Base case
    catalanNumbers[1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            catalanNumbers[i] += catalanNumbers[j] * catalanNumbers[i - 1 - j];
        }
    }

    return catalanNumbers[n];
}