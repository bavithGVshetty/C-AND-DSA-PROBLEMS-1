#include <stdio.h>

// Structure to store player details
struct Player {
    int id;
    char name[50];
    int score;
};

// Function to sort players by score (descending order)
void sortPlayers(struct Player p[], int n) {
    struct Player temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].score < p[j].score) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    struct Player p[n];
    
    // Input player details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &p[i].id, p[i].name, &p[i].score);
    }

    // Sort players based on scores
    sortPlayers(p, n);
    
    // Display sorted players
    for (int i = 0; i < n; i++) {
        printf("%d %s %d\n", p[i].id, p[i].name, p[i].score);
    }
    
    return 0;
}
