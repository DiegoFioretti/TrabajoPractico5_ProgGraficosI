#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <ScoreManager.h>
#include <iostream>
using namespace std;

int main(){
	ScoreManager scoreList;

	scoreList.addScore(190);
	scoreList.updateHighScore();
	scoreList.addScore(300);
	scoreList.updateHighScore();
	scoreList.addScore(200);
	scoreList.updateHighScore();
	scoreList.addScore(50);
	scoreList.updateHighScore();
	scoreList.addScore(250);
	scoreList.updateHighScore();

	scoreList.getAll();

	using namespace nana;
	
	//Define a form.
	form fm(API::make_center(200, 500));

	//Define a label and display a text.
	label title{ fm, "<bold size=16> Scores" };
	title.format(true);

	label test1{ fm, "<size = 10> FIRST" };
	test1.format(true);

	label test2{ fm, "<size = 10> SECOND" };
	test2.format(true);

	label test3{ fm, "<size = 10> THIRD" };
	test3.format(true);

	label test4{ fm, "<size = 10> FOURTH" };
	test4.format(true);

	label test5{ fm, "<size = 10> FIFTH" };
	test5.format(true);

	//Layout management

	fm.div("vert <<><text weight=100><>> <> <<><text1 weight=80><>> <> <<><text2 weight=80><>> <> <<><text3 weight=80><>> <> <<><text4 weight=80><>> <> <<><text5 weight=80><>>");
	fm["text"] << title;
	fm["text1"] << test1;
	fm["text2"] << test2;
	fm["text3"] << test3;
	fm["text4"] << test4;
	fm["text5"] << test5;
	fm.collocate();

	//Show the form
	fm.show();

	//Start to event loop process, it blocks until the form is closed.
	exec();
}