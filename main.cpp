#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string answer;
    cout<<"Did you want to create new account? (yes or no)";cin>>answer;
    if (answer=="yes")
    {
        string login,password;
        cout<<"Welcome in registration!"<<endl;
        cout<<"login:";cin>>login;
        cout<<"password:";cin>>password;

        ofstream write_file;
        write_file.open("data.txt");
        if (write_file.is_open())
        {
            write_file<<login<<endl;
            write_file<<password<<endl;
            write_file.close();
        }
        else cout<<"File can't open";

        ifstream read_file;
        read_file.open("data.txt");
        if (read_file.is_open())
        {
            string line;
            int line_number=1;
            while(getline(read_file,line))
            {
                switch(line_number)
                {
                    case 1:login=line; break;
                    case 2:password=line; break;
                }
                line_number++;
            }
            read_file.close();
        }
        else cout<<"File can't open";

        string login2,password2;

        cout<<"Welcome to the login panel!"<<endl;
        cout<<"login:"; cin>>login2;
        cout<<"password:"; cin>>password2;

        for(int i=0; i<=3; i++)
        {
            if ((login2==login)&&(password2==password))
            {
                cout<<"Correct login and password";
                return 0;
            }
            cout<<"Wrong login and password"<<endl;
            cout<<"login:";cin>>login2;
            cout<<"password:";cin>>password2;
            i=i+1;
        }
        cout<<"You've written wrong login and password 3 times. No entrace!";
        return 1;
    }
    if (answer=="no")
    {
        string login2,password2,login,password;

        cout<<"Welcome to the login panel!"<<endl;
        cout<<"login:"; cin>>login2;
        cout<<"password:"; cin>>password2;

        ifstream read_file;
        read_file.open("data.txt");
        if (read_file.is_open())
        {
            string line;
            int line_number=1;
            while(getline(read_file,line))
            {
                switch(line_number)
                {
                    case 1:login=line; break;
                    case 2:password=line; break;
                }
                line_number++;
            }
            read_file.close();
        }
        else cout<<"File can't open";

        for(int i=0; i<=3; i++)
        {
            if ((login2==login)&&(password2==password))
            {
                cout<<"Correct login and password";
                return 0;
            }
            cout<<"Wrong login and password"<<endl;
            cout<<"login:";cin>>login2;
            cout<<"password:";cin>>password2;
            i=i+1;
        }
        cout<<"You've written wrong login and password 3 times. No entrace!";
        return 1;
    }
    if (answer!="yes"||"no")
    {
        cout<<"WTF?! Please retry"<<endl;
        cout<<"Did you want to create new account? (yes or no)";cin>>answer;
    }
    string login,password;
    cout<<"Welcome in registration!"<<endl;
    cout<<"login:";cin>>login;
    cout<<"password:";cin>>password;

    ofstream write_file;
    write_file.open("data.txt");
    if (write_file.is_open())
    {
        write_file<<login<<endl;
        write_file<<password<<endl;
        write_file.close();
    }
    else cout<<"File can't open";

    ifstream read_file;
    read_file.open("data.txt");
    if (read_file.is_open())
    {
        string line;
        int line_number=1;
        while(getline(read_file,line))
        {
            switch(line_number)
            {
                case 1:login=line; break;
                case 2:password=line; break;
            }
            line_number++;
        }
        read_file.close();
    }
    else cout<<"File can't open";

    string login2,password2;

    cout<<"Welcome to the login panel!"<<endl;
    cout<<"login:"; cin>>login2;
    cout<<"password:"; cin>>password2;

    for(int i=0; i<=3; i++)
    {
        if ((login2==login)&&(password2==password))
        {
            cout<<"Correct login and password";
            return 0;
        }
        cout<<"Wrong login and password"<<endl;
        cout<<"login:";cin>>login2;
        cout<<"password:";cin>>password2;
        i=i+1;
    }
    cout<<"You've written wrong login and password 3 times. No entrace!";
    return 1;
}