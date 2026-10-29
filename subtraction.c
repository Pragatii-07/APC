/**********************************************************************************************
 * Title       : Subtraction
 * Description : Subtracts two big numbers stored in doubly linked lists.
 **********************************************************************************************/

#include "apc.h"

Status subtraction(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR, Dlist **tailR)
{
    int diff = 0, borrow = 0;

    Dlist *temp1 = *tail1; // Start from the last digit of number1
    Dlist *temp2 = *tail2; // Start from the last digit of number2

    /* Continue until all digits from both numbers are finished */
    while (temp1 != NULL || temp2 != NULL)
    {
        int x = (temp1) ? temp1->data : 0; // digit from number1
        int y = (temp2) ? temp2->data : 0; // digit from number2

        x = x - borrow; // subtract borrow from previous step

        /* If x is smaller than y, take borrow from next digit */
        if (x < y)
        {
            diff = (x + 10) - y; // add 10 and subtract
            borrow = 1;          // set borrow for next digit
        }
        else
        {
            diff = x - y; // normal subtraction
            borrow = 0;   // no borrow needed
        }

        /* Store this digit in result at the beginning */
        insert_at_start(headR, tailR, diff);

        /* Move to previous digits */
        if (temp1)
            temp1 = temp1->prev;
        if (temp2)
            temp2 = temp2->prev;
    }

    /* Remove extra zeros from the front (like 000123 -> 123) */
    remove_leading_zero(headR, tailR);

    return SUCCESS; // Subtraction completed
}
