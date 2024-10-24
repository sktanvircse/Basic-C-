#include  <iostream>;
using namespace std;

int main() {
    int data[]={1,2,3,4,5,6,7,8,9};
    int item;
    int k=0, loc=-1;
    int n = sizeof(data)/sizeof(int);
    cout<<"Enter the item";
    cin>>item;
    while(loc == -1 && k <= n) {
        if(data[k] == item) {
            loc = k;
        }
        k++;
    }
    if(loc == -1) {
        cout<<"Item not found";
    }else {
        cout<<"Item found at location "<<loc;
    }
}


