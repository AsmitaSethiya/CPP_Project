#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;

struct student
{
    char name[20], roll[20];
    int marks, random;
};
student st;

void cpp()
{
    int i=0,arr[6];
	st.marks=0;
	char choice;
	while(i < 5)
    {
        back:	
        st.random = rand()%6;
        for(int j = 0;j <= 6; j++){
            if(st.random == arr[j])
            {
                goto back;
            }
	}
	arr[i]=st.random;
	switch(st.random)
    {
        case 0:
            cout<<i+1<<") What is a correct syntax to output \"Hello World\" in C++?"<<endl;
            cout<<"a) System.out.println(\"Hello world\");"<<endl;
            cout<<"b) Console.WriteLine(\"Hello world\");"<<endl;
            cout<<"c) print(\"Hello world\");"<<endl;
            cout<<"d) cout<<\"Hello world\";"<<endl;
            choice=getch();
            if(choice=='D'||choice=='d')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is d\n"<<endl<<endl;
            }
            break;
        case 1:
            cout<<i+1<<") Which of the following is called address operator?"<<endl;
            cout<<"a) *"<<endl;
            cout<<"b) &"<<endl;
            cout<<"c) _"<<endl;
            cout<<"d) %"<<endl;
            choice=getch();
            if(choice=='B'||choice=='b')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is b\n"<<endl<<endl;
            }
            break;
        case 2:
            cout<<i+1<<") Which of the following is used for comments in C++?"<<endl;
            cout<<"a) // comment"<<endl;
            cout<<"b) /* comment */"<<endl;
            cout<<"c) both // comment or /* comment */"<<endl;
            cout<<"d) // comment */"<<endl;
            choice=getch();
            if(choice=='c'||choice=='C')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is c\n"<<endl<<endl;
            }
            break;
        case 3:
            cout<<i+1<<") Who created C++?"<<endl;
            cout<<"a) Bjarne Stroustrup"<<endl;
            cout<<"b) Dennis Ritchie"<<endl;
            cout<<"c) Ken Thompson"<<endl;
            cout<<"d) Brian Kernighan"<<endl;
            choice=getch();
            if(choice=='A'||choice=='a')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is a\n"<<endl<<endl;
            }
            break;
        case 4:
            cout<<i+1<<")  A language which has the capability to generate new data types are called"<<endl;
            cout<<"a) Extensible"<<endl;
            cout<<"b) Overloaded"<<endl;
            cout<<"c) Encapsulated"<<endl;
            cout<<"d) Reprehensible"<<endl;
            choice=getch();
            if(choice=='A'||choice=='a')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is a\n"<<endl<<endl;
            }
            break;
        case 5:
            cout<<i+1<<") Which of the following is called insertion/put to operator?"<<endl;
            cout<<"a) <"<<endl;
            cout<<"b) >"<<endl;
            cout<<"c) <<"<<endl;
            cout<<"d) >>"<<endl;
            choice=getch();
            if(choice=='c'||choice=='C')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl<<endl;
                cout<<"The corrent answer is c\n"<<endl;
            }
            break;
        case 6:
            cout<<i+1<<") Which of the following is called extraction/get from operator?"<<endl;
            cout<<"a) <"<<endl;
            cout<<"b) >"<<endl;
            cout<<"c) <<"<<endl;
            cout<<"d) >>"<<endl;
            choice=getch();
            if(choice=='d'||choice=='D')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is d\n"<<endl<<endl;
            }
            break;
        case 7:
            cout<<i+1<<")Where is the derived class is derived from?"<<endl;
            cout<<"a) derived"<<endl;
            cout<<"b) base"<<endl;
            cout<<"c) both derived and base"<<endl;
            cout<<"d) class"<<endl;
            choice=getch();
            if(choice=='b'||choice=='B')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is b\n"<<endl<<endl;
            }
            break;
        case 8:
            cout<<i+1<<")Which of the following can derived class inherit?"<<endl;
            cout<<"a) members"<<endl;
            cout<<"b) functions"<<endl;
            cout<<"c) both members and functions"<<endl;
            cout<<"d) classes"<<endl;
            choice=getch();
            if(choice=='C'||choice=='c')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is c\n"<<endl<<endl;
            }
            break;  
        case 9:
             cout<<i+1<<")Which constructor will initialize the base class data member?"<<endl;
            cout<<"a) derived class"<<endl;
            cout<<"b) base class"<<endl;
            cout<<"c) class"<<endl;
            cout<<"d) derived and base class"<<endl;
            choice=getch();
            if(choice=='B'||choice=='b')
            {
                cout<<choice<<" is correct Answer\n"<<endl<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect Answer"<<endl;
                cout<<"The corrent answer is b\n"<<endl<<endl;
            }
            break;  
        }
        i++;
    
    }
	
}

