#include <stdio.h>

// Define a structure to hold menu item details

struct MenuItem {
    char name[30];
    float price;
    int quantity;
};


// Function to display the menu and handle user interaction

int main() {
    struct MenuItem menu[] = {
        {"Fries", 10.00, 2},
        {"Burguer", 25.50, 1},
        {"Soda", 5.00, 3}
    };

    int choice;
    int count_menu = 0, count_outback = 0, count_exit = 0;

    do {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("       Welcome to Outback!\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Your Australian Adventure Awaits!\n\n");

        printf("1. Menu\n2. Outback Closer to You!\n3. Exit\n");
        printf("\nPlease select an option: ");
        scanf("%d", &choice);



        //Switch case to handle user choices
        switch (choice) {
            case 1:
                count_menu++;
                printf("Item\tPrice\tQuantity\n");
                printf("-----\t-----\t--------\n");
                for (int i = 0; i < 3; i++) {
                    printf("%s\tR$%.2f\t%d\n", menu[i].name, menu[i].price, menu[i].quantity);
                }
                printf("\nPress any key and ENTER to go back to the menu...\n");
                char back[10];
                scanf("%s", back);
                break;

            // Second case for option 2 from the menu
            case 2:
                count_outback++;
                printf("You selected Outback Closer to You!\n");
                printf("\nPress any key and ENTER to go back to the menu...\n");
                char back2[10];
                scanf("%s", back2);
                break;

            // Third case to exit the program
            case 3:
                count_exit++;
                printf("You selected Exit.\n");
                break;

            // Default case in case the user provides invalid input
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        // Prompt to go back to the menu
        printf("\n");
    } while (choice != 3);

    printf("\nChoices Summary:\n");
    printf("Menu: %d time(s)\n", count_menu);
    printf("Outback Closer to You: %d time(s)\n", count_outback);
    printf("Exit: %d time(s)\n", count_exit);
    printf("\n");

    return 0;
}