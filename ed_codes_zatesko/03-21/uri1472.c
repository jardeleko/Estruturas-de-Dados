#include<stdio.h>

#define MAX 112345 /* ~10^5 */

int binary_search(int p[], int n, int x) {
  int a = 0, b = n - 1, m;
  while (a <= b) {
    m = (a + b) / 2;
    if (p[m] == x) return m;
    if (p[m] < x) a = m + 1;
    else b = m - 1;
  }
  return -1;
}

int main(void) {
  int n, x, i, ans;
  int p[MAX];
  while (scanf("%d", &n) != EOF) {
    p[0] = 0; ans = 0;
    for (i = 1; i <= n; i++) {
      scanf("%d", &x);
      p[i] = p[i - 1] + x;
    }
    if (p[n] % 3 == 0)
      for (i = 0; i < n; i++)
        if (3 * p[i] < p[n])
          ans += (binary_search(p, n, p[i] + p[n] / 3) != -1 &&
                  binary_search(p, n, p[i] + 2 * p[n] / 3) != -1);
    printf("%d\n", ans);
  }
  return 0;
}
