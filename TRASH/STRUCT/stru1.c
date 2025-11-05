#include <stdio.h>

struct Marks {
    int roll_no;
    char name[50];
    float tamil, english, chemistry, maths, physics;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Marks s[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f %f %f %f %f", 
              &s[i].roll_no, s[i].name, 
              &s[i].tamil, &s[i].english, 
              &s[i].chemistry, &s[i].maths, &s[i].physics);
    }
    
    for (int i = 0; i < n; i++) {
        float avg = (s[i].tamil + s[i].english + s[i].chemistry + s[i].maths + s[i].physics) / 5.0;
        printf("%.2f ", avg);
    }

    return 0;
}
