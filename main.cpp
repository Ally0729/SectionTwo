/*#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	fstream fstrm1;//����һ��δ�󶨵��ļ���
	fstream fstrm2("E:\\abc.txt");//����һ���ļ��������ļ��󶨣���Ϊ��ȷ���Ƕ�����д����˲����Զ�����abc.txt�ļ�
	ofstream fstrm3("E:\\abc.txt");//����һ���ļ��������ļ��󶨣�ȷ����д����ʱ���������abc.txt�ͻ��Զ���������ļ�
	fstream fstrm4("E:\\abc.txt",fstream::out);//����һ���ļ��������ļ��󶨣�ȷ����д����ʱ���������abc.txt�ͻ��Զ���������ļ�
	                                        //fstream::out ��ģʽ����˵��ģʽ�Ĳ���Ĭ��ģʽ
	
	//ģʽ
	//in/out/app/ate/trunc/binary-----------------fstream::in/ifstream::in/ofstream::in...
	//appĬ��out��outĬ��trunc��������ʽ˵��app���Ͳ���Ĭ��trunc��
	fstrm1.open("E:\\abc.txt");//��Ĭ�Ϸ�ʽ���ļ���Ĭ�Ϸ�ʽ��fstream�й�
	//fstreamĬ��in��out��ifstreamĬ��in��ofstreamĬ��out
	fstrm1.open("E:\\abc.txt",fstream::out);
	/*fstream fstrm1;
	   fstrm1.open("E:\\abc.txt");
	   �ȼ���
	   fstream fstrm1("E:\\abc,txt");  open�������Զ�����
	*/

	/*string s="Hello";
	stringstream strm1;//����һ��δ�󶨵�stringstream����
	stringstream strm2(s);//����һ��stringstream���󣬺�s��һ��������
	strm1.str(s);//strm1��s��һ��������
	strm1.str();//���غ�strm1�󶨵��ַ���*/
	/*stringstream strm1;
	   strm1.str(s);
	   �ȼ���
	   stringstream strm1(s);
	   */
	//ʹ��istringstream
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

	//ʹ��ostringstream
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


//˳�������Ĳ���
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