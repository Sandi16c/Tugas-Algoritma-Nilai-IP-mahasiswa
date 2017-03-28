	

#include <iostream> //input & output stream

using namespace std;


int main()
{
    float ip[100], tertinggi=0, terendah=4, sum_ip=0;
	int lulus=0, tdk_lulus=0, error_kebawah=0, error_keatas=0;
	int i=1, pembagi;
	
	cout<<"========PROGRAM MEMBACA NILAI IP MAHASISWA========="<<endl<<endl;
	cout<<"==================================================="<<endl<<endl;

	while (ip[i-1] != -999) {
        cout<<"Data Ke-"<<i<<"\n";
		cout<<"Masukkan IP:";
        cin>>ip[i];
		
		if(ip[i]>=0 && ip[i]<=4){ //Lulus 
			if(ip[i]>=2.75){
				lulus++;	
			}
			else if(ip[i]<2.75){ //Tidak lulus
				tdk_lulus++;	
			}
			
			if (ip[i] > tertinggi){ tertinggi = ip[i]; }
			if (ip[i] < terendah){ terendah = ip[i]; }
			
			sum_ip+=ip[i];
			pembagi	=	i; //pembagi dibatas untuk kelompok ip dalam range 1-4
		}
		else if(ip[i] < 0 || ip[i] > 4){
			/* Pembatasan range angka margin error 
			 * dari 10 s/d -1 dan dari 5 s.d 10		
			 */
			if(ip[i] > -11 && ip[i] < 1){
				error_kebawah++;	
			}
			else if(ip[i] > 4 && ip[i] < 11){
				error_keatas++;	
			}
		}
		
		i++;
    }
	
	
	float rata 		= (sum_ip/pembagi);
	int jml_m		= i-2;
	int error		= error_kebawah + error_keatas;
	
        
	cout<<endl;
		cout<<"===============Laporan Data=============="<<endl<<endl;
    if(i!=1){ //cek jumlah i
		cout<<" Jumlah Mahasiswa                       =   "<<jml_m<<endl;
		cout<<" Mahasiswa Yang Lulus                   =   "<<lulus<<endl;
		cout<<" Mahasiswa Yang Tidak Lulus             =   "<<tdk_lulus<<endl;
		cout<<" IP Tertinggi                           =   "<<tertinggi<<endl;
		cout<<" IP Terendah                            =   "<<terendah<<endl;
		cout<<" IP Rata-Rata                           =   "<<rata<<endl;
		cout<<" Error( IP Tidak Sesuai )               =   "<<error<<endl<<endl<<endl;
		cout<<"Note: Angka diatas 11 dan dibawah -11 tidak akan di proses"<<endl<<endl<<endl;
		cout<<" Sandi Liyon Hendriyanto TIF RM 16C"<<endl;
	}
	else {
		cout<<"Tidak Ada Data";
	}
    
	return 0;
}
