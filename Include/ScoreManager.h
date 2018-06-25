#ifndef SCORE_MANAGER
#define SCORE_MANAGER
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class ScoreManager
{
private:
	vector<int> *_scoreList;
	int _highScore;
	int _tempScore;
public:
	ScoreManager();
	~ScoreManager();
	/*manipulación score actual*/
	void addScore(int score);
	void remScore(int score);
	void setScore(int score);
	void resetScore();
	/*manipulación lista de scores*/
	int getHighScore();
	void updateHighScore();
	int getScore(int scorePos);
	void finishScore();
	void getAll();
};
#endif

