#include "GetRPiModel.h"

int main(){

	// Define GetRPiModel object.
	GetRPiModel m;

	// Following member functions return string according with original table as follow:
	// https://elinux.org/RPi_HardwareHistory
	cout << "Revision:        " << m.revision() << '\n';
	cout << "Release Date:    " << m.release_date() << '\n';
	cout << "Model(original): " << m.model_strict() << '\n';
	cout << "PCB Revision:    " << m.PCB_revision() << '\n';
	cout << "Memory:          " << m.memory() << '\n';
	cout << "Note:            " << m.notes() << '\n';

	// return "string" of unified model name.
	cout << "Model(unified):  " <<  m.model_unified() << '\n';

	std::string uart;
	
	// return "enum class RPiModel" of unified model name.
	switch (m.model()){
		case RPiModel::B3:
			uart = "/dev/ttyS0"s;
			break;
		default:
			uart = "/dev/ttyAMA0"s;
			break;
	}

	cout << "Model(enum):     ";
	cout << m.model() << '\n';
}
