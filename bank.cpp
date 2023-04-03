#include<iostream>
using  namespace std;
class account
{   
 
    int acc_no;
    int balance;
    int wdraw;
    int menu;
    int f;
    string s;
    public:
    account()
    {
        acc_no=1234;
        balance=0;
        wdraw=0;
        s="dinesh pal";

    }
    void diposit(int num)
    {
    
     if (num == acc_no)
     {
       
        cout<<"hello mr."<<s<<endl;
        cout<<"enter the amount you want to deposit:";
        cin>>balance;
        cout<<"succesfully deposit your money";

      }
        else
     
        cout<<"\n incorect account number";

     
    }
    void display (int num)
    {
            
        if(num == acc_no)
        {
            cout<<"curent balance in your account is :"<<balance;

        }
        else 
        
            cout <<"incorrect account number";
        

    }
    
    
        void withdraw(int num)
        {
            if(num == acc_no)
            {
                cout<<"\ncan you withdraw your money:";
                cout<<"\n press 1 to withdraw your money.";
                cout<<"\n press 0 to exit.";
                cout<<"\n => ";
                cin>> f;
                

                if(f==1)
                {
                    cout <<"\nenter the amount to withdraw:";
                    cin>>wdraw;
                    if(balance>=wdraw)
                     {  
                        cout<<"\n transaction was succesfull"<<endl;
                        balance-=wdraw;
                        }
                    else{
                    cout<<"insufficient balance.";
                       }
                }
               else if(f==0)
                {
                    cout<<"thanks for diposit our bank\n ";
                }
            }
            else
            
         cout<<"\n incorrect account number";
        }   

};           

 
        int main()
        {
            account acc;
            int num;
           
            cout<<"enter the account number:";
            cin>>num;
            acc.diposit(num);
            acc.withdraw(num);
            acc.display(num);
            cout<<endl;

            return 0;

        }

       
   


