#include <iostream>
using namespace std;

void hanoi(int n, int from, int to, int aux) {

    if (n == 1) {
       
        bool adjacent = (from == to + 1) || (to == from + 1);
        if (adjacent) {
            cout << "Move disk 1 from " << from << " to " << to << '\n';
        } else {
            
            cout << "Move disk 1 from " << from << " to " << aux << '\n';
            cout << "Move disk 1 from " << aux << " to " << to << '\n';
        }
        return;
    }



    hanoi(n - 1, from, to, aux);           
    cout << "Move disk " << n << " from " 
         << from << " to " << aux << '\n';  

    hanoi(n - 1, to, from, aux);          
    cout << "Move disk " << n << " from " 
         << aux << " to " << to << '\n';  

    hanoi(n - 1, from, to, aux);        
}

int main() {
    int n;
    cin >> n;


    hanoi(n, 1, 3, 2);

    return 0;
}

