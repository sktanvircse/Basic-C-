#include <iostream>;
using namespace std;

void bubble(int *data, int n) {
    for (int i = 0; i < n; i++) {
    int flag = 0;
        while (flag  < n - i - 1) {
            if (data[flag] > data[flag + 1]) {
                    int temp = data[flag];
                    data[flag] = data[flag + 1];
                    data[flag + 1] = temp;
            }
            flag++;
        }
    }
}

int main() {

    int data[]={60 , 8 , -9 , 5 ,0 ,15 ,-85};
    int n = sizeof(data)/sizeof(data[0]);
    bubble(data, n);
    cout<<"Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout<<data[i]<<" ";
    }

    return 0;
}
