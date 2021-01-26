#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct teachers{
    string name;
};

struct courses{
    string name;
};

struct service{
    int day;
    int hour;
    int cindex;
};

int main()
{
    int day, hour, cname;
    struct teachers tn[100];
    struct courses cn[100];
    struct service ser[100];
    /*assigning the default value*/
    tn[0].name = "John Smith";
    tn[1].name = "Lara Gilbert";
    tn[2].name = "Johanna Kabir";
    tn[3].name = "Danniel Robertson";
    tn[4].name = "Larry Cooper";

    cn[0].name = "English Grammar";
    cn[1].name = "Mathematics";
    cn[2].name = "Physics";
    cn[3].name = "Chemistry";
    cn[4].name = "Biology";

    while(1)
    {
        cout<<"A. Create Routine"<<endl;
        cout<<"B. Show Routine"<<endl;
        cout<<"C. List Courses with Teachers Name\n"<<endl;

        char ch;
        cin>>ch;

        if(ch=='A')
        {
            cout<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<i+1<<". "<<cn[i].name<<endl;
            }
            cout<<endl;
            for(int i=0;i<4;i++)
            {
                cin>>ser[i].day>>ser[i].hour>>ser[i].cindex;
            }
            cout<<endl;
        }
        else if(ch=='B')
        {
            cout<<endl;
            for(int i=0;i<4;i++)
            {
                cout<<ser[i].day<<" "<<ser[i].hour<<" "<<cn[ser[i].cindex].name<<endl;
            }
            cout<<endl;
        }
        else if(ch=='C')
        {
            cout<<endl;
            for(int i=0;i<5;i++)
            {
                cout<<cn[i].name<<","<<tn[i].name<<endl;
            }
            cout<<endl;
        }
    }
}
