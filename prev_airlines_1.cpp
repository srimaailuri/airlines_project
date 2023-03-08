#include <stdio.h>
#include <iostream>
using namespace std;
static int del_hyd[20]={0};
static int del_mum[20]={0};
static int mum_hyd[20]={0};
static int del_goa[20]={0};
static int delhi_hyd;
static int delhi_mum;
static int mumb_hyd;
static int delhi_goa;
static int count_delhi_hyd;
static int count_delhi_mum;
static int count_mumb_hyd;
static int count_delhi_goa;

void book(){
    int flight_choice;
    int tickets;
    cout<<"Presently available flights are:"<<endl;
    cout<<"1.Delhi to Hyderabad"<<endl;
    cout<<"2.Delhi to Mumbai"<<endl;
    cout<<"3.Mumbai to Hyderabad"<<endl;
    cout<<"4.Delhi to goa"<<endl;
    cout<<"please enter flight choice:";
    cin>>flight_choice;
    switch(flight_choice){
        case 1:
        cout<<"please enter number of flight tickets:";
        cin>>tickets;
        if(tickets<=(20-count_delhi_hyd)){
            if(tickets<=20-delhi_hyd){
                int tickets_needed=delhi_hyd+tickets;
                while(delhi_hyd<tickets_needed){
                    del_hyd[delhi_hyd]=1;
                    cout<<delhi_hyd<<" is booked"<<endl;
                    count_delhi_hyd++;
                    delhi_hyd++;
                }
            }
            else{
                cout<<"random"<<endl;
                int tickets_booked=0;
                while(tickets_booked<=tickets){
                    if(delhi_hyd!=20){
                        del_hyd[delhi_hyd]=1;
                        cout<<delhi_hyd<<" is booked"<<endl;
                        count_delhi_hyd++;
                        delhi_hyd++;
                        tickets_booked++;
                    }
                    else{
                        while(tickets_booked<=tickets){
                            for(int i=0;i<20;i++){
                                if(del_hyd[i]==0){
                                    del_hyd[i]=1;
                                    cout<<i<<" is booked"<<endl;
                                    count_delhi_hyd++;
                                    tickets_booked++;
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            cout<<"sorry tickets are not available"<<endl;
        }
        break;
        
        case 2:
        cout<<"please enter number of flight tickets:";
        cin>>tickets;
        if(tickets<=(20-count_delhi_mum)){
            if(tickets<=20-delhi_mum){
                int tickets_needed=delhi_mum+tickets;
                while(delhi_mum<tickets_needed){
                    del_mum[delhi_mum]=1;
                    cout<<delhi_mum<<" is booked"<<endl;
                    count_delhi_mum++;
                    delhi_mum++;
                }
            }
            else{
                cout<<"random"<<endl;
                int tickets_booked=0;
                while(tickets_booked<=tickets){
                    if(delhi_mum!=20){
                        del_mum[delhi_mum]=1;
                        cout<<delhi_mum<<" is booked"<<endl;
                        count_delhi_mum++;
                        delhi_mum++;
                        tickets_booked++;
                    }
                    else{
                        while(tickets_booked<=tickets){
                            for(int i=0;i<20;i++){
                                if(del_mum[i]==0){
                                    del_mum[i]=1;
                                    cout<<i<<" is booked"<<endl;
                                    count_delhi_mum++;
                                    tickets_booked++;
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            cout<<"sorry tickets are not available"<<endl;
        }
        break;

        case 3:
        cout<<"please enter number of flight tickets:";
        cin>>tickets;
        if(tickets<=(20-count_mumb_hyd)){
            if(tickets<=20-mumb_hyd){
                int tickets_needed=mumb_hyd+tickets;
                while(mumb_hyd<tickets_needed){
                    mum_hyd[mumb_hyd]=1;
                    cout<<mumb_hyd<<" is booked"<<endl;
                    count_mumb_hyd++;
                    mumb_hyd++;
                }
            }
            else{
                cout<<"random"<<endl;
                int tickets_booked=0;
                while(tickets_booked<=tickets){
                    if(mumb_hyd!=20){
                        mum_hyd[mumb_hyd]=1;
                        cout<<mumb_hyd<<" is booked"<<endl;
                        count_mumb_hyd++;
                        mumb_hyd++;
                        tickets_booked++;
                    }
                    else{
                        while(tickets_booked<=tickets){
                            for(int i=0;i<20;i++){
                                if(mum_hyd[i]==0){
                                    mum_hyd[i]=1;
                                    cout<<i<<" is booked"<<endl;
                                    count_mumb_hyd++;
                                    tickets_booked++;
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            cout<<"sorry tickets are not available"<<endl;
        }
        break;

        case 4:
        cout<<"please enter number of flight tickets:";
        cin>>tickets;
        if(tickets<=(20-count_delhi_goa)){
            if(tickets<=20-delhi_goa){
                int tickets_needed=delhi_goa+tickets;
                while(delhi_goa<tickets_needed){
                    del_goa[delhi_goa]=1;
                    cout<<delhi_goa<<" is booked"<<endl;
                    count_delhi_goa++;
                    delhi_goa++;
                }
            }
            else{
                cout<<"random"<<endl;
                int tickets_booked=0;
                while(tickets_booked<=tickets){
                    if(delhi_goa!=20){
                        del_goa[delhi_goa]=1;
                        cout<<delhi_goa<<" is booked"<<endl;
                        count_delhi_goa++;
                        delhi_goa++;
                        tickets_booked++;
                    }
                    else{
                        while(tickets_booked<=tickets){
                            for(int i=0;i<20;i++){
                                if(del_goa[i]==0){
                                    del_goa[i]=1;
                                    cout<<i<<" is booked"<<endl;
                                    count_delhi_goa++;
                                    tickets_booked++;
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            cout<<"sorry tickets are not available"<<endl;
        }
        break;

    }
}

void cancel(){
    int ticket_number,flight_number;
    cout<<"please enter the number according to the flight name:"<<endl;
    cout<<"1.Delhi to Hyderabad"<<endl;
    cout<<"2.Delhi to Mumbai"<<endl;
    cout<<"3.Mumbai to Hyderabad"<<endl;
    cout<<"4.Delhi to goa"<<endl;
    cin>>flight_number;
    cout<<"please give your ticket number:"<<endl;
    cin>>ticket_number;
    switch(flight_number){
        case 1:
        if(ticket_number<0 or ticket_number>20 or del_hyd[ticket_number]==0){
            cout<<"please check your ticket number."<<endl;
        }
        else{
        del_hyd[ticket_number]=0;
        cout<<ticket_number<<"is cancelled"<<endl;
        count_delhi_hyd--;}
        break;
        case 2:
        if(ticket_number<0 or ticket_number>20 or del_mum[ticket_number]==0){
            cout<<"please check your ticket number."<<endl;
        }
        else{
        del_mum[ticket_number]=0;
        cout<<ticket_number<<"is cancelled"<<endl;
        count_delhi_mum--;}
        break;
        case 3:
        if(ticket_number<0 or ticket_number>20 or mum_hyd[ticket_number]==0){
            cout<<"please check your ticket number."<<endl;
        }
        else{
        mum_hyd[ticket_number]=0;
        cout<<ticket_number<<"is cancelled"<<endl;
        count_mumb_hyd--;}
        break;
        
        case 4:
        if(ticket_number<0 or ticket_number>20 or del_goa[ticket_number]==0){
            cout<<"please check your ticket number."<<endl;
        }
        else{
        del_goa[ticket_number]=0;
        cout<<ticket_number<<"is cancelled"<<endl;
        count_delhi_goa--;}
        break;
        default:
        cout<<"please check your flight number."<<endl;
    }
    
}

void view_status(){
    int option;
    cout<<"please enter the flight number you want to see status:"<<endl;
    cout<<"1.Delhi to Hyderabad"<<endl;
    cout<<"2.Delhi to Mumbai"<<endl;
    cout<<"3.Mumbai to Hyderabad"<<endl;
    cout<<"4.Delhi to goa"<<endl;
    cin>>option;
    switch(option){
        case 1:
        cout<<"available seats :"<<20-count_delhi_hyd<<endl;
        cout<<"seat numbers available :";
        for (int i=0;i<20;i++){
            if(del_hyd[i]==0){
                cout<<i<<" ";
            }
        }
        break;

        case 2:
        cout<<"available seats :"<<20-count_delhi_mum<<endl;
        cout<<"seat numbers available :";
        for (int i=0;i<20;i++){
            if(del_mum[i]==0){
                cout<<i<<" ";
            }
        }
        break;

        case 3:
        cout<<"available seats :"<<20-count_mumb_hyd<<endl;
        cout<<"seat numbers available :";
        for (int i=0;i<20;i++){
            if(mum_hyd[i]==0){
                cout<<i<<" ";
            }
        }
        break;

        case 4:
        cout<<"available seats :"<<20-count_delhi_goa<<endl;
        cout<<"seat numbers available :";
        for (int i=0;i<20;i++){
            if(del_goa[i]==0){
                cout<<i<<" ";
            }
        }
        break;
        
    }

}

void choice(){
    int choice;
    do{
    cout<<"please enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        book();
        break;

        case 2:
        cancel();
        break;

        case 3:
        view_status();
        break;

        case 4:
        exit (0);

        default:
        cout<<"please enter a valid choice"<<endl;

    }}
        while(1);

}

int main(){
    cout<<"welcome to Indian Airways"<<endl;
    cout<<"1.Book\n2.cancel\n3.view details\n4.Exit\n"<<endl;
    choice();
    return 0;
}