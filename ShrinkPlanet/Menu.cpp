#include "Menu.h"
#include "time.h"

void Menu::Activate() {




	startObj->Activate();
	endObj->Activate();
}

void Menu::Activate(mat4 p, mat4 v, int color_mode) {

	srand(clock());


	if (isShown == true) {
		startObj->SetPerspectiveMatrix(p);
		startObj->SetViewMatrix(v);

		endObj->SetPerspectiveMatrix(p);
		endObj->SetViewMatrix(v);


		GLfloat theta = 0.001 * clock();


		startObj->RotatingYAxis();
		endObj->RotatingYAxis();

		startObj->Activate(color_mode);
		endObj->Activate(color_mode);
	}
}