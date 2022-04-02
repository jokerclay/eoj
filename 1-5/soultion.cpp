#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
string p[]= {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba",
             "jiu", "shi", "bai", "qian", "wan"
            };
int main() {
	string s, str1, str2, str3, ans;

    // 读入初始数字
	cin>>s;

    //读入数字的个数
	int cnt=s.size();

	for(int i=0; i<s.size(); i++, cnt--) {

		if(s[i]!='0') {

			if( i-1>=0 && s[i-1] =='0' )
				ans=ans+p[0]+" ";

			ans=ans+p[s[i]-'0']+" ";

			switch(cnt%4) {
				case 0:
					ans+="qian ";
					break;
				case 3:
					ans+="bai ";
					break;
				case 2:
					ans+="shi ";
					break;
				default:
					break;
			}
		}
		switch(cnt) {
			case 9:
				ans+="yi ";
				break;
			case 5:
				ans+="wan ";
				break;
			default:
				break;
		}
	}

	if(ans.substr(0, 6)=="yi shi")
		ans=ans.substr(3, ans.size()-1);
	cout<<ans<<endl;
	return 0;
}

