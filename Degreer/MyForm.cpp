#include "MyForm.h"

// Am I in the mainfile?

using namespace System;
using namespace System::Windows::Forms; // I have called namespace System, BUT
// CINJ - C Is Not Java
// To be sure I'd better clarify subspace that I use

// creating form via STAThreadAttribute
// TODO: Give information about STAThreadAttribute
[STAThreadAttribute]
int main(array<String^>^ args) { // What is array<String^>^ args
	Application::EnableVisualStyles(); // What is it?
	Application::SetCompatibleTextRenderingDefault(false); // What is it?
	Degreer::MyForm form; // 
	// It is: 
	// You have project Degreer and MyForm as a part of Degreer
	// From now we call MyForm, The Part of The Degreer, as "form"
	// We can change form into formqq or anything
	Application::Run(%form);
	// Just reshape %form aswell. 
	// TODO: for why do we have %
}

