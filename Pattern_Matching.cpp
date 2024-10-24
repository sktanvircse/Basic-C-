#include <iostream>;
using namespace std;

int main() {

    string p , t;
    int r , s , k , max, loc = -1;
    cout<<"Enter the string Text: ";
    cin>>t;
    cout<<"Enter the string Pattern: ";
    cin>>p;

    r = p.length();
    s = t.length();
    max = s - r + 1;
    k=1;
    while(k<=max) {
        bool match = true;
        for(int i = 1; i <= r; i++) {
            if(p[i-1] != t[k + i-2]) {
                match = false;
                break;
            }
        }
        if(match) {
            loc = k;
            break;
        }
        k++;
    }

    if(loc == -1) {
        cout<<"Pattern not found";
    }else {
        cout<<"Pattern found at location "<<loc;
    }

    return 0;
}
