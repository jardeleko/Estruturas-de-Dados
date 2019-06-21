#include<stdio.h>

int main(void) {
	int x = 64, i;
	float y = 0.5; /* NUNCA USAR! */
	double z = 0.5, z1, z2;
  printf("Hello, world! %d %.8f\n", x, y);
  printf("Hello, world! %c %.3lf\n", x, z);
	scanf("%d %f %lf", &x, &y, &z);
	printf("%d %.2f %lf\n", x, y, z);
	if (x == 5) {
  	printf("oi\n");
		printf("tenta\n");
  }
	else printf("ai\n");
	for (i = 1; i <= 10; i++) {
		printf("%d\n", i);
		if (i == 5) continue; /* break; */
		printf("--");
	}
	z = (double)5 / 2; /* casting */
	z1 = 5. / 2;
	z2 = 5 / 2;
	printf("%lf %lf %lf\n", z, z1, z2);
	scanf("%d\n%f", &x, &y);
	printf("%d\n", x);
  return 0;
}











