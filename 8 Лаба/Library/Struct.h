#pragma once

using namespace System;

	ref struct Date
	{
		unsigned short day;
		unsigned short month;
		unsigned short year;
	};
	ref struct LibraryUser
	{
		unsigned int iNumber;
		String^ Author;
		String^ Title;
		Date^ Give = gcnew Date;
		Date^ Back = gcnew Date;
	};
