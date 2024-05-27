#include<iostream>
using namespace std;
int main()
{
    float percentage[]={87.31,53.31,49.13,81.38,97.34};
    int p=0;
    //*********** display marks with using for loop********
    
    // for(p=0;p<5;p++)
    // {
    //     cout<<"the final percentage of mca firstsemester is "<<percentage[p]<<endl;

    // }
    // while(p<5)
    // {
    //     cout<<"the first semester percentage of mca students is "<<percentage[p]<<endl;
    //     p++;
    // }
    // return 0;
    //using do while loop
    do
    {
        cout<<percentage[p]<<endl;
        p++;
        
    } while(p<5);
    return 0;
 
}