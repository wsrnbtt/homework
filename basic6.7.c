#include <stdio.h>

float calculate_win_odds(int outs);

int main() {
    int card_outs;
    float win_probability;
    const float THRESHOLD = 30.0;

    card_outs = 10;

    win_probability = calculate_win_odds(card_outs);

    printf("\n POKER PROBABILITY REPORT (2 Cards Remaining) \n");
    printf("Calculated Outs: %d\n", card_outs);
    printf("Win Probability (Odds x 4): %.2f%%\n", win_probability);

    printf("Assessment: ");
    if (win_probability >= THRESHOLD) {
        printf("HIGH Win Probability\n");
    } else {
        printf("LOW Win Probability\n");
    }

    return 0;
}

float calculate_win_odds(int outs) {
    float odds_result = (float)outs * 4.0;
    
    return odds_result;
}
