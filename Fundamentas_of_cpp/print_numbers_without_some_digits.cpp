#include <iostream>
#include<cmath>
#include<string>

using namespace std;
int main() {
    string def_program = "This program takes a degree from 0 - 999 and returns the closest degree that doesn't have 1,4 & 7 in its digit";
    cout<<def_program<<"\n\n";
    cout<<"Consider this as a replica of the keypad on your oven: "<<endl;
    cout<<"1 \t2 \t3 \n4\t5\t6\n7\t8\t9\t \n\t0"<<endl;
    program:
   int temperature;
   cout<<"Enter temperature\t";
   cin >> temperature;
   int dummy_temp = temperature;
   int ans[2];
   
   for(int i = 2; i>=0; i--){
       
       int dig = dummy_temp /pow(10,i); 
       if ((dig == 1) || (dig == 4) || (dig == 7)){
           ans[0] = (int(temperature / pow(10,i)))*pow(10,i) + pow(10,i);
           ans[1] = (int(temperature / pow(10,i)))*pow(10,i) - 1;
           cout<<ans[0]<<" "<<ans[1];
           goto close_program;
       }
       dummy_temp -= dig*pow(10,i);
   }
    cout<<temperature;
    char choice;
    close_program:
    cout<<"\nDo You Want to Exit (y/n)\t";
    cin>>choice;
    if(choice != 'Y' && choice != 'y')
    goto program;
    return 0;
} 
