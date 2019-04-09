#include <iostream.h>
#include <conio.h>

main(){
int nk, nt1, nt2, nt3, nm, nq, nf, d, c, y, a, k, tnt, NA;
char nama [30], jurusan [30];
cout<<" nama mahasiswa : "; cin>>nama;
cout<<" jurusan : "; cin>>jurusan;
cout<<" Nilai kehadiran : "; cin>>nk;
cout<<" Nilai tugas 1 : "; cin>>nt1;
cout<<" Nilai tugas 2 : "; cin>>nt2;
cout<<" Nilai tugas 3 : "; cin>>nt3;
cout<<" Nilai mid : "; cin>>nm;
cout<<" Nilai quiz : "; cin>>nq;
cout<<" Nilai final : "; cin>>nf;
tnt = (nt1 + nt2+ nt3) / 3;
d = nk*20/100;
c = tnt*20/100;
y = nm*20/100;
a = nq*20/100;
k = nf*20/100;
NA = d + c + y + a + k;
cout<<" \n nama mahasiswa : " <<nama;
cout<<" \n jurusan : " <<jurusan;
cout<<" \n Nilai Akhir = " << NA;
getch();
}