void java()
{
    st.marks = 0;
    char choice;
    int i = 0, arr[11];
    while( i < 10)
    {   
        back:
        st.random = rand()%10;

        for(int j = 0; j <= 11; j++)
        {
            if(st.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = st.random;
        switch(st.random)
        {
        case 0:
            cout<<i+1<<")What is a correct syntax to output \"Hello World\" in Java ? "<<endl;
            cout<<"A) System.out.println(\"Hello World\");"<<endl;
            cout<<"B) Console.log(\"Hello World\");"<<endl;
            cout<<"C) printf(\"Hello World\");"<<endl;
            cout<<"D) cout<<\"Hello World\";"<<endl;
            choice = getch();
            
            if(choice == 'A' || choice == 'a')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is a"<<endl;
            }
            break;
        case 1:    
            cout<<i+1<<")Which of the following option leads to the portability and security of Java?"<<endl;
            cout<<"A) Bytecode is executed by JVM"<<endl;
            cout<<"B) The applet makes the Java code secure and portable"<<endl;
            cout<<"C) Use of exception handling"<<endl;
            cout<<"D) Dynamic binding between objects"<<endl;
            choice = getch();
            
            if(choice == 'A' || choice == 'a')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct Answer is a\n"<<endl;
            }
            break;
        case 2:
            cout<<i+1<<")Which of the following is not a Java features?"<<endl;
            cout<<"A) Dynamic"<<endl;
            cout<<"B) Architecture Neutral"<<endl;
            cout<<"C) Use of pointers"<<endl;
            cout<<"D) Object-oriented"<<endl;
            choice = getch();
            
            if(choice == 'C' || choice == 'c')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is c\n"<<endl;
            }
            break;
        case 3:    
            cout<<i+1<<")What is the return type of the hashCode() method in the Object class?"<<endl;
            cout<<"A) Object"<<endl;
            cout<<"B) int"<<endl;
            cout<<"C) long"<<endl;
            cout<<"D) void"<<endl;
            choice = getch();
            
            if(choice == 'B' || choice == 'b')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is b\n"<<endl;
            }
            break;
        case 4:
            cout<<i+1<<")Java Source Code is compiled into?"<<endl;
            cout<<"A) Obj"<<endl;
            cout<<"B) Source Code"<<endl;
            cout<<"C) Bytecode"<<endl;
            cout<<"D) Exe"<<endl;
            choice = getch();
            
            if(choice == 'C' || choice == 'c')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is c\n"<<endl;
            }  
            break;  
        case 5:
            cout<<i+1<<")Which of this keyword must be used to inherit a class?"<<endl;
            cout<<"A) Super"<<endl;
            cout<<"B) this"<<endl;
            cout<<"C) extent"<<endl;
            cout<<"D) extends"<<endl;
            choice = getch();
            
            if(choice == 'D' || choice == 'd')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is d\n";
            } 
            break;   
        case 6:
            cout<<i+1<<")Decrement operator,  decreases the value of variable by what number?"<<endl;
            cout<<"A) 1"<<endl;
            cout<<"B) 2"<<endl;
            cout<<"C) 3"<<endl;
            cout<<"D) 4"<<endl;
            choice = getch();
            
            if(choice == 'A' || choice == 'a')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                cout<<"The correct answer is a\n"<<endl;
            }   
            break;
        case 7:
            cout<<i+1<<")Which of these is not a interface in the Collections Framework?"<<endl;
            cout<<"A) Collection"<<endl;
            cout<<"B) Group"<<endl;
            cout<<"C) Set"<<endl;
            cout<<"D) List"<<endl;
            choice = getch();
            
            if(choice == 'B' || choice == 'b')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                 cout<<"The correct answer is b\n"<<endl;
            }  
            break; 
        case 8:
            cout<<i+1<<")Which interface restricts duplicate elements?"<<endl;
            cout<<"A) Set"<<endl;
            cout<<"B) List"<<endl;
            cout<<"C) Map"<<endl;
            cout<<"D) All of these"<<endl;
            choice = getch();
            
            if(choice == 'A' || choice == 'a')
            {
                cout<<"Your answer is correct\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                 cout<<"The correct answer is a\n"<<endl;
            }   
            break;
        case 9:
            cout<<i+1<<")Which of these collection class has the ability to grow dynamically?"<<endl;
            cout<<"A) Array"<<endl;
            cout<<"B) Arrays"<<endl;
            cout<<"C) ArrayList"<<endl;
            cout<<"D) None Of the above"<<endl;
            choice = getch();
            
            if(choice == 'C' || choice == 'c')
            {
                cout<<choice<<" is correct answer\n"<<endl;
                st.marks++;
            }
            else
            {
                cout<<choice<<" is incorrect answer"<<endl;
                 cout<<"The correct answer is c\n"<<endl;
            }   
            break;
        }    
        i++;
    }
}



