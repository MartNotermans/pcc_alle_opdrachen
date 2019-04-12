#include <bitset>
#include <iostream>
#include <string>
using namespace std;
 
uint8_t move_bits(uint8_t ch, int n){
    if(n == 0 | n >= 8){
        return ch;
    }else if(n < 0){
        n = n * -1;
        ch = ch >> n | ch << (7 - n);
        return ch;
    }else if(n > 0){
        ch = ch << n | ch >> (7 - n);
        return ch;
    }
return -99;
}

int main(){
    uint8_t x = 0x58;
    uint8_t backslash = 0x5C;
    uint8_t new_char = move_bits(backslash, -4);
    cout << bitset<7>(new_char) << endl;
}