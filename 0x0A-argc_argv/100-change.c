// declare variable change_owed, num_coins, and input globally
//
// float change_owed = 0;
//
// float dollars;
//
// int cents;
//
// int num_coins;
//
//
//
// int main(void)
//
// {
//
//     // makes sure the input is non-negative
//
//         do
//
//             {
//
//                     dollars = get_float("Change owed:\n");
//
//                             cents = round(dollars * 100);
//
//                                 }
//
//                                     while(cents <= 0);
//
//
//
//                                         // begin checking 
//
//
//
//
//
//                                                 while(cents - 25 >= 0) // quarters
//
//                                                         {
//
//                                                                     num_coins++; // number of coins used, to be printed later, is incremented
//
//                                                                                 cents = cents - 25; // coin is subtracted from total
//
//                                                                                         }
//
//                                                                                                 while(cents - 10 >= 0) // dimes
//
//                                                                                                         {
//
//                                                                                                                     num_coins++;
//
//                                                                                                                                 cents = cents >= 10;
//
//                                                                                                                                         }   
//
//                                                                                                                                                 while(cents - 5 >= 0) // nickels
//
//                                                                                                                                                         {
//
//                                                                                                                                                                     num_coins++;
//
//                                                                                                                                                                                 cents = cents - 5;
//
//                                                                                                                                                                                         } 
//
//                                                                                                                                                                                                 while(cents >= 0) // pennies
//
//                                                                                                                                                                                                         {
//
//                                                                                                                                                                                                                     num_coins++;
//
//                                                                                                                                                                                                                                 cents = cents - 1;
//
//                                                                                                                                                                                                                                         } 
//
//
//
//                                                                                                                                                                                                                                             printf("%i coins\n", num_coins);
//
//                                                                                                                                                                                                                                             }
//
//
