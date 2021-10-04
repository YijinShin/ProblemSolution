//No. 15596
#include <iostream>
#include <vector>
using namespace std;

/*Vector : 자동으로 메모리가 할당되는 배열 
    vector<int> v; 비어있는 백터 생성
    vector<int> v(5); 기본값이 0으로 초기화된 size 5인 백터
    vetor가 가지는 다양한 맴버 함수가 있다. 

*/

/*
//15596 
long long sum(std::vector<int> &a) {
	long long ans = 0; // 64bit이상의 값 표현 
    for(int i=0;i<a.size();i++){ // vector.size() : 원소 갯수 리턴 
        ans += a[i];
    }
	return ans;
}
*/

//vector study
int main(void){
    vector<int> a(5);
    cout << a.size() << " / " << a.capacity() << endl;
    a.resize(7,3);
    cout << a.size() << " / " << a.capacity() << endl;
    for(int i;i<a.size();i++) cout << a[i] << endl;    
}

