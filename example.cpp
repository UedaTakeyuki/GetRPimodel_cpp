#include "GetRPiModel.h"

int main(){
	GetRPiModel m;
	cout << "Revision:        " << m.revision() << '\n';
	cout << "Release Date:    " <<  m.release_date() << '\n';
	cout << "Model(original): " <<  m.model_strict() << '\n';
	cout << "Model(unified):  " <<  m.model_unified() << '\n';
	cout << "PCB Revision:    " <<  m.PCB_revision() << '\n';
	cout << "Memory:          " <<  m.memory() << '\n';
	cout << "Note:            " <<  m.notes() << '\n';

	cout << "Model(enum):     ";
	switch (m.model()){
		case RPiModel::A:
			cout << "model A" << '\n';
			break;
		case RPiModel::B:
			cout << "model B" << '\n';
			break;
		case RPiModel::B_plus:
			cout << "model B+" << '\n';
			break;
		case RPiModel::Compute_Module:
			cout << "Compute Module" << '\n';
			break;
		case RPiModel::A_plus:
			cout << "model A+" << '\n';
			break;
		case RPiModel::B2:
			cout << "2 model B" << '\n';
			break;
		case RPiModel::Zero:
			cout << "Zero" << '\n';
			break;
		case RPiModel::B3:
			cout << "3 model B" << '\n';
			break;
		case RPiModel::A3:
			cout << "3 model A" << '\n';
			break;
	};
}
