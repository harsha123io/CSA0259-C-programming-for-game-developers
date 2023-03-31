#include <stdio.h>

// Structure for customer information
struct customer {
    int account_no;
    char name[50];
    int balance;
};

// Function to print account numbers and names of customers with balance < 100
void print_low_balance_customers(struct customer customers[], int num_customers) {
    printf("\nCustomers with balance less than 100:\n");
    for(int i = 0; i < num_customers; i++) {
        if(customers[i].balance < 100) {
            printf("Account No.: %d, Name: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    int num_customers = 3;
    
    // Array of structures to store customer information
    struct customer customers[num_customers];
    
    // Accepting customer information
    for(int i = 0; i < num_customers; i++) {
        printf("Enter details of customer %d:\n", i+1);
        printf("Account No.: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%d", &customers[i].balance);
    }
    
    // Printing account numbers and names of customers with balance < 100
    print_low_balance_customers(customers, num_customers);
    
    return 0;
}

