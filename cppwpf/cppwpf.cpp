// cppwpf.cpp : メイン プロジェクト ファイルです。

#include "stdafx.h"
#include "cppwpf.h"

using System::STAThreadAttribute;
using System::String;
using System::Windows::Application;
using System::Windows::Window;


[STAThread]
int main(array<String ^> ^args)
{
	Application ^application = gcnew Application();
//	application->StartupUri = gcnew System::Uri("pack://application:,,,/MainView;component/MainWindow.xaml");
	application->Run( gcnew MainView::MainWindow() );
	return 0;
}
