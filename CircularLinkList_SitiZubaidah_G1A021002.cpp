// Circular Link List
// Siti Zubaidah
// G1A021002

#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};

struct node * start=NULL;

int main(){
node *temp,*t,*ptr;
int pos,i=0,pilihan=0;
while(pilihan<=7){
    cout<<"tekan 1 untuk masukkan dari awal"<<endl;
    cout<<"tekan 2 untuk masukkan dari akhir"<<endl;
    cout<<"tekan 3 untuk masukkan di posisi manapun"<<endl;
    cout<<"tekan 4 untuk delete dari akhir"<<endl;
    cout<<"tekan 5 untuk delete dari awal"<<endl;
    cout<<"tekan 6 untuk delete dari di posisi manapun"<<endl;
    cout<<"tekan 7 untuk display"<<endl;
    cout<<"tekan 0 untuk exit"<<endl;
    cin>>pilihan;
    temp=new node();

    if(pilihan==1){
    cout<<"masukkan angka"<<endl;
    cin>>temp->data;

        if(start==NULL){
            start=temp;
            temp->next=start;

               }
            else{
                t=start;
                while(t->next!=start){
                t=t->next;
                }
                temp->next=start;
                start=temp;
                t->next=start;}
        }
    if(pilihan==2){
    cout<<"masukkan angka"<<endl;
    cin>>temp->data;
        if(start==NULL){
            start=temp;
           temp->next=start;
            }
    else{
        t= start;
        while(t->next!=start){
            t=t->next;
        }

        t->next=temp;
        temp->next=start;
    }
    }
    if(pilihan==3){
    cout<<"masukkan angka"<<endl;
    cin>>temp->data;
    cout<<"masukkan posisi"<<endl;
    cin>>pos;
            if(pos==1){
                if(start==NULL){
            start=temp;
           temp->next=start;
            }
            else{
            t=start;
                while(t->next!=start){
                t=t->next;
                }
                temp->next=start;
                start=temp;
                t->next=start;
            }
            }
            else if(pos>1){
            t=start;
            while(i<pos){
                ptr=t;
                t=t->next;
                i++;
            }
            ptr->next=temp;
            temp->next=t;

            }
    }
    if(pilihan==4){
        if(start==NULL)
            cout<<"kosong";
        else{
            t=start;
            while(t->next!=start){
            ptr=t;
            t=t->next;}
            ptr->next=start;
        }
    }

     if(pilihan==5){
        if(start==NULL)
            cout<<"kosong";
        else{
         t=start;
           while(t->next!=start){
            t=t->next;
            }
          start=start->next;
          t->next=start;

            }
        }
    if(pilihan==7){
        t=start;
        temp=start;
      while(t->next!=start){
            cout<<t->data<<" ";
            t=t->next;
        }//cout<<t->data<<" ";
        cout<<start->data<<endl;

    }
    }
}