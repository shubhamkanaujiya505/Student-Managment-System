#include <iostream>
using namespace std;
// store the student data in array formate
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0;
// declearning functions
void Enter(){
    int choice;
    cout<<"How many students do you want to enter: ";
    cin >> choice;
    total = total + choice;
    for (int i = 0; i < choice; i++)
    {
        cout<<"\n Enter data of student: "<<i+1<<endl<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter Rollno: ";
        cin>>arr2[i];
        cout<<"Enter Course: ";
        cin>>arr3[i];
        cout<<"Enter Class: ";
        cin>>arr4[i];
        cout<<"Enter Contact: ";
        cin>>arr5[i];
    }
    
}
void Show(){
    int i;
    for (int i = 0; i < total; i++)
    {
        cout<<"Data of student: "<<i+1<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"Course: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
    }
    
}

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
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleteRecords();
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