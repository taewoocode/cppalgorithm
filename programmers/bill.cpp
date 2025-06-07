#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    int wallet_small = min(wallet[0], wallet[1]);
    int wallet_large = max(wallet[0], wallet[1]);
    int bill_small = min(bill[0], bill[1]);
    int bill_large = max(bill[0], bill[1]);
    
    while(bill_small > wallet_small || bill_large > wallet_large){
        if(bill_large > bill_small){
            bill_large /= 2;
        } else {
            bill_small /= 2;
        }
        answer++;
        
        int new_small = min(bill_small, bill_large);
        int new_large = max(bill_small, bill_large);
        bill_small = new_small;
        bill_large = new_large;
    }
    return answer;
}