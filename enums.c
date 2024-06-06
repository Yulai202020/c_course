#include <stdio.h>

enum State {Working = 1, Failed = 0}; 
enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};
enum year {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main() {
    // Enum its enumeration aliase for numbers
    // for example Mon is 0, Feb is 1

    enum week day;
    day = Wed; // which id in enum week is wed (its 2)
    printf("%d", day); // 2

    for (int i = Jan; i <= Dec; i++) { // for from 0 (cuz Jan is equal to 0) to 11 (cuz Dec is equal to 11)
        printf("%d ", i);
    }

    return 0;
}