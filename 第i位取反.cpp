    #include <iostream>
    using namespace std;

    int bitManipulation2(int n, int i) {

		return (~n&(1<<i))|(n&(~(1<<i)));// 在此处补充你的代码

    }

    int main() {
    	int t, n, i;
    	cin >> t;
    	while (t--) {
    		cin >> n >> i;
    		cout << bitManipulation2(n, i) << endl;
    	}
    	return 0;
    }
