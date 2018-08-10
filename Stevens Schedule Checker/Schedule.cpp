#include "Schedule.h"
#include <string>
#include "CheckSchedule.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
extern std::string s;

[STAThread]
//int main(array<String^>^ args)
//int WINAPI WinMainCRTStartup(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, char*, int nShowCmd)
{
	//FreeConsole();
	//System::Diagnostics::Debug::WriteLine(L" -- Object State or Tracing");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StevensScheduleChecker::Schedule form;
	Application::Run(%form);
	
	return 1;

}

/*
//System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader("TestFile.txt");
openFileDialog1->ShowDialog();
System::IO::StreamReader ^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
textBox1->Text = "HO";
//sr->ReadToEnd();
//MessageBox mb;
//mb.Show(sr->ReadToEnd());
//sr->Close();
*/