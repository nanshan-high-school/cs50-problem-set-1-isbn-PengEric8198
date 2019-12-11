#include <iostream>
using namespace std;

int main() {
long long ISBN;

cout <<"請輸入ISBN = ";
cin >> ISBN;

int checksum = ISBN % 10;
int num = ISBN / 10;
float all = 0;

    do {

        if (num >= 100000000) {
            int i = 1;
            for (; num / (i * 100000000) >= 1; i++) {
            }

            num = num - 100000000 * (i - 1);
            
        all = all + (i - 1) * 10;
        
        } else if (num >= 10000000) {
            int i = 1;
            for (; num / (i * 10000000) >= 1; i++) {
            }

            num = num - 10000000 * (i - 1);
        
        all = all + (i - 1) * 9;
        
        } else if (num >= 1000000) {
            int i = 1;
            for (; num / (i * 1000000) >= 1; i++) {
            }

            num = num - 1000000 * (i - 1);
                
        all = all + (i - 1) * 8;
          
        } else if (num >= 100000) {
            int i = 1;
            for (; num / (i * 100000) >= 1; i++) {
            }

            num = num - 100000 * (i - 1);
                
        all = all + (i - 1) * 7;
            
        } else if (num >= 10000) {
            int i = 1;
            for (; num / (i * 10000) >= 1; i++) {
            }

            num = num - 10000 * (i - 1);
                
        all = all + (i - 1) * 6;
            
        } else if (num >= 1000) {
            int i = 1;
            for (; num / (i * 1000) >= 1; i++) {
            }

            num = num - 1000 * (i - 1);
                
        all = all + (i - 1) * 5;
            
        } else if (num >= 100) {
            int i = 1;
            for (; num / (i * 100) >= 1; i++) {
            }

            num = num - 100 * (i - 1);
                
        all = all + (i - 1) * 4;
            
        } else if (num >= 10) {
            int i = 1;
            for (; num / (i * 10) >= 1; i++) {
            }

            num = num - 10 * (i - 1);
                
        all = all + (i - 1) * 3;
           
        } else if (num >= 1) {
            int i = 1;
            for (; num / (i * 1) >= 1; i++) {
            }

            num = num - 1 * (i - 1);
                
        all = all + (i - 1) * 2;   
        }
  
    } while (num > 0);

int allint = (all / 11);
allint = allint * 10;

all = (all / 11) * 10;

int end = all - allint;

    if (end == checksum) {
        cout << "是";
    } else {
        cout << "不是";
    }

}
