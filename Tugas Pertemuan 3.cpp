#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;
 void setcolor(unsigned short color) {               //Penambahan prototype fungsi ini bertujuan supaya,
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);   //variabel setcolor tersebut bisa dipanggil sebanyak yang kita inginkan.
    SetConsoleTextAttribute(hCon,color);             //Jadi intinya, dengan penggunaan prototype fungsi ini,
    }                                                //kita bisa memilih teks mana saja yang akan kita rubah warnanya.
                                                     //Setelah membuat prototype fungsi tersebut, kita tinggal mengetik perintah setcolor();
                                                     //pada bagian teks yang ingin kita rubah warnanya.


int main()
{
    int nq,nm,nf;
    char nama[20],kel[5],no[5],Grade;
    float na;

    cout << "Nomor Induk Siswa\t: ";
    gets(no);
    cout << "Nama Siswa\t\t: ";
    gets(nama);
    cout << "Kelas\t\t\t: "; cin>>kel;
    cout << "Nilai Quis\t\t: "; cin>>nq;
    cout << "Nilai MID\t\t: "; cin>>nm;
    cout << "Nilai Final\t\t: "; cin>>nf;
 //process
    na=(2*nq+3*nm+5*nf)/10;

 if(na >= 80 && na <= 100){
        Grade = 'A';
    }else if(na >= 70 && na <=79){
        Grade = 'B';
    }else if(na >= 60 && na <=69){
        Grade = 'C';
    }else if(na >=50 && na <= 59){
        Grade = 'D';
    }else {
        Grade = 'E';
    }

    //output
    cout<<"\n======================================\n";
    cout<<"Nama Siswa\t\t: " <<nama<< endl;
    cout<<"Kelas\t\t\t: " <<kel<< endl;
    setcolor(12);
    //printf("Nilai Akhir\t\t: ", na);
    cout<<"Nilai Akhir\t\t: " <<na<< endl;
    setcolor(12);
    cout<<"Nilai Grade\t\t: " <<Grade<<endl;

	setcolor(7);
    getch();
    return 0;
}
