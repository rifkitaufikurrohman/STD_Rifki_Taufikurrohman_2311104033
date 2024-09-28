/* Program 1: Menampilkan teks "Hello" */
#include <iostream>  
using namespace std;  
// int main() {  
//     cout << "Hello" << endl;     
//     return 0;  
// }  

/* Program 2: Input dan Output sederhana */ 
// int main() {     
//     int inp;     
//     cin >> inp;  
//     cout << "nilai = " << inp << endl;  
//     return 0;  
// }  

/* Program 3: Operasi Aritmatika */
// int main() {    
//     float W, X, Y; 
//     float Z;    
//     X = 7; 
//     Y = 3; 
//     W = 1;    
//     Z = (X + Y) / (Y + W);    
//     cout << "nilai Z = " << Z << endl;  
//     return 0;  
// }  


/* Program 4: Menghitung Diskon */
int main() {     
    double tot_beli, diskon;     
    cout << "total beli = Rp";     
    cin >> tot_beli;     
    diskon = 0;  

    if(tot_beli >= 100000)         
        diskon = 0.75 * tot_beli;     
    else         
        diskon = 0;  

    cout << "Besar diskon = Rp" << diskon;  
    return 0;
}  

/* Program 5: Program untuk memilih hari */
// int main() {    
//     int kode_hari;    
//     puts("Tentuin hari\n");    
//     puts("");  
//     return 0;
// }  

/* Program 6: Perulangan do-while */ 
// int main() {    
//     int i = 1;  
//     int jum;    
//     cin >> jum;  
//     do {  
//         cout << "Baris ke-" << i + 1 << endl;       
//         i++;  
//     } while (i < jum);         

//     getch();  
//     return 0;  
// }  