void html()
{
    int i = 0, arr[11];
    st.marks = 0;
    char choice;
    while(i < 10)
    {
        back:
        st.random = rand()%10;

        for(int j = 0; j <= 11; j++)
        {
            if(st.random == arr[j])
            {
                goto back;
            }
        }

        arr[i] = st.random;

        switch(st.random)
        {
            case 0:
                cout<<i+1<<")HTML stands for ?"<<endl;
                cout<<"A)HighText Machine Language"<<endl;
                cout<<"B)HyperText and links Markup Language"<<endl;
                cout<<"C)HyperText Markup Language"<<endl;
                cout<<"D)None of these"<<endl; 

                choice = getch();

                if(choice == 'C' || choice == 'c')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is c\n"<<endl;
                }
                break;
            case 1:
                cout<<i+1<<")The correct sequence of HTML tags for starting a webpage is ?"<<endl;
                cout<<"A)Head, Title, HTML, body"<<endl;
                cout<<"B)HTML, Body, Title, Head"<<endl;
                cout<<"C)HTML, Head, Title, Body"<<endl;
                cout<<"D)HTML, Head, Title, Body"<<endl; 

                choice = getch();

                if(choice == 'D' || choice == 'd')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is d\n"<<endl;
                }
                break;
            case 2:
                cout<<i+1<<")Which of the following element is responsible for making the text bold in HTML??"<<endl;
                cout<<"A)<pre>"<<endl;
                cout<<"B)<a>"<<endl;
                cout<<"C)<b>"<<endl;
                cout<<"D)<br>"<<endl; 

                choice = getch();

                if(choice == 'C' || choice == 'c')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is c\n"<<endl;
                }
                break;
            case 3:
                cout<<i+1<<")Which attribute specifies a unique alphanumeric identifier to be associated with an element?"<<endl;
                cout<<"A)class"<<endl;
                cout<<"B)id"<<endl;
                cout<<"C)article"<<endl;
                cout<<"D)html"<<endl; 

                choice = getch();

                if(choice == 'B' || choice == 'b')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is b\n"<<endl;
                }
                break; 
            case 4:
                cout<<i+1<<")Which attribute is used to provide an advisory text about an element or its contents?"<<endl;
                cout<<"A)tooltip"<<endl;
                cout<<"B)dir"<<endl;
                cout<<"C)title"<<endl;
                cout<<"D)head"<<endl; 

                choice = getch();

                if(choice == 'C' || choice == 'c')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is c\n"<<endl;
                }
                break; 
            case 5:
                cout<<i+1<<")Which attribute sets the text direction as related to the lang attribute ?"<<endl;
                cout<<"A)lang"<<endl;
                cout<<"B)sub"<<endl;
                cout<<"C)dir"<<endl;
                cout<<"D)ds"<<endl; 

                choice = getch();

                if(choice == 'C' || choice == 'c')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is c\n"<<endl;
                }
                break;   
            case 6:
                cout<<i+1<<")Which of the following is the attribute that is used to set a global identifier for a microdata item?"<<endl;
                cout<<"A)key"<<endl;
                cout<<"B)id"<<endl;
                cout<<"C)itemclass"<<endl;
                cout<<"D)itemid"<<endl; 

                choice = getch();

                if(choice == 'D' || choice == 'd')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is d\n"<<endl;
                }
                break;
            case 7:
                cout<<i+1<<")HTML is a subset of?"<<endl;
                cout<<"A)SGMD"<<endl;
                cout<<"B)SGML"<<endl;
                cout<<"C)SGMH"<<endl;
                cout<<"D)None of the above"<<endl; 

                choice = getch();

                if(choice == 'B' || choice == 'b')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is b\n"<<endl;
                }
                break;
            case 8:
                cout<<i+1<<")To create HTML page, you need?"<<endl;
                cout<<"A)Web browser"<<endl;
                cout<<"B)text editor"<<endl;
                cout<<"C)Both A and B"<<endl;
                cout<<"D)None of the above"<<endl; 

                choice = getch();

                if(choice == 'C' || choice == 'c')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is c\n"<<endl;
                }
                break;
            case 9:
                cout<<i+1<<")The BODY tag is usually used after ?"<<endl;
                cout<<"A)HTML tag"<<endl;
                cout<<"B)EM tag"<<endl;
                cout<<"C)TITLE tag"<<endl;
                cout<<"D)HEAD tag"<<endl; 

                choice = getch();

                if(choice == 'D' || choice == 'd')
                {
                    cout<<choice<<" is correct answer\n"<<endl;
                    st.marks++;
                }              
                else
                {
                    cout<<choice<<" is incorrect answer"<<endl;
                    cout<<"The correct answer is d\n"<<endl;
                }
                break; 
        }

        i++;
    }
}


