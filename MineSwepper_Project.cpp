//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("HelperForm.cpp", Form2);
USEFORM("MineSwepper.cpp", Form1);
USEFORM("customField.cpp", Form3);
USEFORM("aboutMinesweeper.cpp", Form5);
USEFORM("bestTimes.cpp", Form4);
USEFORM("bestTimePopUpWindow.cpp", Form6);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
    try
    {
         Application->Initialize();
         Application->MainFormOnTaskBar = true;
         Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    catch (...)
    {
         try
         {
             throw Exception("");
         }
         catch (Exception &exception)
         {
             Application->ShowException(&exception);
         }
    }
    return 0;
}
//---------------------------------------------------------------------------
