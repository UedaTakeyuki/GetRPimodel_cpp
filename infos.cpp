#include "GetRPiModel.h"

int main(){
	GetRPiModel m;
	cout << m.revision()<<'\n';
	cout << m.release_date()<<'\n';
	cout << m.model_strict()<<'\n';
	cout << m.model()<<'\n';
	cout << m.PCB_revision()<<'\n';
	cout << m.memory()<<'\n';
	cout << m.notes()<<'\n';
}
