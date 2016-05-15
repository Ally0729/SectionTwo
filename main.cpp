/*#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream fstrm1;//创建一个未绑定的文件流
	fstream fstrm2("E:\\abc.txt");//创建一个文件流，和文件绑定，因为不确定是读还是写，因此不会自动创建abc.txt文件
	ofstream fstrm3("E:\\abc.txt");//创建一个文件流，和文件绑定，确定是写，此时如果不存在abc.txt就会自动创建这个文件
	fstream fstrm4("E:\\abc.txt",fstream::out);//创建一个文件流，和文件绑定，确定是写，此时如果不存在abc.txt就会自动创建这个文件
	                                        //fstream::out 是模式，不说明模式的采用默认模式
	
	//模式
	//in/out/app/ate/trunc/binary-----------------fstream::in/ifstream::in/ofstream::in...
	//app默认out，out默认trunc，除非显式说明app，就不会默认trunc了
	fstrm1.open("E:\\abc.txt");//以默认方式打开文件，默认方式和fstream有关
	//fstream默认in或out，ifstream默认in，ofstream默认out
	fstrm1.open("E:\\abc.txt",fstream::out);
	/*fstream fstrm1;
	   fstrm1.open("E:\\abc.txt");
	   等价于
	   fstream fstrm1("E:\\abc,txt");  open函数被自动调用
	*/

	/*string s="Hello";
	stringstream strm1;//创建一个未绑定的stringstream对象
	stringstream strm2(s);//创建一个stringstream对象，和s的一个拷贝绑定
	strm1.str(s);//strm1和s的一个拷贝绑定
	strm1.str();//返回和strm1绑定的字符串*/
	/*stringstream strm1;
	   strm1.str(s);
	   等价于
	   stringstream strm1(s);
	   */
	//使用istringstream
	/*
	struct PersonInfo{
		string name;
		vector<string> phones;
	}
	*/
	/*
	string line,word;
	vector<PersonInfo> people;
	while(getline(cin,line)){
		PersonInfo info;
		istringstream record(line);
		record>>info.name;
		while(record>>word){
			info.phones.push_back(word);
		}
		people.push_back(info);
	}
	/*

	//使用ostringstream
	ostringstream badnums(s);
	if(!valid(nums)){
		badnums<<' '<<nums;
	}
	cout<<badnums.str();
}
*/
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//int main(){
//	string str= "my";
//	vector<string> v (1,str);
//	v.push_back("mmm");
//	v.push_back("www");
//	vector<string> vec;
//	vec.push_back("hello");
//	vec.push_back("sss");
//	vector<string>::iterator p=v.begin()+1;
//	string str1=*p;
//	vector<string>::iterator b=vec.begin();
//	vector<string>::iterator e=vec.end();
//	vector<string>::iterator m=v.insert(p,b,e);
//}


//顺序容器的操作
#include <iostream>
#include <forward_list>
#include <vector>
using namespace std;
int main(){
	vector<int> ivec;
	vector<int> ivec2;
	ivec2.push_back(2);
	ivec2.push_back(3);
	forward_list<int> flst;
	ivec.push_back(8);
	vector<int>::iterator p=ivec.begin();
	vector<int>::iterator b=ivec2.begin();
	vector<int>::iterator e=ivec2.end();
	//ivec.insert(p,5,8);
	ivec.insert(p,b,e);
	p=ivec.begin();
	e=ivec.end();
	ivec.erase(p,e);
	flst.push_front(6);
}