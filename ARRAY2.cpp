#include <iostream>
using namespace std;
class Array {
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
public:
    void create() {
            cout << "Enter length of array: ";
            cin >> size;
            cout << "Now enter elements of array:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            cout << "Array created successfully!" << endl;
        }
    void display() {
        if (size==0) {
            cout << "Array is empty." << endl;
            return;
        }
        else{
        cout << "Array Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        }
    }
    void insert(int elem, int pos) {
        if (pos < 1 || pos>size+1 || size >= MAX_SIZE) {
            cout << "Invalid position for insertion or array is full." << endl;
            return;
        }
        else{
        for (int i = size; i >= pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos - 1] = elem;
        ++size;
        cout << "Element inserted successfully." << endl;
    }}
    void remove(int pos) {
        if (pos < 1 || pos > size) {
            cout << "Invalid position for deletion." << endl;
            return;
        }
        else{

        for (int i = pos-1; i<size-1;i++) {
            arr[i] = arr[i + 1];
        }
        --size;
        cout << "Element deleted successfully." << endl;
    }}
};
int main() {
    Array ob;
    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout<<"1.Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ob.create();
            break;
            case 2:
                ob.display();
                break;
            case 3:
                int elem, pos;
                cout << "Enter the element to insert: ";
                cin >> elem;
                cout << "Enter the position to insert at: ";
                cin >> pos;
                ob.insert(elem, pos);
                break;
            case 4:
                cout << "Enter the position to delete: ";
                cin >> pos;
                ob.remove(pos);
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please select again.\n";
        }
    }
    return 0;
}

