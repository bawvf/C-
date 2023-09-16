#include <iostream>
using namespace std;

#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

//选手类
class Person {
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};

void createPerson(vector<Person>& v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的Person对象 放入到容器中
		v.push_back(p);
	}
}

//打分
void setScore( vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数 放入到deque容器中
		deque<int>d;

		for (int i = 0; i < 10; i++) {
			int score = rand() % 40 + 60;
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
			sum += *dit;
		int avg = sum / d.size();

		//将平均分 赋值给选手身上
		it->m_Score = avg;
	}

}

void showScore(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
		cout << "姓名：" << it->m_Name << "平均分：" << it->m_Score << endl;
}

int main() {

	//随机数种子
	srand((unsigned int)time(NULL));

	//1.创建五名选手
	vector<Person>v;
	createPerson(v);

	//测试
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
		cout << "姓名：" << (*it).m_Name << "分数：" << (*it).m_Score << endl;

	//2.给五名选手打分
	setScore(v);

	//3.显示最后得分
	showScore(v);

	return 0;
}