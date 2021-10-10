#include <stdio.h>

int main()
{
    int dollar,item_no;
    printf("Enter dollar ($1-$3); ");
    scanf("%d", &dollar);

    switch (dollar)
    {
    case 1:
        printf("Items available for $%d:\n",dollar);
        break;
    case 2:
        printf("Items available for $%d:\n",dollar);
        break;
    case 3:
        printf("Items available for $%d:\n",dollar);
        break;

    default:
    printf("Enter in the given price rage\n");
        break;
    }

    if(dollar == 1){
        printf("1.Water\n2.Normal Juice\n3.Soft drink\n");
        scanf("%d", &item_no);

        switch (item_no)
        {
        case 1:
        printf("You have choosen Water\n");
        printf("Thanks for the visit\n");
            break;
        case 2:
        printf("You have choosen Normal Juice\n");
        printf("Thanks for the visit\n");
            break;
        case 3:
        printf("You have choosen Soft dirnk\n");
        printf("Thanks for the visit\n");
            break;
        
        default:
         printf("Item no not available!!\n");
            break;
        }
    }
    else if(dollar == 2){
        printf("1.Dehydrated Water\n2.Juice\n3.Hard Drinks\n");
        scanf("%d", &item_no);
        switch (item_no)
        {
        case 1:
        printf("You have choosen Dehydrated Water\n");
        printf("Thanks for the visit\n");
            break;
        case 2:
        printf("You have choosen Juice\n");
        printf("Thanks for the visit\n");
            break;
        case 3:
        printf("You have choosen Hard Drinks\n");
        printf("Thanks for the visit\n");
            break;
        
        default:
         printf("Item no not available!!\n");
            break;
        }
    }
    else if(dollar == 3){
        printf("1.Coke\n2.Fanta\n3.Sugar free coke\n");
        scanf("%d", &item_no);

        switch (item_no)
        {
        case 1:
        printf("You have choosen Coke\n");
        printf("Thanks for the visit\n");
            break;
        case 2:
        printf("You have choosen Fanta\n");
        printf("Thanks for the visit\n");
            break;
        case 3:
        printf("You have choosen Sugar free coke\n");
        printf("Thanks for the visit\n");
            break;
        
        default:
        printf("Item no not available!!");
            break;
        }
    }
    else {
        printf("No items available\n");
    }
    
    return 0;
}
