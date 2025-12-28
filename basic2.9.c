#include <stdio.h>

int main() {
    int stock, n_cmds, cmd, qty, i;
    float fee, penalty_sum = 0.0;

    if (scanf("%d %f %d", &stock, &fee, &n_cmds) != 3) {
        return 0;
    }

    for (i = 0; i < n_cmds; i++) {
        if (scanf("%d %d", &cmd, &qty) != 2) break;

        switch (cmd) {
            case 1: 
                stock += qty;
                printf("Received %d units.\n", qty);
                break;

            case 2: 
                if (qty <= 0) {
                    printf("Error: Quantity must be positive.\n");
                } else if (qty <= stock) {
                    stock -= qty;
                    printf("Shipped %d units.\n", qty);
                } else {
                    penalty_sum += fee;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", fee);
                }
                break;

            case 3:
                printf("Stock left: %d units\n", stock);
                printf("Total Penalties: %.2f\n", penalty_sum);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    return 0;
}
