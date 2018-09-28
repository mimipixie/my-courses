#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<conio.h>
using namespace std;

int O,I,J,EX;

void UserInput()
{
    cout<<"\n\tPress Any Key To Continue...";
    getch();
}
void Time_Slot_Details(int x)
{
    switch(x)
    {
    case 1:
    {
        cout<<"1. 08:00am-09:20am";
        break;
    }
    case 2:
    {
        cout<<"2. 09:30am-10:50am";
        break;
    }
    case 3:
    {
        cout<<"3. 11:00am-12:20pm";
        break;
    }
    case 4:
    {
        cout<<"4. 12:30pm-01:50pm";
        break;
    }
    case 5:
    {
        cout<<"5. 02:00pm-03:20pm";
        break;
    }
    case 6:
    {
        cout<<"6. 03:30pm-04:50pm";
        break;
    }
    case 7:
    {
        cout<<"7. 05:00pm-06:20pm";
        break;
    }
    case 8:
    {
        cout<<"8. 06:30pm-07:50pm";
        break;
    }
    case 9:
    {
        cout<<"9. 08:00pm-09:20pm";
        break;
    }
    }
}

class Data
{
public:
    string C,D;
    int S,T,R;
};

Data X;
vector<Data> ES;

class Exam_Schedule
{
protected:
    string Course,Day;
    int Section,Timeslot,Room;
public:
    void input()
    {
        system("CLS");
        cout<<"\t.:Create New Exam Schedule:.\n";
        cout<<"\nEnter Course Code (Example :CSE107):\n";
        cin>>Course;
        cout<<"\nEnter Section Number:\n";
        cin>>Section;
        cout<<"\nEnter Day (SUN/MON/TUE/WED/THU):\n";
        while(cin>>Day)
        {
            if(Day=="SUN" || Day=="MON" || Day=="TUE" || Day=="WED" || Day=="THU")
            {
                break;
            }
            else
            {
                cout<<"\nOnly Allowed Day Names are\n\tSUN\tMON\tTUE\tWED\tTHU\n\nPlease Enter Correct Day:\n";
            }
        }
        cout<<"\n\tTime Slot Numbers:\n";
        for(int i=1; i<=9; i++)
        {
            Time_Slot_Details(i);
            cout<<"\n";
        }
        cout<<"\nEnter Time Slot Number:\n";
        while(cin>>Timeslot)
        {
            I=0;
            for(int i=0; i<ES.size(); i++)
            {
                if(Timeslot==ES[i].T&& ES[i].D==Day&& ES[i].C=="Empty")
                {
                    I++;
                }
            }
            if(I==0)
            {
                cout<<"\n\tThis Time Slot is Full.\n\nPlease Enter Another Time Slot Number:\n";
            }
            else if(I>=1)
            {
                break;
            }
        }
        cout<<"\n\tAvailable Room Numbers:\n";
        vector<int> AV;
        for(int i=0; i<ES.size(); i++)
            {
                if(Timeslot==ES[i].T && ES[i].D==Day)
                {
                    if(ES[i].C=="Empty")
                    {
                        cout<<ES[i].R<<endl;
                        AV.push_back(ES[i].R);

                    }
                }
            }

        cout<<"\nEnter Room Number:\n";
        while(cin>>Room)
        {
            I=0;
            for(int i=0; i<AV.size(); i++)
            {
                if(Room==AV[i])
                {
                    I=1;
                    break;
                }
            }
            if(I==1)
            {
                break;
            }
            else
            {
                cout<<"\n\tThis Room does not Exist or is Already Booked.\n\nPlease Enter Another Room Number:\n";
            }
        }
        cout<<"\n\tPlease Check your Schedule:\n";
        cout<<"Course Name\t: "<<Course<<"\n";
        cout<<"Section Number\t: "<<Section<<"\n";
        cout<<"Day\t\t: "<<Day<<"\n";
        cout<<"Time Slot\t: ";
        Time_Slot_Details(Timeslot);
        cout<<"\n";
        cout<<"Room Number\t: "<<Room<<"\n";
        cout<<"\nPress 1 to Reserve this Exam Schedule \nOr Press 0 if you don't want to Reserve this Exam Schedule\n";
        int ans;
        cin>>ans;
        if(ans==1)
        {
            X.C=Course;
            X.T=Timeslot;
            X.D=Day;
            X.S=Section;
            X.R=Room;
            for(int i=0; i<ES.size(); i++)
            {
                if(ES[i].T==X.T && ES[i].R==X.R && ES[i].D==X.D)
                {
                    J=i;
                    break;
                }
            }
            ES[J]=X;
            cout<<"\n\tThis Exam Schedule was Reserved Successfully.\n";
        }
        else
        {
            cout<<"\n\tThis Exam Schedule was not Reserved.\n";
        }
        UserInput();
    }
    void output()
    {
        EX=0;
        while(EX==0)
        {
            system("CLS");
            cout<<"\n\t.:Viewer:.\nPlease Enter Option Number\n1. Filter Course Code\n2. Filter Day\n3. Filter Time Slot Number\n4. Filter Room Number\n5. Show all\n6. Exit Viewer\n";
            cout<<"\nOption Number: ";
            cin>>O;
            switch(O)
            {
            case 1:
            {
                system("CLS");
                cout<<"\n\t.:Filter Course Code:.\n";
                cout<<"Enter Course Code (Example :CSE107):\n";
                I=0;
                while(cin>>Course)
                {
                    for(int i=0; i<ES.size(); i++)
                    {
                        if(Course==ES[i].C)
                        {
                            cout<<ES[i].C<<"\t";
                            cout<<ES[i].S<<"\t";
                            cout<<ES[i].D<<"\t";
                            Time_Slot_Details(ES[i].T);
                            cout<<"\t";
                            cout<<ES[i].R<<"\n";
                            I++;
                        }
                    }
                    if(I==0)
                    {
                        cout<<"\n\tCourse Code Does not Exist\n\nPlease Enter Correct Course Code:\n";
                    }
                    else if(I>=1)
                    {
                        break;
                    }
                }
                UserInput();
                break;
            }
            case 2:
            {
                system("CLS");
                cout<<"\n\t.:Filter Day:.\n";
                cout<<"Enter Day (SUN/MON/TUE/WED/THU):\n";
                while(cin>>Day)
                {
                    I=0;
                    J=0;
                    for(int i=0; i<ES.size(); i++)
                    {
                        if(Day=="SUN" || Day=="MON" || Day=="TUE" || Day=="WED" || Day=="THU")
                        {
                            if(Day==ES[i].D && ES[i].C!="Empty")
                            {
                                cout<<ES[i].C<<"\t";
                                cout<<ES[i].S<<"\t";
                                cout<<ES[i].D<<"\t";
                                Time_Slot_Details(ES[i].T);
                                cout<<"\t";
                                cout<<ES[i].R<<"\n";
                                I++;
                            }
                        }
                        else
                        {
                            J++;
                            break;
                        }
                    }
                    if(J>=1)
                    {
                        cout<<"\nOnly Allowed Day Names are\n\tSUN\tMON\tTUE\tWED\tTHU\n\nPlease Enter Correct Day:\n";
                    }
                    else if(I==0)
                    {
                        cout<<"\n\tNo Schedule Was Reserved For This Day\n";
                        break;
                    }
                    else if(I>=1)
                    {
                        break;
                    }
                }
                UserInput();
                break;
            }
            case 3:
            {
                system("CLS");
                cout<<"\n\t.:Filter Time slot Number:.\n";
                cout<<"\n\tTime Slot Numbers:\n";
                for(int i=1; i<=9; i++)
                {
                    Time_Slot_Details(i);
                    cout<<"\n";
                }
                cout<<"\nEnter Time Slot Number:\n";
                while(cin>>Timeslot)
                {
                    I=0;
                    J=0;
                    for(int i=0; i<ES.size(); i++)
                    {
                        if(Timeslot==1||Timeslot==2||Timeslot==3||Timeslot==4||Timeslot==5||Timeslot==6||Timeslot==7||Timeslot==8||Timeslot==9)
                        {
                            if(Timeslot==ES[i].T&& ES[i].C!="Empty")
                            {
                                cout<<ES[i].C<<"\t";
                                cout<<ES[i].S<<"\t";
                                cout<<ES[i].D<<"\t";
                                Time_Slot_Details(ES[i].T);
                                cout<<"\t";
                                cout<<ES[i].R<<"\n";
                                I++;
                            }
                        }
                        else
                        {
                            J++;
                            break;
                        }
                    }
                    if(J>=1)
                    {
                        cout<<"\n\tInvalid Time Slot Number.\n\nPlease Enter Correct Time Slot Number (1 to 9):\n";
                    }
                    else if(I==0)
                    {
                        cout<<"\n\tNo Schedule Was Reserved For This Time Slot\n";
                        break;
                    }
                    else if(I>=1)
                    {
                        break;
                    }
                }
                UserInput();
                break;
            }
            case 4:
            {
                system("CLS");
                cout<<"\n\t.:Filter Room Number:.\n";
                cout<<"Enter Room Number:\n";
                while(cin>>Room)
                {
                    I=0;
                    J=0;
                    for(int i=0; i<ES.size(); i++)
                    {
                        if(Room==ES[i].R)
                        {
                            if(ES[i].C!="Empty")
                            {
                                cout<<ES[i].C<<"\t";
                                cout<<ES[i].S<<"\t";
                                cout<<ES[i].D<<"\t";
                                Time_Slot_Details(ES[i].T);
                                cout<<"\t";
                                cout<<ES[i].R<<"\n";
                                I++;
                            }
                            J++;
                        }
                    }
                    if(J==0)
                    {
                        cout<<"\n\tRoom Number Does not Exist.\n\nPlease Enter Correct Room Number:\n";
                    }
                    else if(I==0)
                    {
                        cout<<"\n\tNo Schedule Was Reserved For This Room Number\n";
                        break;
                    }
                    else if(I>=1)
                    {
                        break;
                    }
                }
                UserInput();
                break;
            }
            case 5:
            {
                system("CLS");
                cout<<"\n\t.:All Exam Schedules:.\n";
                I=0;
                J=0;
                for(int i=0; i<ES.size(); i++)
                {
                    if(ES[i].C!="Empty")
                    {
                        cout<<ES[i].C<<"\t";
                        cout<<ES[i].S<<"\t";
                        cout<<ES[i].D<<"\t";
                        Time_Slot_Details(ES[i].T);
                        cout<<"\t";
                        cout<<ES[i].R<<"\n";
                        I++;
                    }
                    J++;
                }
                if(J==0)
                {
                    cout<<"\n\tNo Rooms are Added Yet.\n";
                }
                else if(I==0)
                {
                    cout<<"\n\tNo Schedules Were Reserved\n";
                }
                UserInput();
                break;
            }
            case 6:
            {
                EX=1;
                break;
            }
            }
        }
    }
    void admin()
    {
        string pass="";
        char ch;
        system("CLS");
        cout<<"Enter password: ";
        ch=_getch();
        while(ch!=13)
        {
            pass.push_back(ch);
            cout<<'*';
            ch=_getch();
        }
        if(pass=="Healer107")
        {
            EX=0;
            while(EX==0)
            {
                system("CLS");
                cout<<"\n\t.:Admin Panel:.\nPlease Enter Option Number\n1. Create New Room\n2. Remove Existing Exam Schedule\n3. Exit Admin Panel\n";
                cout<<"\nOption Number: ";
                cin>>O;
                switch(O)
                {
                case 1:
                {
                    system("CLS");
                    cout<<"\n\t.:Create New Room:.\n";
                    cout<<"Enter New Room Number:\n";
                    while(cin>>Room)
                    {
                        I=0;
                        for(int i=0; i<ES.size(); i++)
                        {
                            if(Room==ES[i].R)
                            {
                                I++;
                            }
                        }
                        if(I>0)
                        {
                            cout<<"\nRoom Number Already Exists.\n\nPlease Enter Another New Room Number:\n";
                        }
                        else
                        {
                            break;
                        }
                    }
                    X.C="Empty";
                    X.S=0;
                    X.R=Room;

                    Day="SUN";
                    for(int i=1; i<=9; i++)
                    {
                        X.D=Day;
                        X.T=i;
                        ES.push_back(X);
                    }
                    Day="MON";
                    for(int i=1; i<=9; i++)
                    {
                        X.D=Day;
                        X.T=i;
                        ES.push_back(X);
                    }
                    Day="TUE";
                    for(int i=1; i<=9; i++)
                    {
                        X.D=Day;
                        X.T=i;
                        ES.push_back(X);
                    }
                    Day="WED";
                    for(int i=1; i<=9; i++)
                    {
                        X.D=Day;
                        X.T=i;
                        ES.push_back(X);
                    }
                    Day="THU";
                    for(int i=1; i<=9; i++)
                    {
                        X.D=Day;
                        X.T=i;
                        ES.push_back(X);
                    }
                    cout<<"\nRoom Successfully Created\n";
                    UserInput();
                    break;
                }
                case 2:
                {
                    I=0;
                    cout<<"\n\t.:Remove Existing Exam Schedule:.\n";
                    cout<<"\nPlease Input Course Code, Section Number, Day, Timeslot Number, Room Number:\n";
                    cin>>Course>>Section>>Day>>Timeslot>>Room;
                    for(int i=0; i<ES.size(); i++)
                    {
                        if(Course==ES[i].C&&Section==ES[i].S&&Day==ES[i].D&&Timeslot==ES[i].T&&Room==ES[i].R)
                        {
                            ES[i].C="Empty";
                            I++;
                        }
                    }
                    if(I==0)
                    {
                        cout<<"\nIncorrect Information\n";
                    }
                    else
                    {
                        cout<<"\nSuccessfully Removed this Schedule\n";
                    }
                    UserInput();
                    break;
                }
                case 3:
                {
                    EX=1;
                    break;
                }
                }
            }
        }
        else
        {
            cout<<"\n\n\tAccess Denied\n";
            UserInput();
        }
    }
};

int main()
{
    Exam_Schedule Exam;
    fstream iES("Exam Schedule.txt",ios::in);
    iES.seekg(0);
    while(iES>>X.C>>X.D>>X.S>>X.T>>X.R)
    {
        ES.push_back(X);
    }
    iES.close();

    while(1)
    {
        system("CLS");
        cout<<"\n\t.:Exam Schedule:.\nPlease Enter Option Number\n1. Create New Exam Schedule\n2. View Existing Exam Schedule\n3. Admin Panel\n4. Exit Exam Schedule\n";
        cout<<"\nOption Number: ";
        cin>>O;
        switch(O)
        {
        case 1:
        {
            Exam.input();
            break;
        }
        case 2:
        {
            Exam.output();
            break;
        }
        case 3:
        {
            Exam.admin();
            break;
        }
        case 4:
        {
            fstream oES("Exam Schedule.txt",ios::out);
            oES.seekp(0);
            for(int i=0; i<ES.size(); i++)
            {
                oES<<ES[i].C<<"\t"<<ES[i].D<<"\t"<<ES[i].S<<"\t"<<ES[i].T<<"\t"<<ES[i].R<<"\t";
            }
            oES.close();
            exit(0);
        }
        }
    }
}

