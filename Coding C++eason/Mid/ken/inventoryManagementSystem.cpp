#include <stdio.h>
#include <cstring>

using namespace std;

struct Item {
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int numItems = 0;
Item items[100];

void addItem(Item items[], int& numItems);
void displayInventory(const Item items[], int& numItems);
float calculateTotalValue(const Item items[], int& numItems);
void updateItemQuantity(Item items[], int numItems, int itemId, int newQuantity);

void clrBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    while (1) {
        int choice;
        while (1) {
            printf("What would you like to do?\n");
            printf("[1] Add an item\n");
            printf("[2] Display inventory\n");
            printf("[3] Calculte total value\n");
            printf("[4] Update item quantity\n");
            printf("[5] Exit\n> ");
            if (scanf("%d", &choice) == 1 && 5 >= choice && choice >= 1) {
                clrBuffer();
                printf("\n");
                break;
            } else {
                clrBuffer();
                printf("Invalid input. Please enter a valid integer. [1-5]\n\n");
            }
        }
        switch (choice) {
        case 1:
        {
            addItem(items, numItems);
            break;
        }
        case 2:
        {
            displayInventory(items, numItems);
            break;
        }
        case 3:
        {
            calculateTotalValue(items, numItems);
            break;
        }
        case 4:
        {
            int itemId = 0;
            id_input: while (1) {
            printf("What id is the item you would like to update? [0 to cancel]\n> ");
            if (scanf("%d", &itemId) == 1) {
                int itemIndex = -1;
                printf("\n");
                clrBuffer();
                if (itemId == 0) {
                    printf("Cancelled operation.\n\n");
                    return 0;
                }
                for (int i = 0; i < numItems; i++) {
                    if (items[i].itemId == itemId) {
                        printf("Item with id %d has been found.\n\n", itemId);
                        itemIndex = i;
                    }
                }
                if (itemIndex == -1) {
                    printf("Item with id %d does not exist. Please enter a different id.\n\n", itemId);
                    goto id_input;
                }
                break;
            } else {
                printf("Invalid input. Please enter a valid id. [>=0]\n\n");
                clrBuffer();
            }
            }

            int newQuantity;
            while (1) {
                printf("\nWhat is the quantity of the item?\n> ");
                if (scanf("%d", newQuantity) == 1 && newQuantity > 0) {
                    printf("\n");
                    clrBuffer();
                    break;
                } else {
                    printf("Invalid input. Please enter a valid quantity. [>0]\n");
                    clrBuffer();
                }
            }
            updateItemQuantity(items, numItems, itemId, newQuantity);
            break;
        }
        case 5:
        {
            printf("Thank you for using the program!");
            return 0;
        }
        }
    }
    return 0;
}

void addItem(Item items[], int& numItems) {
    int id = 0;
    id_input: while (1) {
    printf("What id would you like the item to have?\n> ");
    if (scanf("%d", &id) == 1 && id > 0) {
        printf("\n");
        clrBuffer();
        for (int i = 0; i < numItems; i++) {
            if (items[i].itemId == id) {
                printf("Item with id %d already exists. Please enter a different id.\n\n", id);
                goto id_input;
            }
        }
        break;
    } else {
        printf("Invalid input. Please enter a valid integer. [>0]\n\n");
        clrBuffer();
    }
    }

    char itemName[50];
    while (1) {
        printf("What is the item's name?\n");
        printf("Type \"cancel\" if you would like to cancel.\n> ");
        fgets(itemName, sizeof(itemName), stdin);
        itemName[strcspn(itemName, "\n")] = '\0';

        if (strcmp(itemName, "cancel") == 0) {
            printf("Cancelled operation.\n\n");
            return;
        }

        if (strlen(itemName) <= 1) {
            printf("Invalid input. Please enter a valid name. [>1 Characters]\n\n");
        } else {
            break;
        }
    }

    int quantity = 0;
    while (1) {
        printf("\nWhat is the quantity of the item?\n> ");
        if (scanf("%d", &quantity) == 1 && quantity > 0) {
            printf("\n");
            clrBuffer();
            break;
        } else {
            printf("Invalid input. Please enter a valid quantity. [>0]\n");
            clrBuffer();
        }
    }

    float price = 0.0;
    while (1) {
        printf("\nWhat is the price of the item?\n> ");
        if (scanf("%f", &quantity) == 1 && quantity >= 0) {
            printf("\n");
            clrBuffer();
            break;
        } else {
            printf("Invalid input. Please enter a valid float. [>=0.0]\n");
            clrBuffer();
        }
    }

    Item item;
    item.itemId = id;
    strcpy(item.itemName, itemName);
    item.quantity = quantity;
    item.price = price;

    items[numItems] = item;
    numItems++;
}

void displayInventory(const Item items[], int& numItems) {
    if (numItems == 0) {
        printf("There are no items in the system.\n\n");
        return;
    }
    printf("%-8s %-15s %-15s %-8s\n", "ID", "Name", "Quantity", "Price");
    printf("------------------------------------------------\n");
    for (int i = 0; i < numItems; i++) {
        printf("%-8d %-15s %-8d %.2f\n",
            items[i].itemId,
            items[i].itemName,
            items[i].quantity,
            items[i].price);
    }
    printf("\n");
}

float calculateTotalValue(const Item items[], int& numItems) {
    float totalValue = 0.0;
    for (int i = 0; i < numItems; i++) {
        totalValue += items[i].price * items[i].quantity;
    }
    return totalValue;
}

void updateItemQuantity(Item items[], int numItems, int itemId, int newQuantity) {
    for (int i = 0; i < numItems; i++) {
        if (items[i].itemId == itemId) {
            items[i].quantity = newQuantity;
            break;
        }
    }
}