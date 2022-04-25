#include <iostream>
using namespace std;
// store the student data in array formate
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20]
int total = 0;
// declearning functions

int main()
{
    // user input
    int value; // store input
    while (true)  //for infinite loop 
    {
        cout<<"Press 1 to enter data"<<endl;
        cout<<"Press 2 to show data"<<endl;
        cout<<"Press 3 to search data"<<endl;
        cout<<"Press 4 to update data"<<endl;
        cout<<"Press 5 to delete data"<<endl;
        cout<<"Press 6 to exit "<<endl;
        cin>>value;
        // adding switch condition loop for handle all the 6 condition
        switch (value)
        {
            case 1:
                Enter();
                break;
            case 2:
                Show();
                break;
            case 3:
                Search();
                break;
            case 4:
                Update();
                break;
            case 5:
                DeleteRecords();
                break;
            case 6:
                exit();
                break;
            default:
                cout<<"Invalid input"<<endl;

        }
    }
    
    return 0;
}