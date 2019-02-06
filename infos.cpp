#include "GetRPiModel.h"

int main(){
	GetRPiModel m;
	cout << "Revision:        " << m.revision() << '\n';
	cout << "Release Date:    " <<  m.release_date() << '\n';
	cout << "Model(original): " <<  m.model_strict() << '\n';
	cout << "Model(unified):  " <<  m.model_unified() << '\n';
	cout << "Model(enum):     " <<  m.model() << '\n';
	cout << "PCB Revision:    " <<  m.PCB_revision() << '\n';
	cout << "Memory:          " <<  m.memory() << '\n';
	cout << "Note:            " <<  m.notes() << '\n';
}
