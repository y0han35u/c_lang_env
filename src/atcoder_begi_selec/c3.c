#include <stdio.h>

void abst(int *x) {
        if (*x < 0) *x *= -1;
}

int main(void) {
        int n, t, x, y, t1, x1, y1;
        t=x=y=0;
        for(scanf("%d", &n); n--;) {
                scanf("%d%d%d", &t1, &x1, &y1);
                int dt = t1 -t, dx = x1 -x, dy = y1 - y;
		abst(&dt); /* void func return nothing: int x = abst(&dt); is invalid. */
		abst(&dx);
		abst(&dy);
                if ((dt-dx-dy)%2 || dt < (dx+dy)) {
                        printf("No");
                        return 0;
                }

                t = t1;
                x = x1;
                y = y1;
        }

        printf("Yes");
        return 0;
}

