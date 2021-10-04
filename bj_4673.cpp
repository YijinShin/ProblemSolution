#include <iostream>
using namespace std;

/*셀프넘버. 
d(n) :  d(n)을 n과 n의 각 자릿수를 더하는 함수. n은 양의 정수.
    d(33) = 33+3+3 = 39
d(n)을 사용해서 무한 수열을 만들 수 있다. ( d(n), d(d(n)), d(d(d(n))) ... )
    n=33이면, 39, 51 57 ... 
이때 n 은 d(n)의 생성자라고 한다. 
    33은 39의 생성자이다. 
생성자가 없는 숫자를 셀프 넘버라고 한다. 
    100보다 작은 셀프넘버는 총 13개이다. :1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97

문제 : 10000보다 작거나 같은 셀프넘버를 한줄에 하나씩 출력하라. 
*/

int d(int n);

int main(void){
    int num = 10001; // max 숫자 지정
    bool N[10001] = {false}; // initialize : true
    for(int i=1; i<num; i++){ // 1~ 10000
        if( d(i) < num ){            
            N[d(i)] = true; // 자기 자신이 아닐때.
        }
    }
    
    for(int i=1; i<num; i++){
        if(N[i] == false) cout << i << endl;
    }
}

int d(int n){
    int sum = n;
    int num = n;

    while(1){
        if(num == 0) break;
        sum += num%10;
        num = num/10;
    }
    return sum;
}