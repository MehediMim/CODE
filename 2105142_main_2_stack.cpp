#include <iostream>
// #include "2105142_1_a_queue.h"
// #include "2105142_1_ll_queue.h"
#include "new_header.h"
using namespace std;

int main()
{
    int choice;
    cout << "1 for int 2 for char" << endl;
    cin >> choice;
    if (choice == 1)
    {
        stack<int> stck;
        while (1)
        {
            stck.display();
            cout << "1_clear 2_push 3_pop 4_length 5_topvalue 6_is_empty " << endl;
            int _temp;
            cin >> _temp;
            switch (_temp)
            {
            case 1:
            {
                stck.clear();
                break;
            }
            case 2:
            {
                int _temp;
                cin >> _temp;
                stck.push(_temp);
                break;
            }
            case 3:
            {
                stck.pop();
                break;
            }
            case 4:
            {
                cout << stck.length() << endl;
                break;
            }
            case 5:
            {
                cout << stck.TopValue() << endl;
                break;
            }
            case 6:
            {
                cout << stck.isEmpty() << endl;
                break;
            }

            case 0:
            {
                return 0;
                break;
            }
            }
        }
    }
}
