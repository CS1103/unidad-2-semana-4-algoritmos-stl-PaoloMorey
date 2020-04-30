#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void uva_146(){
    string x;
    while (cin >> x, x != "#"){
        if (next_permutation(x.begin(), x.end())){
            cout << x << endl;
        }
        else{
            cout << "No successor" << endl;
        }
    }
}

void uva_299(){
    int n;
    cin >> n;
    while (n--) {
        int length;
        cin >> length;
        vector<int> v (length);
        for (int i = 0; i < length ; ++i) {
            cin >> v[i];
        }
        int swaps = 0;
        int temp;
        bool swap = true;
        do{
            swap = false;
            for (int i = 0; i < length - 1 ; ++i) {
                if(v[i] > v[i+1]){
                    temp = v[i];
                    v[i] = v[i+1];
                    v[i+1] = temp;
                    swaps++;
                    swap = true;
                }
            }
        } while (swap);
        cout << "Optimal train swapping takes "<< swaps << " swaps" << endl;
    }

}

void uva_482(){
    int cases;
    string input_line;
    cin >> cases;
    while (cases--){
    }
}

int main() {

    return 0;
}