void result()
{
    int per = 0;
    cout<<"\tStudent Name: "<<st.name<<endl<<endl;
    cout<<"\tRoll No. : "<<st.roll<<endl<<endl;
    cout<<"\tMarks: "<<st.marks<<" out of 10"<<endl<<endl;
    per = 100 * st.marks/10;
    cout<<"\tPercentage: "<<per<<"%"<<endl<<endl;
    
    if(per >= 50)
    {
        cout<<"\tStatus:  Pass"<<endl<<endl;
    }
    else
    {
        cout<<"\tStatus:  Fail"<<endl<<endl;
    }
}

main()
{
    char press,select;
    do
    {   
        system("CLS");
        cout<<"\n\n\t\t**********************"<<endl;
        cout<<"\n\n\t\t QUIZ SYSTEM"<<endl;
        cout<<"\n\n\t\t**********************"<<endl<<endl;
        cout<<"\t\tEnter Name: ";
        gets(st.name);
        cout<<"\t\tEnter Roll No.: ";
        gets(st.roll);
        system("CLS");
        cout<<"\t\tMarks less than 50% will be fail"<<endl<<endl;
        cout<<"\n\nSelect option which subject's quiz you want to perform"<<endl;
        cout<<"1) C++"<<endl;
        cout<<"2) Java"<<endl;
        cout<<"3) HTML"<<endl;
        select = getch();
        system("CLS");
        switch (select)
        {
            case '1':
                cout<<"\t\tC++ Quiz\n"<<endl;
                cpp();
                system("CLS");
                cout<<"\t\tC++ Quiz Result\n"<<endl;
                result();
                break;
            case '2':
                cout<<"\t\tJava Quiz\n"<<endl;
                java();
                system("CLS");
                cout<<"\t\tJava Quiz Result\n"<<endl;
                result();
                break;
            case '3':
                cout<<"\t\tHTML Quiz\n"<<endl;
                html();
                system("CLS");
                cout<<"\t\tHTML Quiz Result\n"<<endl;
                result();
                break; 
            default:
                cout<<"Invalid Choice, Please Enter valid choice!";
                break;
            }

        cout<<"\n\nPress Y to continue or any other key to terminate"<<endl;
        press = getch();
    }

    while(press == 'y' || press == 'Y');
}
