#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product products[MAX];
int count = 0;


// Add Product
void addProduct() {

    printf("\nEnter Product ID: ");
    scanf("%d", &products[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", products[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &products[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &products[count].price);


    count++;

    printf("Product added successfully!\n");
}


// Display Products
void displayProducts() {

    if(count == 0) {
        printf("Inventory is empty\n");
        return;
    }


    for(int i = 0; i < count; i++) {

        printf("\nProduct ID: %d", products[i].id);
        printf("\nName: %s", products[i].name);
        printf("\nQuantity: %d", products[i].quantity);
        printf("\nPrice: %.2f\n", products[i].price);
    }
}


// Search Product
void searchProduct() {

    int id;
    int found = 0;


    printf("\nEnter Product ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(products[i].id == id) {

            printf("\nProduct Found");
            printf("\nName: %s", products[i].name);
            printf("\nQuantity: %d", products[i].quantity);
            printf("\nPrice: %.2f\n", products[i].price);

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Product not found\n");
}


// Update Quantity
void updateQuantity() {

    int id, qty;


    printf("\nEnter Product ID: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(products[i].id == id) {

            printf("Enter new quantity: ");
            scanf("%d", &qty);

            products[i].quantity = qty;

            printf("Quantity updated successfully\n");
            return;
        }
    }


    printf("Product not found\n");
}


// Delete Product
void deleteProduct() {

    int id;
    int found = 0;


    printf("\nEnter Product ID to delete: ");
    scanf("%d", &id);


    for(int i = 0; i < count; i++) {

        if(products[i].id == id) {


            for(int j = i; j < count-1; j++) {
                products[j] = products[j+1];
            }


            count--;

            printf("Product deleted successfully\n");

            found = 1;
            break;
        }
    }


    if(!found)
        printf("Product not found\n");
}



// Main Function
int main() {

    int choice;


    while(1) {

        printf("\n\n===== Inventory Management System =====");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Quantity");
        printf("\n5. Delete Product");
        printf("\n6. Exit");


        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        switch(choice) {

            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateQuantity();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                printf("Exiting...");
                return 0;

            default:
                printf("Invalid choice");
        }
    }


    return 0;
}