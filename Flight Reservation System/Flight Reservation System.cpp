#include "pch.h"
#include "frmMain.h"



using namespace FlightReservationSystem;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    frmMain^ mainForm = gcnew frmMain();
    Application::Run(mainForm);

    return 0;
}