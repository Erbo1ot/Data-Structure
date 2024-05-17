#include <iostream>
#include <vector>
#include <cmath>

    using namespace std;
    
        struct Date {
    int d, m, y;
        bool isValid() const {
            if (m < 1 || m > 12)
                return false;
        if (d < 1)
            return false; 
            if (m == 2) {
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
            { 
                if (d > 29) 
                    return false;
    } else {
        if (d > 28) 
            return false;
        }
    } else if (m==4 || m== 6 ||  m==9 || m==11) {
        if (d > 30) 
            return false;
            } else {
                if (d > 31)
                    return false;
        }
    return true;
}
    int dayOfWeek() {
        int mouthTable[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
         int dayIndex = (y + y / 4 - y / 100 + y / 400 + mouthTable[m - 1] + d) % 7;
    return dayIndex;
}
    int difference(Date s2){
        int diff = 0;
            diff += d - s2.d;
                diff += (m - s2.m) * 30;
                    diff += (y - s2.y) * 365;
        return diff;
    }
};
    int main() {
        Date s1 = {27, 4, 2024};
    if (s1.isValid()) {
        static const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int dayIndex = s1.dayOfWeek();
        cout << "Input date is valid." << endl;
            cout << "Day of the week: " << daysOfWeek[dayIndex] << endl;
    } else {
        cout << "Input date is invalid!" << endl;
}
    Date s2={30,7,2024};
    
        cout<<s2.difference(s1);
        
    return 0;
}