
#pragma once

class String
{
private:
	char * s;
	int len;
	void Print(std::ostream &) const;
public:
	String(const char * = "");
	String(const String &);
	~String();

	void SetString(const char *);
	const char * GetString() const;
	int GetLength() const { return len; }
	bool IsSymbol(char) const;
	void ChangeSymbol(int, char);
	bool IsStr(const char *) const;

	const String & operator=(const String &);
	friend std::ostream & operator<<(std::ostream &, const String &);
};

