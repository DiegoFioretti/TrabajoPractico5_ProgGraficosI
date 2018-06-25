#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>
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
	form fm;

	//Define a label and display a text.
	label lab{ fm, "<bold size=16> Scores" };
	lab.format(true);

	//Define a button and answer the click event.
	/*button btn{ fm, "Quit" };
	btn.events().click([&fm] {
		fm.close(); // ACA VA EL CODIGO QUE QUEREMOS CUANDO SE PRESIONA EL BOTÓN
	});*/

	//Layout management
	fm.div("vert <<><><<><weight=180% text><>><><<><>><>");
	fm["text"] << lab;
	//fm["button"] << btn;
	fm.collocate();

	//Show the form
	fm.show();

	//Start to event loop process, it blocks until the form is closed.
	exec();
}