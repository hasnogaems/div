#include <stdio.h>
#include <stdlib.h>
#include "../s21_decimal.h"
#include "../utils.h"
int main() {
  int xx=10;
  
  int xyx=0b1010;
  
  printf("%d %d\n", xx, xyx);

  int a = 0b00000010001;
  int bitN = 33;
  // int result=get_bit_from_int(a, bitN);
  // printf("bit %d of %d is %d\n", bitN, a, get_bit_from_int(a, bitN));
  s21_decimal bits = {0b000001010, 0b0000000, 0b000101, 0b000000000000000000000000000000};
  // printf("decimal bit %d is %d", bitN, get_bit_value(bits, bitN));
 // set_bit_value(&bits, 32, 1); // howw toprintf in binary?????
  s21_decimal bits2 = {0b000000010, 0b0000000, 0b00000, 0b000000000000000000000000000};

//   printb(bits3);
 // printb(bits);
 //s21_div(bits, bits2, &bits3);
 // nullify(&bits);
// printb(bits3);

    s21_big_decimal bd;
   
    initializeByBigZeros(&bd);
    


     //s21_div(twenty, two, &bits3);
    //  subBigDecimal(btwenty, btwo, &bd);
    //  printb(bits3);
    //  myadd(twenty, two, &bits3);
    //  myshiftleft(&btwenty, 31);
    //  printbb(btwenty);
    //  printb(bits3);
    //  s21_big_decimal ten = {0b00001010, 0b0000, 0b0000, 0b00000000000000000, 0b000, 0b0000};
    //  mymulby10(&ten);
    //  printbb(ten);
    // 0xFFFFFFFF, // Assuming each field is 32 bits wide, this sets all 32 bits to 1
   
  //  s21_decimal ovrflw1= {0xFFFFFFFF,
  //   0xFFFFF0,
  //   0xFFFFF000, 0b00000000000000000000000000000};
  //   s21_decimal ovrflw2 = {0xFFFFFFF,
  //   0xFFFFF000,
  //   0xFFFFF000, 0b00000000000000000000000000000};
    // printb(ovrflw1);
    // printb(ovrflw2);
    // printb(bits3);
    // nullify(&bits3);
    // printf("nullified bits3:\n");
   // printb(bits3);
  
//     for(int k=0;k<100;k++){  myaddnormalize(twenty, twenty, &twenty);
//     // printbb(btwenty);
// //myshiftright(&btwenty, 3);
//     // myaddnormalize(twenty, two, &bits3);
// printf("iteration is%d",k);
// printb(twenty);
//   //   printbb(btwenty);
  
//    //  printb(bits3);}
//      //scaleDown(&bits3, 1);
//    //  printb(bits3);
// //s21_decimal delimoe   
//     }  
  s21_decimal bits3 = {0b000000011, 0b0000110, 0b000101, 0b00000000000000000000011100000000};
  nullify(&bits3);
//   printb(bits3);
//  //   myaddnormalize(ovrflw1, ovrflw2, &bits3);
// printb(bits3);
// char more;
// int memory;
// s21_decimal ovrflw11= {0x0,
//     0xFFFF,
//     0xFFFFF0, 0b00000000000000000000000000000};
//     s21_decimal ovrflw22 = {0b101,
//     0b00,
//     0b0, 0b00000000000000000000000000000};
//     printb(ovrflw22);
//     printf("multiplied by ten:\n");
//     mymulby10s(&ovrflw22);
// for(int k=1;k<100;k++){
//   printf("iteration %d", k);
//     printb(ovrflw22);
//     more=32;
//     if(ovrflw22.bits[2]>memory)more=62;

//     printf("\n                 %c%d    %d    %d\n", more, ovrflw22.bits[2], ovrflw22.bits[1], ovrflw22.bits[0]);
//     memory=ovrflw22.bits[2];
    
//     mymulby10s(&ovrflw22);
// }
  

  
uint128_t test;


//  s21_big_decimal btwenty = {0b000010100, 0b0, 0b0000, 0b00000000000000000, 0b000, 0b0000};
//     s21_big_decimal btwo = {0b0000011, 0b0000000, 0b0000, 0b000000000000000000000000000000, 0b0000, 0b00000};
//     initializeByBigZeros(&bd);
//       printbb(bd);
//     mysubb(btwenty, btwo, &bd);
//     printbb(bd);
 // -6422229398
   // 4636249360
 s21_decimal dec_1 = {{0x5d4c8b4b, 0x7b63ca2d, 0x125d, 0x80000000}};
  // -3.78
  s21_decimal dec_2 = {{0x17a, 0x0, 0x0, 0x80020000}};
  // -86727035062894149274439.22
  s21_decimal dec_check = {{0x71e667d2, 0x32faf9b8, 0x72c84, 0x80020000}};
    mysubnormalize(dec_1, dec_2, &bits3);
    printb(bits3);
  s21_from_decimal_to_int128(bits3, &test);
print_uint128(test);

  return 0;

}


//MINE MAIN uint working
 