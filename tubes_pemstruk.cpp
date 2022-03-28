#include <iostream>
#include <string.h>
#include <stdio.h>
 
 
using namespace std;
 
int tarif(int a,int b)
{
   
    int harga = a*b;
   
    return harga;
}
struct{
    int hari,bulan, tahun;
} Pinjam, Kembali, selisih;
int main(int argc, char** argv){
 
        char nama[20];
        int tb[10]={500,700,1500,2000,8000,9000,900,800,10000,2000};
        char buku[20][20]={"Matematika","Biologi","Fisika","Kimia","Sosiologi","PKN","Cerpen","Novel","Cerita","Akuntansi"};
        int jp,total;
        string a,kode;
   
    do{
        cout<<"Program Perpustakkan\n";
   
        cout<<"-------------------------------------------------------\n";
        cout<<"|   KODE BUKU   |   JENIS BUKU   |   TARIF BUKU       |\n";
        cout<<"-------------------------------------------------------\n";
        cout<<"|       M       |   Matematika       |  Rp 500        |\n";
        cout<<"|       B       |   Biologi          |  Rp 700        |\n";
        cout<<"|       F       |   Fisika           |  Rp 1500       |\n";
        cout<<"|       K       |   Kimia            |  Rp 2000       |\n";
        cout<<"|       S       |   Sosiologi        |  Rp 8000       |\n"; 
        cout<<"|       P       |   PKN              |  Rp 9000       |\n";
        cout<<"|       C       |   Cerpen           |  Rp 900        |\n";
        cout<<"|       N       |   Novel            |  Rp 800        |\n";   
        cout<<"|       CE      |   Cerita           |  Rp 10000      |\n";
        cout<<"|       A       |   Akuntansi        |  Rp 2000       |\n";
        cout<<"-------------------------------------------------------\n";
        cout<<"Nama Peminjam    : ";
        cin.ignore();
        gets(nama);
        cout<<"Masukan Kode Buku    : ";
        cin>>kode;
   
        if(kode=="M"||kode=="m"){
       
            cout<<"Buku yang anda pinjam Berjenis Matematika\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[0]);
       
            cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[0];
            cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;    
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)? ";
            cin>>a;
       
       
        }else if(kode=="B"||kode=="b"){
       
            cout<<"Buku yang anda pinjam Berjenis Biologi\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[1]);
           
            cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[1];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
       
       
        }else if(kode=="F"||kode=="f"){
       
            cout<<"Buku yang anda pinjam Berjenis Fisika\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[2]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[2];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;


            }else if(kode=="K"||kode=="k"){
       
            cout<<"Buku yang anda pinjam Berjenis Kimia\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[3]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[3];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="S"||kode=="s"){
       
            cout<<"Buku yang anda pinjam Berjenis Sosiologi\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[4]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[4];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="P"||kode=="p"){
       
            cout<<"Buku yang anda pinjam Berjenis PKN\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[5]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[5];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="C"||kode=="c"){
       
            cout<<"Buku yang anda pinjam Berjenis Cerpen\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[6]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[6];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="N"||kode=="n"){
       
            cout<<"Buku yang anda pinjam Berjenis Novel\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[7]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[7];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="CE"||kode=="ce"){
       
            cout<<"Buku yang anda pinjam Berjenis Cerita\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[8]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[8];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;

            }else if(kode=="A"||kode=="a"){
       
            cout<<"Buku yang anda pinjam Berjenis Akuntansi\n";
            cout<<"Masukan berapa buku yang di pinjam   : ";
            cin>>jp;
       
            total = tarif(jp,tb[9]);
        cout<<"Nama Peminjam : ";
            cout<<nama;
            cout<<"\nJenis buku : ";
            cout<<buku[9];
             cout<<endl;
            cout<<"Tanggal Peminjaman "<<endl;
            cout<<"Masukan Tahun : ";cin>>Pinjam.tahun;
            cout<<"Masukan Bulan : ";cin>>Pinjam.bulan;
            cout<<"Masukan Tanggal :";cin>>Pinjam.hari;
            cout<<endl;
            cout<<"Tanggal Pengembalian"<<endl;
            cout<<"Masukan Tahun : ";cin>>Kembali.tahun;
            cout<<"Masukan Bulan : ";cin>>Kembali.bulan;
            cout<<"Masukan Tanggal :";cin>>Kembali.hari;
        
            if((Kembali.hari-Pinjam.hari)<0){
                selisih.hari=((30+Kembali.hari)-Pinjam.hari);
            }    else {
                selisih.hari=Kembali.hari-Pinjam.hari;
            }
            if((Kembali.bulan-Pinjam.bulan<0)){
                selisih.bulan=(12+Kembali.bulan-Pinjam.bulan);
                    selisih.tahun=Kembali.tahun-Pinjam.tahun-1;
            } else {
                selisih.bulan=Kembali.bulan-Pinjam.bulan;
            selisih.tahun=Kembali.tahun-Pinjam.tahun;
            }
            cout<<endl;
            cout<<"Lama Peminjaman = "<<selisih.tahun*365+selisih.bulan*30+selisih.hari << "Hari";
            cout<<endl;
            cout<<"\nJumlah yang harus di bayar sebesar Rp.";
            cout<<total;
            cout<<"\nApakah anda ingin meminjam lagi (Y/t)?";
            cin>>a;
        }  
    }while(a != "t");
}