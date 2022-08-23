#pragma once

#include <stdint.h>
#include <string>


class FileLoggerSingletone
{
public:
	static FileLoggerSingletone& getInstance()
	{
		static FileLoggerSingletone theInstance;
		return theInstance;
	}

	void __fastcall OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const std::string& str);

	void __fastcall WriteToLog(const std::string& str, int n);

	void __fastcall WriteToLog(const std::string& str, double d);

private:
	FileLoggerSingletone(){}
	FileLoggerSingletone(const FileLoggerSingletone& root) = delete;
	FileLoggerSingletone& operator=(const FileLoggerSingletone&) = delete;
};


	

	

