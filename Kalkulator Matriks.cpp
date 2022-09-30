#include <iostream>

using namespace std;

int a[25][25];
int b[25][25];
int hasil[25][25];
int kolomA,barisA,kolomB,barisB,operasi,kali,saklar;

void inputMatriksA() {
    cout << "MASUKKAN MATRIKS A"<<endl;
    cout << "masukkan jumlah baris: ";
    cin >> barisA;
    cout << "masukkan jumlah kolom: ";
    cin >> kolomA;
    for (int i = 1; i <= barisA; i++) { //baris
        for (int j = 1; j <= kolomA; j++) { //kolom
            cout << "masukkan data baris ke " << i << " kolom ke " << j << " : ";
            cin >> a[i][j];
        }
    }
 cout << endl;
}
void inputMatriksB() {
    cout << "MASUKKAN MATRIKS B"<<endl;
    cout << "masukkan jumlah baris: ";
    cin >> barisB;
    cout << "masukkan jumlah kolom: ";
    cin >> kolomB;
    for (int i = 1; i <= barisB; i++) { //baris
        for (int j = 1; j <= kolomB; j++) { //kolom
            cout << "masukkan data baris ke " << i << " kolom ke " << j << " : ";
            cin >> b[i][j];
        }
    }
    cout << endl;
}

void penjumlahanMatriks() {
    if (barisA == barisB && kolomA == kolomB){
       for (int i = 1; i<= barisB; i++) { //baris
            for (int j = 1; j <= kolomB; j++) { //kolom
            hasil[i][j]=a[i][j]+b[i][j];
            cout<<hasil[i][j]<<"\t";
			}
			cout<<endl;
    	}
		
    	}
    else {
        cout<<"Mohon maaf operasi tidak dapat diselesaikan, masukkan data dengan benar!"<<endl;
    }

}
void penguranganMatriks(){
	if (barisA == barisB && kolomA == kolomB){
       for (int i = 1; i<= barisB; i++) { //baris
            for (int j = 1; j <= kolomB; j++) { //kolom
            hasil[i][j]=a[i][j]-b[i][j];
            cout << hasil[i][j] << "\t";
        	}
        	cout<<endl;
    	} 
    	}

    else {
        cout<<"Mohon maaf operasi tidak dapat diselesaikan, masukkan data dengan benar!"<<endl;
    }
}

void perkalianMatriks(){
	if (kolomA==barisB){
		for(int i = 1; i <= barisA; i++){
      		for(int j = 1 ; j <= kolomB; j++){
       			 for(int k = 1; k <= barisB; k++){
          			kali = kali + a[i][k] * b[k][j];
        }
        hasil[i][j] = kali;
        kali=0;
      }
    }
    for(int i = 1; i <= barisA; i++){
      for(int j = 1; j <= kolomB; j++){
        cout << hasil[i][j] << "\t";
      }
      	cout << endl;
	}	
}
	else{
		cout<<"Mohon maaf operasi tidak dapat diselesaikan, masukkan data dengan benar!"<<endl;
	}
}

void delay(){
	long int delay;
	delay=1;
	while(delay<100000000){
		delay++;
	}
	
}

int main()
{
    cout << "====KALKULATOR MATRIKS====" << endl;
    
    cout<<"Ketik 1 untuk memulai program!";
    cin>>saklar;
    
if(saklar==1){
	cout<<"Loading..."<<endl;
	delay();
	cout<<"Ready to Use!"<<endl<<endl;
	
    cout << "PILIH OPSI BERIKUT!" << endl;
    cout << "Opsi 1 : Penjumlahan" << endl;
    cout << "Opsi 2 : Pengurangan" << endl;
    cout << "Opsi 3 : Perkalian" << endl;
    cout << "Masukkan opsi yang dipilih : ";
    cin >> operasi;

    switch (operasi)
    {
    case 1 :
    	cout<<endl;
    	inputMatriksA();
 		inputMatriksB();
        penjumlahanMatriks();
        break;
    case 2 :
    	cout<<endl;
    	inputMatriksA();
 		inputMatriksB();
    	penguranganMatriks();
    	break;
    case 3 :
    	cout<<endl;
    	inputMatriksA();
 		inputMatriksB();
    	perkalianMatriks();
    	
    default:
        break;
    }
}
else{
	cout<<"Ketik 1 untuk memulai program"<<endl;
}
    return 0;
}
