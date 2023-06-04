#include <bits/stdc++.h>
using namespace std;



void print7(int n)
{
    for(int i=0; i<n; i++)
    {
        //space  - n-i-1
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        //star - 2*i+1
        for(int j=0; j<2*i+1; j++)
        {
            cout << "*";
        }

        //space - n-i-1
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void print8(int n)
{
    for(int i=0; i<=n; i++)
    {
        //space
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }

        //star  - (2*n)-(2*i+1)
        for(int j=0; j<((2*n)-(2*i+1)); j++)
        {
            cout << "*";
        }

        //space
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }


    // Another way    star = (2*n)-(2*i-1)  only when i & j = 1


    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=n*2-(2*i-1);j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(int j=1;j<i;j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
	// }
}

void print9(int n)
{

    // Upper triangle code
    for(int i=0; i<n; i++)
    {
        //space  - n-i-1
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        //star - 2*i+1
        for(int j=0; j<2*i+1; j++)
        {
            cout << "*";
        }

        //space - n-i-1
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    // Lower triangle code
    for(int i=0; i<=n; i++)
    {
        //space
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }

        //star  - (2*n)-(2*i+1)
        for(int j=0; j<((2*n)-(2*i+1)); j++)
        {
            cout << "*";
        }

        //space
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


void print10(int n)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int stars = i;
        if(i > n)  stars = 2*n - i;
        for(int j=1; j<=stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter any number - ";
    cin>>n; 
    // print7(n);
    print10(n);
    
    return 0;
}