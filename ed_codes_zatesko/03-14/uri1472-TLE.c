#include<stdio.h>

#define MAX 112345 /* ~10^5 */

int main(void) {
  int n, x, i, j, k, ans;
  int p[MAX];
  while (scanf("%d", &n) != EOF) {
    p[0] = 0; ans = 0;
    for (i = 1; i <= n; i++) {
      scanf("%d", &x);
      p[i] = p[i - 1] + x;
    }
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        for (k = 0; k < n; k++)
          ans += (i < j && j < k && p[j] - p[i] == p[k] - p[j] &&
                  p[k] - p[j] == p[i] + p[n] - p[k]);
    printf("%d\n", ans);
  }
  return 0;
}
