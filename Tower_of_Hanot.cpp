#include  <iostream>;
using namespace std;
int moveCount = 0;
void Tower(int n, char beg, char aux, char end) {
 if (n > 0) {
  Tower(n - 1, beg, end, aux);
  moveCount++;
  cout << "Move disk " << n << " from rod " << beg << " to rod " << end << endl;
  Tower(n - 1, aux, beg, end);
 }
}
int main() {
 int n;
 cout << "Enter the number of disks: ";
 cin >> n;
 cout << "Solution for Tower of Hanoi problem with " << n << " disks:" << endl;
 Tower(n, 'A', 'B', 'C');
 cout << "Total moves: " << moveCount << endl;
 return 0;
}


