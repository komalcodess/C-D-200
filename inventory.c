#include <stdio.h>

struct inventory {
    int itemCode;
    char itemName[50];
    int quantity;
    float rate;
};

int main() {
    struct inventory items[100];
    int N, i;
    float total=0;

    printf("Enter number of items: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        printf("\nEnter details for item %d:\n", i+1);

        printf("Item Code: ");
        scanf("%d", &items[i].itemCode);

        printf("Item Name: ");
        scanf("%s", items[i].itemName);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Rate: ");
        scanf("%f", &items[i].rate);
    }

    for (i=0; i<N; i++) {
        total += items[i].quantity * items[i].rate;
    }

    printf("\nTotal Inventory Cost = %.2f\n", total);


}