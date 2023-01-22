#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;
int coinToss()
{
    int randomNumber;
    randomNumber=1+rand()%2;
    return randomNumber;
}
int main()
{
    int numberOfTimes;
    string result="";
    cout<<"Enter the number of times to toss the coin:"<<endl;
    cin>>numberOfTimes;
    srand(time(0));
    for(int i=0;i<numberOfTimes;i++)
    {
        if(coinToss()==1) result="Heads";
        else result="Tails";
        cout<<result<<endl;
    }
    return 0;
}