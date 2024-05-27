// #include<iostream>
// using namespace std;
// class ShopItem{
//     int Id;
//     float Price;
//     public:
//     int SetData(int a,float b){
//         Id = a;
//         Price = b;
//     }
//     void GetData(void){
//         cout<<" the Id of Item is: "<<Id<<endl;
//         cout<<" the Price of Item is: "<<Id<<endl;
//     }
// };
// int main()
// {
//     int size = 3;
//     ShopItem *ptr = new ShopItem [size];
//     ShopItem *ptrTemp = ptr;
//     int p,i;
//     float q;
//     for(i=0;i<size;i++){
//         cout<<"Enter Id and Price "<<i+1<<endl;
//         cin>>p>>q;
//         ptr-> SetData();
//         ptr++;
//     }
//     for(i=0;i<size;i++){
//         cout<"Item number: "<<i+1<<endl;
//         ptrTemp->GetData();
//         ptrTemp++;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

class ShopItem {
    int Id;
    float Price;

public:
    // Change the return type of SetData to void
    void SetData(int a, float b) {
        Id = a;
        Price = b;
    }

    void GetData(void) {
        cout << "The Id of Item is: " << Id << endl;
        cout << "The Price of Item is: " << Price << endl; // Fix the output to display Price
    }
};

int main() {
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;

    for (int i = 0; i < size; i++) {
        cout << "Enter Id and Price " << i + 1 << endl;
        cin >> p >> q;
        // Call SetData on the current object in the array
        ptr->SetData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++) {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->GetData();
        ptrTemp++;
    }

    // Don't forget to free the allocated memory
    delete[] ptr;

    return 0;
}
