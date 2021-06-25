#include<iostream>
using namespace std;

string name[20], course[20], classN[20], fName[20], mName[20], roll[20], contact[20];
int total = 0;


void enter()
{
    int num;
    cout<<"How mant students data you want to enter? ";
    cin>>num;
    
    if(total == 0)
    {
        total = num + total;
        
        for(int i = 0; i < num; i++)
        {
            cout<<"\nEnter the data of students "<<i+1<<endl;
            
            cout<<"Enter Student Name: ";
            cin>>name[i];
            
            cout<<"Enter Father's Name: ";
            cin>>fName[i];
            
            cout<<"Enter Course Name: ";
            cin>>course[i];
            
            cout<<"Enter Roll No.: ";
            cin>>roll[i];
            
            cout<<"Enter class Name: ";
            cin>>classN[i];
            
            cout<<"Enter Contact No.: ";
            cin>>contact[i];
            
        }
    }
    
    else
    {
        for(int i = 0; i < num + total; i++)
        {
            cout<<"\nEnter the data of students "<<i+1<<endl;
            
            cout<<"Enter Student Name: ";
            cin>>name[i];
            
            cout<<"Enter Father's Name: ";
            cin>>fName[i];
            
            cout<<"Enter Course Name: ";
            cin>>course[i];
            
            cout<<"Enter Roll No.: ";
            cin>>roll[i];
            
            cout<<"Enter class Name: ";
            cin>>classN[i];
            
            cout<<"Enter Contact No.: ";
            cin>>contact[i];
        }
        
        total = num + total;
    }
}

void show()
{
    if(total == 0)
    {
        cout<<"\nNo data is entered\n"<<endl;
    }
    else
    {
        for(int i = 0; i < total; i++)
        {
            cout<<"\n Data of Student : "<<i+1<<endl<<endl;
            cout<<"Student Name: "<<name[i]<<endl;
            cout<<"Father's Name: "<<fName[i]<<endl;
            cout<<"Course Name: "<<course[i]<<endl;
            cout<<"Roll No.: "<<roll[i]<<endl;
            cout<<"Class Name: "<<classN[i]<<endl;
            cout<<"Contact No.: "<<contact[i]<<endl;
        }
    }
}

void search()
{
    if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        string rollNo;
        cout<<"Enter the Roll No. of students you want to search: "<<endl;
        cin>>rollNo;
        
        for(int i = 0; i < total; i++)
        {
            if(rollNo == roll[i])
            {
                cout<<"Student Name: "<<name[i]<<endl;
                cout<<"Father's Name: "<<fName[i]<<endl;
                cout<<"Course Name: "<<course[i]<<endl;
                cout<<"Roll No.: "<<roll[i]<<endl;
                cout<<"Class Name: "<<classN[i]<<endl;
                cout<<"Contact No.: "<<contact[i]<<endl;
            }
        }
    }
}

void update()
{
    if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        string rollNo;
        cout<<"Enter the Roll No. of student which you want to update: ";
        cin>>rollNo;
        
        for(int i = 0; i < total; i++)
        {
            if(rollNo == roll[i])
            {
                cout<<"\nPrevious data of Student is: "<<endl<<endl;
                cout<<"Data of student: "<<i+1<<endl;
                cout<<"Student Name: "<<name[i]<<endl;
                cout<<"Father's Name: "<<fName[i]<<endl;
                cout<<"Course Name: "<<course[i]<<endl;
                cout<<"Roll No.: "<<roll[i]<<endl;
                cout<<"Class Name: "<<classN[i]<<endl;
                cout<<"Contact No.: "<<contact[i]<<endl<<endl;
                
                cout<<"\nEnter New data"<<endl<<endl;
                cout<<"Enter Student Name: ";
                cin>>name[i];
                
                cout<<"Enter Father's Name: ";
                cin>>fName[i];
                
                cout<<"Enter Course Name: ";
                cin>>course[i];
                
                cout<<"Enter Roll No.: ";
                cin>>roll[i];
                
                cout<<"Enter class Name: ";
                cin>>classN[i];
                
                cout<<"Enter Contact No.: ";
                cin>>contact[i];
            }
        }
    }
}


void delete_record()
{
    if(total == 0)
    {
        cout<<"No data is entered"<<endl;
    }
    else
    {
        int a;
        cout<<"Press 1 to delete all record"<<endl;
        cout<<"Press 2 to delete specific record"<<endl;
        cin>>a;
        
        if(a == 1)
        {
            total = 0;
            cout<<"All recordes is deleted....!!"<<endl;
        }
        else if(a == 2)
        {
            string rollNo;
            cout<<"Enter the Roll No.of students which you wanted to delete: ";
            cin>>rollNo;
            
            for(int i = 0; i < total; i++)
            {
                if(rollNo == roll[i])
                {
                    for(int j = i; j < total; j++)
                    {
                        name[j] = name[j+1];
                        fName[j] = fName[j+1];
                        course[j] = course[j+1];
                        roll[j] = roll[j+1];
                        classN[j] = classN[j+1];
                        contact[j] = contact[j+1];
                    }
                    
                    total--;
                    cout<<"Your required record is deleted"<<endl;
                }
            }
        }
        
        else
        {
            cout<<"Invalid input";
        }
    }
}


main()
{
    int choice;
    
    do
    {
        cout<<"\n\t****Welcome to Student Management Portal****\n";
        
        cout<<"Press 1 to enter students data\n";
        
        cout<<"Press 2 to show students data\n";
        
        cout<<"Press 3 to search students data\n";
        
        cout<<"Press 4 to update students data\n";
        
        cout<<"Press 5 to delete students data\n";
        
        cout<<"Press 6 to exit\n";
        
        cout<<"Enter you choice to perform operation: ";
        cin>>choice;
        
        switch(choice)
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
                delete_record();
                break;
            case 6:
                break;
            default:
                cout<<"Invalid choice, Please enter valid choice.....";
                break;
        }
    }
    
    while(choice != 6);
}
