#include <iostream>

/* Writing a C++ program to solve a system of linear equations using Gaussian elimination.
The program should prompt the user for the number of equations and variables in the
system, and then allow the user to input the coefficients and constants of the equations.
The program should then solve the system and print out the solutions. */  


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number of equations: ";
    cin>>n;

    double a[10][11];

    cout<<"Enter coefficients and constants:"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
            cin>>a[i][j];
    }


    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            double ratio=a[k][i]/a[i][i];

            for(int j=0;j<=n;j++)
                a[k][j]-=ratio*a[i][j];
        }
    }


    double x[10];

    for(int i=n-1;i>=0;i--)
    {
        x[i]=a[i][n];

        for(int j=i+1;j<n;j++)
            x[i]-=a[i][j]*x[j];

        x[i]/=a[i][i];
    }


    for(int i=0;i<n;i++)
        cout<<"x"<<i+1<<" = "<<x[i]<<endl;


    return 0;
}
