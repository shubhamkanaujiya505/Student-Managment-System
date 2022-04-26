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
    if(total ==0){

    
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
    else{
        for (int i = total; i < total + choice; i++)
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
         total = total + choice;
    }
}
void Show(){
    if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else{
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
}

void search(){
     if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else{
    string rollno;
    cout<<"enter the rollno of student which you want to search: ";
    cin>>rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])      
        {
            cout<<"Data of student: "<<i+1<<endl;
            cout<<"Name: "<<arr1[i]<<endl;
            cout<<"Rollno: "<<arr2[i]<<endl;
            cout<<"Course: "<<arr3[i]<<endl;
            cout<<"Class: "<<arr4[i]<<endl;
            cout<<"Contact: "<<arr5[i]<<endl;
        }
        
    }
    }
    
}
void update(){
     if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else{
    string rollno;
    cout<<"enter the rollno of student which you want to search: ";
    cin>>rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])      
        {
            cout<<"Previous data"<<endl<<endl;
            cout<<"Data of student: "<<i+1<<endl;
            cout<<"Name: "<<arr1[i]<<endl;
            cout<<"Rollno: "<<arr2[i]<<endl;
            cout<<"Course: "<<arr3[i]<<endl;
            cout<<"Class: "<<arr4[i]<<endl;
            cout<<"Contact: "<<arr5[i]<<endl;
            cout<<"\n enter new data: "<<endl;
            cout<<"\nEnter name: ";
            cin>>arr1[i];
            cout<<"\nEnter Rollno: ";
            cin>>arr2[i];
            cout<<"\nEnter Course: ";
            cin>>arr3[i];
            cout<<"\nEnter Class: ";
            cin>>arr4[i];
            cout<<"\nEnter Contact: ";
            cin>>arr5[i];
        }
        
    }
    }
}
void deleteRecords(){
     if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
    int a;
    cout<<"Press 1 to delete full records"<<endl;
    cout<<"Press 2 to delete specific records"<<endl;
    cin>>a;
    if(a==1)
    {
        total = 0;
        cout<<"All record is deleted"<<endl;
    }
    else(a==2){
        string rollno;
        cout<<"enter rollno which you want to delete"<<endl;
        cin>>rollno;
        for (int i = 0; i < total; i++)
        {
            if(rollno == arr2[i])
            {
                for (int j = i; j < total; j++)
                {
                    arr1[j] = arr1[j+1];
                    arr2[j] = arr2[j+1];
                    arr3[j] = arr3[j+1];
                    arr4[j] = arr4[j+1];
                    arr5[j] = arr5[j+1];
                }
                total--;
                cout<<"Your required record is deleted.."<<endl;
                
            }
        }
        

    }
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