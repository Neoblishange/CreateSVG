#include "Editor.h"

Editor::Editor()
{
	cout << "constr editeur" << endl ;
}

Editor::~Editor()
{
	cout << "destr editeur" << endl ;
}

void Editor::AddFG(Figure *object)
{
	l.push_back(object);
	AT = AT + object->GetArea();
	cout << "add figure to list" << endl;
}

float Editor::CalcAT()
{
	return AT;
}

void Editor::ExportSVG(string a)
{
	ofstream fichier(a, ios::out); 
	if (fichier)
	{
		auto it = l.begin();
		//fichier << "<svg width=\""<<viewport.GetSide()<<"\" height=\""<<viewport.GetSide()<<"\">";
		fichier << "<svg width=\"800\" height=\"400\">";
		for (it; it != l.end(); it++) {	
			cout<<(*it)->SVG();
			fichier << (*it)->SVG();
		}
		fichier << "</svg>";

		fichier.close();
	}
	else
		cout << "Impossible d'ouvrir le fichier !" << endl;
}
