//---------------------------------------------------------------------------

#ifndef MineSwepperH
#define MineSwepperH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "Bitmaps.h"
#include "Cell.h"
#include "Board.h"
#include "HelperForm.h"
#include "customField.h"
#include "bestTimes.h"
#include "aboutMinesweeper.h"
#include "bestTimePopUpWindow.h"
#include <Vcl.Menus.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TImage *Image1;
	TLabel *Label1;
    TLabel *Label2;
    TImage *Image2;
    TTimer *Timer1;
	TMainMenu *MainMenu1;
	TMenuItem *Game1;
	TMenuItem *Help1;
	TMenuItem *New1;
	TMenuItem *N1;
	TMenuItem *Beginner1;
	TMenuItem *Intermediate1;
	TMenuItem *Expert1;
	TMenuItem *Custom1;
	TMenuItem *N2;
	TMenuItem *Marks1;
	TMenuItem *Color1;
	TMenuItem *Sound1;
	TMenuItem *N3;
	TMenuItem *Besttimes1;
	TMenuItem *N4;
	TMenuItem *Exit1;
	TMenuItem *Contents1;
	TMenuItem *Searchforhelpon1;
	TMenuItem *Usinghelp1;
	TMenuItem *N5;
	TMenuItem *Aboutmineswepper1;
	TMediaPlayer *MediaPlayer1;
    void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift, int X, int Y);
    void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall Image2Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall New1Click(TObject *Sender);
	void __fastcall Beginner1Click(TObject *Sender);
	void __fastcall Intermediate1Click(TObject *Sender);
	void __fastcall Expert1Click(TObject *Sender);
	void __fastcall Custom1Click(TObject *Sender);
	void __fastcall Color1Click(TObject *Sender);
	void __fastcall Besttimes1Click(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall Aboutmineswepper1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
    
private:	// User declarations


public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	Board *board;

	int rows = 9;
	int cols = 9;
	int amountOfBombs = 10;

	void setWindowSize();
	void playWinSound();
	void playLostSound();
	void playTickSound();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
