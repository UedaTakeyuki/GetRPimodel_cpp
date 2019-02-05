#include <iostream>
#include <unordered_map>
#include <fstream>

using namespace std;

class GetRPiModel {
	//Revision,  Release Date, Model_Strict,                       Model,             PCB Revision, Memory, Notes
  unordered_map
    <string,   tuple<string, string,                             string,            string, string, string>> mp{
  	{"Beta"s,   {"Q1 2012"s, "B (Beta)"s, 		                   "B"s,              "?"s,   "256 MB"s, "Beta Board"s}},
		{"0002"s,   {"Q1 2012"s, "B"s, 					                     "B"s,              "1.0"s, "256 MB"s, ""s}},
		{"0003"s,   {"Q3 2012"s, "B (ECN0001)"s,                     "B"s,              "1.0"s, "256 MB"s, "Fuses mod and D14 removed"s}},
		{"0004"s,   {"Q3 2012"s, "B"s, 					                     "B"s,              "2.0"s, "256 MB"s, "(Mfg by Sony)"s}},
		{"0005"s,   {"Q4 2012"s, "B"s, 					                     "B"s,              "2.0"s, "256 MB"s, "(Mfg by Qisda)"s}},
		{"0006"s,   {"Q4 2012"s, "B"s, 					                     "B"s,              "2.0"s, "256 MB"s, "(Mfg by Egoman)"s}},
		{"0007"s,   {"Q1 2013"s, "A"s, 					                     "A"s,              "2.0"s, "256 MB"s, "(Mfg by Egoman)"s}},
		{"0008"s,   {"Q1 2013"s, "A"s, 					                     "A"s,              "2.0"s, "256 MB"s, "(Mfg by Sony)"s}},
		{"0009"s,   {"Q1 2013"s, "A"s, 					                     "A"s,              "2.0"s, "256 MB"s, "(Mfg by Qisda)"s}},
		{"000d"s,   {"Q4 2012"s, "B"s,                               "B"s,              "2.0"s, "512 MB"s, "(Mfg by Egoman)"s}},
		{"000e"s,   {"Q4 2012"s, "B"s,                               "B"s,              "2.0"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"000f"s,   {"Q4 2012"s, "B"s,                               "B"s,              "2.0"s, "512 MB"s, "(Mfg by Qisda)"s}},
		{"0010"s,   {"Q3 2014"s, "B+"s, 							               "B+"s,             "1.0"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"0011"s,   {"Q2 2014"s, "Compute Module 1"s,                "Compute Module"s, "1.0"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"0012"s,   {"Q4 2014"s, "A+"s,                              "A+"s,             "1.1"s, "256 MB"s, "(Mfg by Sony)"s}},
		{"0013"s,   {"Q1 2015"s, "B+"s,                              "B+"s,             "1.2"s, "512 MB"s, "(Mfg by Embest)"s}},
		{"0014"s,   {"Q2 2014"s, "Compute Module 1"s,                "Compute Module"s, "1.0"s, "512 MB"s, "(Mfg by Embest)"s}},
		{"0015"s, 	{"?"s,       "A+"s,                              "A+"s,             "1.1"s, "256 MB / 512 MB"s, "(Mfg by Embest)"s}},
		{"a01040"s, {"Unknown"s, "2 Model B"s,                       "2 Model B"s,      "1.0"s, "1 GB"s, "(Mfg by Sony)"s}},
		{"a01041"s, {"Q1 2015"s, "2 Model B"s,                       "2 Model B"s,      "1.1"s, "1 GB"s, "(Mfg by Sony)"s}},
		{"a21041"s, {"Q1 2015"s, "2 Model B"s,                       "2 Model B"s,      "1.1"s, "1 GB"s, "(Mfg by Embest)"s}},
		{"a22042"s, {"Q3 2016"s, "2 Model B (with BCM2837)"s,        "2 Model B"s,      "1.2"s, "1 GB"s, "(Mfg by Embest)"s}},
		{"900021"s, {"Q3 2016"s, "A+"s,                              "A+"s,             "1.1"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"900032"s, {"Q2 2016?"s,"B+"s,                              "B+"s,             "1.2"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"900092"s, {"Q4 2015"s, "Zero"s,                            "Zero"s,           "1.2"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"900093"s, {"Q2 2016"s, "Zero"s,                            "Zero"s,           "1.3"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"920093"s, {"Q4 2016?"s,"Zero"s,                            "Zero"s,           "1.3"s, "512 MB"s, "(Mfg by Embest)"s}},
		{"9000c1"s, {"Q1 2017"s, "Zero W"s,                          "Zero"s,           "1.1"s, "512 MB"s, "(Mfg by Sony)"s}},
		{"a02082"s, {"Q1 2016"s, "3 Model B"s,                       "3 Model B"s,      "1.2"s, "1 GB"s, "(Mfg by Sony)"s}},
		{"a020a0"s, {"Q1 2017"s, "Compute Module 3 (and CM3 Lite)"s, "Compute Module"s, "1.0"s, "1 GB"s, "(Mfg by Sony)"s}},
		{"a22082"s, {"Q1 2016"s, "3 Model B"s,                       "3 Model B"s,      "1.2"s, "1 GB"s, "(Mfg by Embest)"s}},
		{"a32082"s, {"Q4 2016"s, "3 Model B"s,                       "3 Model B"s,      "1.2"s, "1 GB"s, "(Mfg by Sony Japan)"s}},
		{"a020d3"s, {"Q1 2018"s, "3 Model B+"s,                      "3 Model B"s,      "1.3"s, "1 GB"s, "(Mfg by Sony)"s}},
		{"9020e0"s, {"Q4 2018"s, "3 Model A+"s,                      "3 Model A"s,      "1.0"s, "512 MB"s, "(Mfg by Sony)"s}},
  };
  string Revision;
  string Release_Date;
  string Model_Strict;
  string Model;
  string PCB_Revision;
  string Memory;
  string Notes;

public:
  GetRPiModel(){
  	ifstream cpuinfo {"/proc/cpuinfo", ios::in};
  	if (!cpuinfo){
  		throw runtime_error("No cpuinfo file!");
  	}
  	for (string line ; getline(cpuinfo, line);) {
  		if (line.find("Revision	: " ) == 0){
  			Revision = line.substr(11);
	  		auto body = mp.at(Revision);
	  		Release_Date = get<0>(body);
	  		Model_Strict = get<1>(body);
	  		Model = get<2>(body);
	  		PCB_Revision = get<3>(body);
	  		Memory = get<4>(body);
	  		Notes = get<5>(body);
	  		return;
			}
  	}
  	throw runtime_error("No Revison info!");
  }
  string revision(){return Revision;};
  string release_date(){return Release_Date;};
  string model_strict(){return Model_Strict;};
  string model(){return Model;};
  string PCB_revision(){return PCB_Revision;};
  string memory(){return Memory;};
  string notes(){return Notes;};
};

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
