//Author:Pedro V Ojeda
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> glist;
        string items;
        char input;
        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;

                if ( input == 'A' || input == 'a' )
                { 
                        cout<<"What is the item?\n";
                        cin>> items;
                        glist.push_back(items);
                }
        }while (!( input == 'Q' || input == 'q' ));

        if (glist.size()>0)
        {
                for (int j=0; j < glist.size(); j++)
                {
                        cout<<j+1<<" "<<glist.at(j)<<endl;
                }
        }
        else
        {
                cout<<"No items to buy!\n";
        }
        return 0;
}
