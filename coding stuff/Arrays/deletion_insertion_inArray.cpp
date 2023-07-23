#include <iostream>
using namespace std;

void insertElement(int arr[],int n,int index, int element) {
    

    cout<<"Enter the index where you want to insert the element: ";
    cin>> index ;

    cout<<"Enter the element to be inserted: ";
    cin>>element;

    for (int i = n; i > index; i--) {
    arr[i] = arr[i - 1];
    }
    // Insert the new element by overwriting the last element
    arr[index] = element;
    
    cout<<"Element inserted successfully!"<<endl;
    // Display the array after insertion
    
    cout<<"Array after insertion: "<<endl;
    for (int i = 0; i < n ; i++) {
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
    
}

void deleteElement(int arr[],int n, int index, int element) {
    

    cout<<"Enter the index of the element to be deleted: ";
    cin>>index;



    for (int i = index; i < n; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }

     // Reduce the size of the array
     
    cout << "Element deleted successfully!" << endl;

    cout << "After deletion : "<<endl;
    for (int i = 0; i < n; i++) {
        
        cout << arr[i] << " ";
    
    }cout << endl;
    
}

int main() {
    int index;int n = 5;int element;
    
    int arr[n] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < 5; i++)
	{
		cout<<" " <<arr[i]<<" ";
       
	}
    cout<<"                   //you can change the array elements at run time... "<<endl;
    cout<<"**************************"<<endl;
    char choice;

    do
    {
        cout <<"1. insert element" << endl;
        cout << "2. delete element" << endl;
        cout << "3. Exit" << endl;
        cout<<"**************************"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                insertElement(arr, n, index, element);
                break;
            case '2':
                deleteElement(arr, n, index, element);
                break;
            case '3':
                cout << "Exiting the application. Goodbye!" << endl;
                return 0;

        }
        cout << endl;
    } while (choice != '3');
        
        
   return 0;
}             