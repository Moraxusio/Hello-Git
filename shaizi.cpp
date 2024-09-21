#include <iostream>
using namespace std;
int main ()
{
    int seed;
    cout<<"input the seed:"<<endl;
    cin>>seed;
    srand(seed);
    int key=0;
    int out1=0;
    int out2=0;
    int key2=0;
    int rs=0;
    while(key==0)
    {
        out1=rand()%6+1;
        out2=rand()%6+1;
        cout<<"out1:"<<out1<<endl<<"out2:"<<out2;
        if (out1+out2==7 && key2>0)
        {
            key=1;
            cout<<endl<<"you lose";
        }
        else if (rs==out1+out2 && key2>0)
        {
            key=1;
            cout<<endl<<"win";
        }

        if(((out1+out2)==11 || (out1+out2)==7) && key2==0)
        {
            key=1;
            cout<<endl<<"win";
            
        }
        else if (((out1+out2)==2 or(out1+out2)==3 or(out1+out2)==12) and key2==0)
        {
            key=1;
            cout<<endl<<"you lose";
        }
        key2++;
        rs=out1+out2;
        
        cin.get();
        cin.get();
        

    }


    cin.get();
    return 0;
}