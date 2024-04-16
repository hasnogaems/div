#include "s21_decimal.h"
#include "utils.h"
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result){
    int error=0;
    nullify(result);
    s21_decimal one={{0b01,0,0,0}};
    int sign1=extractBitSign(value_1);
    int sign2=extractBitSign(value_2);
    unsigned int sign=0;  
s21_big_decimal big1, big2, resbig, buffer;
    nullifyb(&big1);nullifyb(&big2);nullifyb(&resbig);nullifyb(&buffer);
     int scale=normalize(value_1, value_2, &big1, &big2);
     s21_decimal compareit; nullify(&compareit);
     while(s21_is_less(value_2, value_1)){
       myshiftlefts(&value_2, 1);
       myadd(*result, one, result);


     }
}

int div_int(unsigned int value1, unsigned int value2, unsigned int* result){
    int top_bit1=0;
    int top_bit2=0;
    for(int i=31;i>0;i--){
if(get_bit(value1, i)){top_bit1=i;
break;}
    }
        for(int i=31;i>0;i--){
if(get_bit(value2, i)){top_bit2=i;
break;}
    }
    int shift=top_bit1-top_bit2;
    value2<<=shift;
    
    *result=1111111;


}



int s21_div2(s21_decimal divident_src, s21_decimal divisor, s21_decimal *result) {
     int error=0;
    s21_decimal divident, ostatok;
    nullify(&divident);nullify(&ostatok);nullify(result);
    printb(divident);
    int zero=1;
   // int divident=0;
    //int divisor=0;
    int i=95;
    for(;i>=0&&zero;i--)
       if(retrieveBit(divident_src, i)){ //срезаем нули
        zero=0;
        {
            setBit(&divident, 0, retrieveBit(divident_src, i));}}
i++;
            for(;(i)>=0;){

                int position=0;
                while(s21_is_less_or_equal(divident, divisor)&&i>=0){
 myshiftlefts(result, 1); 
 setBit(result, 0, 0); //ставим ноль пока не отнимается
                    i--;
                    position++;
                    grow_divident(&divident, divident_src, i, position);

                }//now divident can be actually substracted from
                if(i>=0){
s21_sub(divident, divisor, &ostatok);

 myshiftlefts(result, 1); 
 setBit(result, 0, 1);
divident=ostatok;
grow_divident(&divident, divident_src, i, position);
i--;}
// и теперь мы заведем цикл на собственно деление, но если divisor биты будут занимать больше одного инта, то просто делением я не смогу это сделать, надо ведь через вычитание?

            }
            if(zeroDecimal(ostatok)){
                mymulby10(ostatok);

            }

            
        
        
        
        printf("divident:\n");
        printb(divident);
        printf("ostatok:\n");
        printb(ostatok);
    return error;
}

int s21_div_big(s21_decimal divident_src, s21_decimal divisor, s21_decimal *result) {
     int error=0;
     int scale1=GETSCALE(divident_src);
    int scale2=GETSCALE(divisor);   
      if(result){ //if result not null
       int sign1=extractBitSign(divident_src);
    int sign2=extractBitSign(divisor);  
     unsigned int sign=0; 
    s21_big_decimal divident={{0}}, divident_srcb={{0}}, divisorb={{0}}, ostatok={{0}}, resultb={{0}};
   nullify(result);
   int scale=normalize(divident_src, divisor, &divident_srcb, &divisorb);
    int zero=1;
   // int divident=0;
    //int divisor=0;
    int i=;
    for(;i>=0&&zero;i--)
       if(getBigBit(divident_srcb, i)){ //срезаем нули
        zero=0;
        {
            setBigBit(&divident, 0, getBigBit(divident_srcb, i));}}
i++;
            for(;(i)>=0;){

                int position=0;
                while(s21_is_less_or_equalb(divident, divisor)&&i>=0){
 myshiftleft(&resultb, 1); 
 s21_set_bitb(&resultb, 0, 0); //ставим ноль пока не отнимается
                    i--;
                    position++;
                    grow_dividentb(&divident, divident_srcb, i);

                }//now divident can be actually substracted from
                if(i>=0){
mysubb(divident, divisorb, &ostatok);

 myshiftleft(&resultb, 1); 
 s21_set_bitb(&resultb, 0, 1);
divident=ostatok;
grow_dividentb(&divident, divident_srcb, i);
i--;}


            }
            if(zeroBigDecimal(ostatok)){
                mymulby10(ostatok);
                
            }

            
        
        
        
        printf("divident:\n");
        printbb(divident);
        printf("ostatok:\n");
        printbb(ostatok);
        error=mybig_to_decimal(resultb, result, scale, 0);}
        else{
            error=1;
        }
        
    return error;
}
    void grow_divident(s21_decimal* divident, s21_decimal divident_src,int i, int position){
 myshiftlefts(divident, 1); 
 setBit(divident, 0, retrieveBit(divident_src, i));
    }

 void grow_dividentb(s21_big_decimal* divident, s21_big_decimal divident_src,int i){
 myshiftleft(divident, 1); 
 s21_set_bitb(divident, 0, getBigBit(divident_src, i));
    }
