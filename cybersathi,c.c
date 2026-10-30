#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n==============================");
        printf("\n       CYBERSATHI");
        printf("\n   YOUR DIGITAL SAFETY GUIDE");
        printf("\n==============================");

        printf("\n1. Password Safety");
        printf("\n2. OTP Safety");
        printf("\n3. Phishing Awareness");
        printf("\n4. Safe Internet Browsing");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nNever share your password!");
                break;

            case 2:
                printf("\nNever share your OTP!");
                break;

            case 3:
                printf("\nAvoid suspicious links!");
                break;

            case 4:
                printf("\nUse trusted websites only!");
                break;

            case 5:
                printf("\nThank you for using CyberSathi!");
                break;

            default:
                printf("\nInvalid choice!");
        }

    } while(choice != 5);

    return 0;
}
