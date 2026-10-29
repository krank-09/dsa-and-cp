// TechSoc problem set: Ladoo.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m, o, p;
        scanf("%d %d %d %d", &n, &m, &o, &p);
        int fmax, smax;
        if (n > m) {
            fmax = n;
            smax = m;
        } else {
            fmax = m;
            smax = n;
        }
        if (o > fmax) {
            smax = fmax;
            fmax = o;
        } else if (o > smax) {
            smax = o;
        }
        if (p > fmax) {
            smax = fmax;
            fmax = p;
        } else if (p > smax) {
            smax = p;
        }
        int pair1 = (n > m) ? n : m;
        int pair2 = (o > p) ? o : p;

        if ((fmax == pair1 && smax == pair2) || (fmax == pair2 && smax == pair1)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
