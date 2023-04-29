#include <iostream>

namespace first {
    int x = 1;   
}

namespace second {
    int x = 2;
}

int main() {
//  using namespace std;        // <--- No need to call std:: anymore
    using namespace first;      // <--- No need to call first:: anymore
    using std::cout;            // <--- imports only cout member
    using std::endl;          // <--- imports only endl member

    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;
}
