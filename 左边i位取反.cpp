    #include <iostream>
    using namespace std;

    int bitManipulation3(int n, int i) {

		return n^(~0<<(32-i));// 在此处补充你的代码

    }

    int main() {
    	int t, n, i;
    	cin >> t;
    	while (t--) {
    		cin >> n >> i;
    		cout << bitManipulation3(n, i) << endl;
    	}
    	return 0;
    }
