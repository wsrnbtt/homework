#include <stdio.h>

struct Combatant {
    int level;
    int armor;
};

float getReductionRate(int armor) {
    if (armor < 50) {
        return 0.20f;
    }
    return 0.40f;
}

float calculateNetDamage(int attackerLvl, int targetArmor) {
    float base = attackerLvl * 10.0f;
    float reduction = getReductionRate(targetArmor);
    return base * (1.0f - reduction);
}

int main() {
    int n_calculations, i;
    const float WORTH_THRESHOLD = 150.0f;

    if (scanf("%d", &n_calculations) != 1) return 1;

    for (i = 0; i < n_calculations; i++) {
        struct Combatant hero, enemy;
        int dummy_lvl;
        if (scanf("%d %d %d", &hero.level, &dummy_lvl, &enemy.armor) != 3) break;

        float netDamage = calculateNetDamage(hero.level, enemy.armor);

        if (netDamage >= WORTH_THRESHOLD) {
            printf("SUCCESS! Net Damage: %.2f\n", netDamage);
        } else {
            float deficit = WORTH_THRESHOLD - netDamage;
            printf("FAIL. Deficit: %.2f\n", deficit);
        }
    }

    return 0;
}
