#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int bills[5] = {1,5,10,20,100};
    int minBills[n];
    int bal;
    int count = 0;
    for(int i=0;i<6;i++)
    {
    	cout<<bills[i]<<endl;
    }
    /*for(int i=0;i<n;i++)
    {
        cin>>bal;
        count = 0;
        for(int j=5;j>=0;j--)
        {
            count = count + (bal/bills[j]);
            bal = bal%bills[j];
        }
        minBills[i] = count;
    }
    for(int i=0;i<n;i++)
    {
        cout<<minBills[i]<<endl;
    }*/
    return 0;
}

