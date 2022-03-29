#include <iostream>
 
using namespace std;
 
int main() {
    int so, soTemp;
    cout << "Nhap so n: ";
    cin >> so;
     
    cout << so << " doc thanh ten la ";
     
   
    while(so != 0) {
        soTemp = (soTemp * 7) + (so % 7);
        so /= 7;
        if(soTemp <= 0 || soTemp > 7){
		system("cls");
		cout << "Khong ton tai ngay nay trong tuan \n";
	
    }
     
    }while(soTemp != 0) {
        switch(soTemp % 7) {
            
            case 1: 
                cout << "monday ";
                break;
            case 2: 
                cout << "tuesday ";
                break;
            case 3: 
                cout << "Wednesday ";
                break;
            case 4: 
                cout << "Thursday ";
                break;
            case 5: 
                cout << "Friday ";
                break;
            case 6: 
                cout << "Saturday ";
                break;
            case 7: 
                cout << "sunday";
                break;
       }
         
        soTemp = soTemp / 7;
    }
 
    return 0
}
