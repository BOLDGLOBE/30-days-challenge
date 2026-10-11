#include <stdio.h>

int main() {
    float purchaseamount, distance;
    int customertype;
    float discount_percent = 0.0, discount_amount = 0.0;
    float amount_after_discount = 0.0, delivery_charge = 0.0, final_payable = 0.0;

    printf("Enter purchase amount : ");
    scanf("%f", &purchaseamount);

    printf("Enter customer type (1 = Student, 2 = Regular Customer): ");
    scanf("%d", &customertype);

    printf("Enter delivery distance  ");
    scanf("%f", &distance);

    if (customertype == 1) {
        if (purchaseamount >= 2000) {
            discount_percent = 15.0;
        } else {
            discount_percent = 10.0;
        }
    } else if (customertype == 2) {
        if (purchaseamount >= 3000) {
            discount_percent = 8.0;
        } else {
            discount_percent = 0.0;
        }
    } else {
        printf("Invalid customer \n");
        discount_percent = 0.0;
    }

    discount_amount = (discount_percent / 100.0) * purchaseamount;
    amount_after_discount = purchaseamount - discount_amount;

    if (distance <= 5.0) {
        delivery_charge = 40.0;
    } else if (distance > 5.0 && distance <= 15.0) {
        delivery_charge = 70.0;
    } else {
        delivery_charge = 100.0;
    }

    final_payable = amount_after_discount + delivery_charge;

    printf("Purchase Amount:     %.2f\n", purchaseamount);
    printf("Discount Amount:     %.2f (%f%%)\n", discount_amount, discount_percent);
    printf("Amount After Discount:%.2f\n", amount_after_discount);
    printf("Delivery Charge:     %.2f\n", delivery_charge);
    printf("Final Payable Amount: %.2f\n", final_payable);

    return 0;
}
