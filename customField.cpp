//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "customField.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
	// if too many rows
	if (height->Text.ToInt() > 16) {
		Form1->rows = 16;
	}
	else if (height->Text.ToInt() < 9) {
		Form1->rows = 9;
	}
	else {
		Form1->rows = height->Text.ToInt();
	}
	// if too many columns
	if (width->Text.ToInt() > 40) {
		Form1->cols = 40;
	}
	else if (width->Text.ToInt() < 9) {
		Form1->cols = 9;
	}
	else {
		Form1->cols = width->Text.ToInt();
	}
	// if too many bombs
	if (mines->Text.ToInt() > (Form1->cols * Form1->rows)-(Form1->cols + Form1->rows+2) /* mines->Text.ToInt() > 99*/ ) {
		Form1->amountOfBombs = (Form1->cols*Form1->rows)-(Form1->cols+Form1->rows - 1);
	}
	else {
		Form1->amountOfBombs = mines->Text.ToInt();
	}

	Form1->Image2Click(this);
    Form1->setWindowSize();
    this->Close();
}
//---------------------------------------------------------------------------
