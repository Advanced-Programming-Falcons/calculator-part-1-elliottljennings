#include <iostream>

using namespace std;

int main(void){
    while (true){
        float a;
        float b;
        cout << "";
        cout << " enter two numbers; \n a first, then b \n";
        cin >> a;
        cin >> b;
        /*
        if ( class_list == 'E'){
            cout << "Sorry for your loss";
        }else if (class_list == 'M'){
            cout << "Yay Math";
        }else if ( class_list == 'S'){
            cout << "Yippee";
        } else{
            cout << "Why are you even here then?";

        }
        }
        */
        char c;
        cout << "Pick the operation that you would like to perform";
        cout << "A      a + b \n";
        cout << "B      a - b \n";
        cout << "C      a * b \n";
        cout << "D      a / b \n";
        cin >> c;
        double d;
        switch(c){
            case 'A': case 'a' :
            d = a + b;
            break;

            case 'B': case 'b':
            d = a - b;
            break;

            case 'C': case 'c':
            d = a * b;
            break;

            case 'D': case 'd':
            d = a / b;
            break;


            default:
            cout << "what" << endl;



        }
        cout << d;
        
    }
}