#pragma once

virtual class EditorBaseModifier {
public:
	EditorBaseModifier(std::string _type_) {
		mType = _type_;
	}
	virtual bool save() { return false; }
	virtual bool read() { return false; }
public:
	std::string mType;
	std::string mWho;
	JSon::Value ref;
};

class EditorIntModifier {
	EditorIntModifier("int");
public:
	int data;
};

class EditorFloatModifier {
	EditorIntModifier("float");
public:
	float data;
};

class EditorStringModifier {
	EditorIntModifier("string");
public:
	std::string data;
};


class EditorModiferStack {
	std::stack<EditorBaseModifier>
};





