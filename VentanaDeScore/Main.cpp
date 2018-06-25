#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <ScoreManager.h>
#include <string>
#include <iostream>
using namespace nana;
using namespace std;

// Lista de Scores
ScoreManager scoreList;

//Forma ventana
form fm(API::make_center(200, 500));

void scoreSimulation() {
	scoreList.setScore(30);
	scoreList.finishScore();
	scoreList.setScore(300);
	scoreList.finishScore();
	scoreList.setScore(430);
	scoreList.finishScore();
	scoreList.setScore(50);
	scoreList.finishScore();
	scoreList.setScore(252);
	scoreList.finishScore();

	scoreList.updateHighScore();

	scoreList.getAll();
}

void scoreScreen() {
	//Definir texto a mostrar
	label title{ fm, "<bold size=16> Scores" };
	title.format(true);

	string score = to_string(scoreList.getScore(0));
	label test1{ fm, "<size = 10> FIRST: " + score };
	test1.format(true);
	score = to_string(scoreList.getScore(1));
	label test2{ fm, "<size = 10> SECOND: " + score };
	test2.format(true);
	score = to_string(scoreList.getScore(2));
	label test3{ fm, "<size = 10> THIRD: " + score };
	test3.format(true);
	score = to_string(scoreList.getScore(3));
	label test4{ fm, "<size = 10> FOURTH: " + score };
	test4.format(true);
	score = to_string(scoreList.getScore(4));
	label test5{ fm, "<size = 10> FIFTH: " + score };
	test5.format(true);


	//Mostrar 
	fm.div("vert <<><text weight=100><>> <> <<><text1 weight=100><>> <> <<><text2 weight=140><>> <> <<><text3 weight=100><>> <> <<><text4 weight=120><>> <> <<><text5 weight=90><>>");
	fm["text"] << title;
	fm["text1"] << test1;
	fm["text2"] << test2;
	fm["text3"] << test3;
	fm["text4"] << test4;
	fm["text5"] << test5;
	fm.collocate();

	fm.show();

	exec();
}

int main(){
	scoreSimulation();

	scoreScreen();
}