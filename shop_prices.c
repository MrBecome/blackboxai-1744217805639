#include <stdio.h>

int main() {
    int prices[] = {120, 250, 300, 175, 200};
    int item_count = sizeof(prices) / sizeof(prices[0]);
    int total = 0;
    int max_price = prices[0];
    
    // Calculate total cost and find maximum price
    for (int i = 0; i < item_count; i++) {
        total += prices[i];
        if (prices[i] > max_price) {
            max_price = prices[i];
        }
    }
    
    printf("Total cost of all items: Rs.%d\n", total);
    printf("Maximum price among items: Rs.%d\n", max_price);
    
    if (total > 1000) {
        printf("Bulk Purchase\n");
    } else {
        printf("Normal Purchase\n");
    }
    
    return 0;
}
