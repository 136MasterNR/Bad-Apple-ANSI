#include <iostream>
#include <windows.h>
#include "frames.h"

void SetConsoleFontSize(int size) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = size;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    wcscpy_s(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(hConsole, FALSE, &cfi);
}

void SetConsoleWindowSize(int width, int height) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD largestSize = GetLargestConsoleWindowSize(hConsole);
    if (width > largestSize.X) width = largestSize.X;
    if (height > largestSize.Y) height = largestSize.Y;

    COORD bufferSize;
    bufferSize.X = width;
    bufferSize.Y = height;
    SetConsoleScreenBufferSize(hConsole, bufferSize);

    SMALL_RECT windowSize;
    windowSize.Left = 0;
    windowSize.Top = 0;
    windowSize.Right = width - 1;
    windowSize.Bottom = height - 1;
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}

int main() {
    SetConsoleFontSize(4);

	// Real: w640 h480   (480/2)+2
    // SetConsoleWindowSize(640, 242);

    // Real: w320 h242   (242/2)+2
    SetConsoleWindowSize(320, 123);
    

	system("CHCP 65001>NUL");
	std::cout << "\e[?25l"; // Hide Cursor
	
while (true) {
		frame1();
		usleep(5000);
		std::cout << "\e[121A";

		frame2();
		usleep(5000);
		std::cout << "\e[121A";

		frame3();
		usleep(5000);
		std::cout << "\e[121A";

		frame4();
		usleep(5000);
		std::cout << "\e[121A";

		frame5();
		usleep(5000);
		std::cout << "\e[121A";

		frame6();
		usleep(5000);
		std::cout << "\e[121A";

		frame7();
		usleep(5000);
		std::cout << "\e[121A";

		frame8();
		usleep(5000);
		std::cout << "\e[121A";

		frame9();
		usleep(5000);
		std::cout << "\e[121A";

		frame10();
		usleep(5000);
		std::cout << "\e[121A";

		frame11();
		usleep(5000);
		std::cout << "\e[121A";

		frame12();
		usleep(5000);
		std::cout << "\e[121A";

		frame13();
		usleep(5000);
		std::cout << "\e[121A";

		frame14();
		usleep(5000);
		std::cout << "\e[121A";

		frame15();
		usleep(5000);
		std::cout << "\e[121A";

		frame16();
		usleep(5000);
		std::cout << "\e[121A";

		frame17();
		usleep(5000);
		std::cout << "\e[121A";

		frame18();
		usleep(5000);
		std::cout << "\e[121A";

		frame19();
		usleep(5000);
		std::cout << "\e[121A";

		frame20();
		usleep(5000);
		std::cout << "\e[121A";

		frame21();
		usleep(5000);
		std::cout << "\e[121A";

		frame22();
		usleep(5000);
		std::cout << "\e[121A";

		frame23();
		usleep(5000);
		std::cout << "\e[121A";

		frame24();
		usleep(5000);
		std::cout << "\e[121A";

		frame25();
		usleep(5000);
		std::cout << "\e[121A";

		frame26();
		usleep(5000);
		std::cout << "\e[121A";

		frame27();
		usleep(5000);
		std::cout << "\e[121A";

		frame28();
		usleep(5000);
		std::cout << "\e[121A";

		frame29();
		usleep(5000);
		std::cout << "\e[121A";

		frame30();
		usleep(5000);
		std::cout << "\e[121A";

		frame31();
		usleep(5000);
		std::cout << "\e[121A";

		frame32();
		usleep(5000);
		std::cout << "\e[121A";

		frame33();
		usleep(5000);
		std::cout << "\e[121A";

		frame34();
		usleep(5000);
		std::cout << "\e[121A";

		frame35();
		usleep(5000);
		std::cout << "\e[121A";

		frame36();
		usleep(5000);
		std::cout << "\e[121A";

		frame37();
		usleep(5000);
		std::cout << "\e[121A";

		frame38();
		usleep(5000);
		std::cout << "\e[121A";

		frame39();
		usleep(5000);
		std::cout << "\e[121A";

		frame40();
		usleep(5000);
		std::cout << "\e[121A";

		frame41();
		usleep(5000);
		std::cout << "\e[121A";

		frame42();
		usleep(5000);
		std::cout << "\e[121A";

		frame43();
		usleep(5000);
		std::cout << "\e[121A";

		frame44();
		usleep(5000);
		std::cout << "\e[121A";

		frame45();
		usleep(5000);
		std::cout << "\e[121A";

		frame46();
		usleep(5000);
		std::cout << "\e[121A";

		frame47();
		usleep(5000);
		std::cout << "\e[121A";

		frame48();
		usleep(5000);
		std::cout << "\e[121A";

		frame49();
		usleep(5000);
		std::cout << "\e[121A";

		frame50();
		usleep(5000);
		std::cout << "\e[121A";

		frame51();
		usleep(5000);
		std::cout << "\e[121A";

		frame52();
		usleep(5000);
		std::cout << "\e[121A";

		frame53();
		usleep(5000);
		std::cout << "\e[121A";

		frame54();
		usleep(5000);
		std::cout << "\e[121A";

		frame55();
		usleep(5000);
		std::cout << "\e[121A";

		frame56();
		usleep(5000);
		std::cout << "\e[121A";

		frame57();
		usleep(5000);
		std::cout << "\e[121A";

		frame58();
		usleep(5000);
		std::cout << "\e[121A";

		frame59();
		usleep(5000);
		std::cout << "\e[121A";

		frame60();
		usleep(5000);
		std::cout << "\e[121A";

		frame61();
		usleep(5000);
		std::cout << "\e[121A";

		frame62();
		usleep(5000);
		std::cout << "\e[121A";

		frame63();
		usleep(5000);
		std::cout << "\e[121A";

		frame64();
		usleep(5000);
		std::cout << "\e[121A";

		frame65();
		usleep(5000);
		std::cout << "\e[121A";

		frame66();
		usleep(5000);
		std::cout << "\e[121A";

		frame67();
		usleep(5000);
		std::cout << "\e[121A";

		frame68();
		usleep(5000);
		std::cout << "\e[121A";

		frame69();
		usleep(5000);
		std::cout << "\e[121A";

		frame70();
		usleep(5000);
		std::cout << "\e[121A";

		frame71();
		usleep(5000);
		std::cout << "\e[121A";

		frame72();
		usleep(5000);
		std::cout << "\e[121A";

		frame73();
		usleep(5000);
		std::cout << "\e[121A";

		frame74();
		usleep(5000);
		std::cout << "\e[121A";

		frame75();
		usleep(5000);
		std::cout << "\e[121A";

		frame76();
		usleep(5000);
		std::cout << "\e[121A";

		frame77();
		usleep(5000);
		std::cout << "\e[121A";

		frame78();
		usleep(5000);
		std::cout << "\e[121A";

		frame79();
		usleep(5000);
		std::cout << "\e[121A";

		frame80();
		usleep(5000);
		std::cout << "\e[121A";

		frame81();
		usleep(5000);
		std::cout << "\e[121A";

		frame82();
		usleep(5000);
		std::cout << "\e[121A";

		frame83();
		usleep(5000);
		std::cout << "\e[121A";

		frame84();
		usleep(5000);
		std::cout << "\e[121A";

		frame85();
		usleep(5000);
		std::cout << "\e[121A";

		frame86();
		usleep(5000);
		std::cout << "\e[121A";

		frame87();
		usleep(5000);
		std::cout << "\e[121A";

		frame88();
		usleep(5000);
		std::cout << "\e[121A";

		frame89();
		usleep(5000);
		std::cout << "\e[121A";

		frame90();
		usleep(5000);
		std::cout << "\e[121A";

		frame91();
		usleep(5000);
		std::cout << "\e[121A";

		frame92();
		usleep(5000);
		std::cout << "\e[121A";

		frame93();
		usleep(5000);
		std::cout << "\e[121A";

		frame94();
		usleep(5000);
		std::cout << "\e[121A";

		frame95();
		usleep(5000);
		std::cout << "\e[121A";

		frame96();
		usleep(5000);
		std::cout << "\e[121A";

		frame97();
		usleep(5000);
		std::cout << "\e[121A";

		frame98();
		usleep(5000);
		std::cout << "\e[121A";

		frame99();
		usleep(5000);
		std::cout << "\e[121A";

		frame100();
		usleep(5000);
		std::cout << "\e[121A";

		frame101();
		usleep(5000);
		std::cout << "\e[121A";

		frame102();
		usleep(5000);
		std::cout << "\e[121A";

		frame103();
		usleep(5000);
		std::cout << "\e[121A";

		frame104();
		usleep(5000);
		std::cout << "\e[121A";

		frame105();
		usleep(5000);
		std::cout << "\e[121A";

		frame106();
		usleep(5000);
		std::cout << "\e[121A";

		frame107();
		usleep(5000);
		std::cout << "\e[121A";

		frame108();
		usleep(5000);
		std::cout << "\e[121A";

		frame109();
		usleep(5000);
		std::cout << "\e[121A";

		frame110();
		usleep(5000);
		std::cout << "\e[121A";

		frame111();
		usleep(5000);
		std::cout << "\e[121A";

		frame112();
		usleep(5000);
		std::cout << "\e[121A";

		frame113();
		usleep(5000);
		std::cout << "\e[121A";

		frame114();
		usleep(5000);
		std::cout << "\e[121A";

		frame115();
		usleep(5000);
		std::cout << "\e[121A";

		frame116();
		usleep(5000);
		std::cout << "\e[121A";

		frame117();
		usleep(5000);
		std::cout << "\e[121A";

		frame118();
		usleep(5000);
		std::cout << "\e[121A";

		frame119();
		usleep(5000);
		std::cout << "\e[121A";

		frame120();
		usleep(5000);
		std::cout << "\e[121A";

		frame121();
		usleep(5000);
		std::cout << "\e[121A";

		frame122();
		usleep(5000);
		std::cout << "\e[121A";

		frame123();
		usleep(5000);
		std::cout << "\e[121A";

		frame124();
		usleep(5000);
		std::cout << "\e[121A";

		frame125();
		usleep(5000);
		std::cout << "\e[121A";

		frame126();
		usleep(5000);
		std::cout << "\e[121A";

		frame127();
		usleep(5000);
		std::cout << "\e[121A";

		frame128();
		usleep(5000);
		std::cout << "\e[121A";

		frame129();
		usleep(5000);
		std::cout << "\e[121A";

		frame130();
		usleep(5000);
		std::cout << "\e[121A";

		frame131();
		usleep(5000);
		std::cout << "\e[121A";

		frame132();
		usleep(5000);
		std::cout << "\e[121A";

		frame133();
		usleep(5000);
		std::cout << "\e[121A";

		frame134();
		usleep(5000);
		std::cout << "\e[121A";

		frame135();
		usleep(5000);
		std::cout << "\e[121A";

		frame136();
		usleep(5000);
		std::cout << "\e[121A";

		frame137();
		usleep(5000);
		std::cout << "\e[121A";

		frame138();
		usleep(5000);
		std::cout << "\e[121A";

		frame139();
		usleep(5000);
		std::cout << "\e[121A";

		frame140();
		usleep(5000);
		std::cout << "\e[121A";

		frame141();
		usleep(5000);
		std::cout << "\e[121A";

		frame142();
		usleep(5000);
		std::cout << "\e[121A";

		frame143();
		usleep(5000);
		std::cout << "\e[121A";

		frame144();
		usleep(5000);
		std::cout << "\e[121A";

		frame145();
		usleep(5000);
		std::cout << "\e[121A";

		frame146();
		usleep(5000);
		std::cout << "\e[121A";

		frame147();
		usleep(5000);
		std::cout << "\e[121A";

		frame148();
		usleep(5000);
		std::cout << "\e[121A";

		frame149();
		usleep(5000);
		std::cout << "\e[121A";

		frame150();
		usleep(5000);
		std::cout << "\e[121A";

		frame151();
		usleep(5000);
		std::cout << "\e[121A";

		frame152();
		usleep(5000);
		std::cout << "\e[121A";

		frame153();
		usleep(5000);
		std::cout << "\e[121A";

		frame154();
		usleep(5000);
		std::cout << "\e[121A";

		frame155();
		usleep(5000);
		std::cout << "\e[121A";

		frame156();
		usleep(5000);
		std::cout << "\e[121A";

		frame157();
		usleep(5000);
		std::cout << "\e[121A";

		frame158();
		usleep(5000);
		std::cout << "\e[121A";

		frame159();
		usleep(5000);
		std::cout << "\e[121A";

		frame160();
		usleep(5000);
		std::cout << "\e[121A";

		frame161();
		usleep(5000);
		std::cout << "\e[121A";

		frame162();
		usleep(5000);
		std::cout << "\e[121A";

		frame163();
		usleep(5000);
		std::cout << "\e[121A";

		frame164();
		usleep(5000);
		std::cout << "\e[121A";

		frame165();
		usleep(5000);
		std::cout << "\e[121A";

		frame166();
		usleep(5000);
		std::cout << "\e[121A";

		frame167();
		usleep(5000);
		std::cout << "\e[121A";

		frame168();
		usleep(5000);
		std::cout << "\e[121A";

		frame169();
		usleep(5000);
		std::cout << "\e[121A";

		frame170();
		usleep(5000);
		std::cout << "\e[121A";

		frame171();
		usleep(5000);
		std::cout << "\e[121A";

		frame172();
		usleep(5000);
		std::cout << "\e[121A";

		frame173();
		usleep(5000);
		std::cout << "\e[121A";

		frame174();
		usleep(5000);
		std::cout << "\e[121A";

		frame175();
		usleep(5000);
		std::cout << "\e[121A";

		frame176();
		usleep(5000);
		std::cout << "\e[121A";

		frame177();
		usleep(5000);
		std::cout << "\e[121A";

		frame178();
		usleep(5000);
		std::cout << "\e[121A";

		frame179();
		usleep(5000);
		std::cout << "\e[121A";

		frame180();
		usleep(5000);
		std::cout << "\e[121A";

		frame181();
		usleep(5000);
		std::cout << "\e[121A";

		frame182();
		usleep(5000);
		std::cout << "\e[121A";

		frame183();
		usleep(5000);
		std::cout << "\e[121A";

		frame184();
		usleep(5000);
		std::cout << "\e[121A";

		frame185();
		usleep(5000);
		std::cout << "\e[121A";

		frame186();
		usleep(5000);
		std::cout << "\e[121A";

		frame187();
		usleep(5000);
		std::cout << "\e[121A";

		frame188();
		usleep(5000);
		std::cout << "\e[121A";

		frame189();
		usleep(5000);
		std::cout << "\e[121A";

		frame190();
		usleep(5000);
		std::cout << "\e[121A";

		frame191();
		usleep(5000);
		std::cout << "\e[121A";

		frame192();
		usleep(5000);
		std::cout << "\e[121A";

		frame193();
		usleep(5000);
		std::cout << "\e[121A";

		frame194();
		usleep(5000);
		std::cout << "\e[121A";

		frame195();
		usleep(5000);
		std::cout << "\e[121A";

		frame196();
		usleep(5000);
		std::cout << "\e[121A";

		frame197();
		usleep(5000);
		std::cout << "\e[121A";

		frame198();
		usleep(5000);
		std::cout << "\e[121A";

		frame199();
		usleep(5000);
		std::cout << "\e[121A";

		frame200();
		usleep(5000);
		std::cout << "\e[121A";

		frame201();
		usleep(5000);
		std::cout << "\e[121A";

		frame202();
		usleep(5000);
		std::cout << "\e[121A";

		frame203();
		usleep(5000);
		std::cout << "\e[121A";

		frame204();
		usleep(5000);
		std::cout << "\e[121A";

		frame205();
		usleep(5000);
		std::cout << "\e[121A";

		frame206();
		usleep(5000);
		std::cout << "\e[121A";

		frame207();
		usleep(5000);
		std::cout << "\e[121A";

		frame208();
		usleep(5000);
		std::cout << "\e[121A";

		frame209();
		usleep(5000);
		std::cout << "\e[121A";

		frame210();
		usleep(5000);
		std::cout << "\e[121A";

		frame211();
		usleep(5000);
		std::cout << "\e[121A";

		frame212();
		usleep(5000);
		std::cout << "\e[121A";

		frame213();
		usleep(5000);
		std::cout << "\e[121A";

		frame214();
		usleep(5000);
		std::cout << "\e[121A";

		frame215();
		usleep(5000);
		std::cout << "\e[121A";

		frame216();
		usleep(5000);
		std::cout << "\e[121A";

		frame217();
		usleep(5000);
		std::cout << "\e[121A";

		frame218();
		usleep(5000);
		std::cout << "\e[121A";

		frame219();
		usleep(5000);
		std::cout << "\e[121A";

		frame220();
		usleep(5000);
		std::cout << "\e[121A";

		frame221();
		usleep(5000);
		std::cout << "\e[121A";

		frame222();
		usleep(5000);
		std::cout << "\e[121A";

		frame223();
		usleep(5000);
		std::cout << "\e[121A";

		frame224();
		usleep(5000);
		std::cout << "\e[121A";

		frame225();
		usleep(5000);
		std::cout << "\e[121A";

		frame226();
		usleep(5000);
		std::cout << "\e[121A";

		frame227();
		usleep(5000);
		std::cout << "\e[121A";

		frame228();
		usleep(5000);
		std::cout << "\e[121A";

		frame229();
		usleep(5000);
		std::cout << "\e[121A";

		frame230();
		usleep(5000);
		std::cout << "\e[121A";

		frame231();
		usleep(5000);
		std::cout << "\e[121A";

		frame232();
		usleep(5000);
		std::cout << "\e[121A";

		frame233();
		usleep(5000);
		std::cout << "\e[121A";

		frame234();
		usleep(5000);
		std::cout << "\e[121A";

		frame235();
		usleep(5000);
		std::cout << "\e[121A";

		frame236();
		usleep(5000);
		std::cout << "\e[121A";

		frame237();
		usleep(5000);
		std::cout << "\e[121A";

		frame238();
		usleep(5000);
		std::cout << "\e[121A";

		frame239();
		usleep(5000);
		std::cout << "\e[121A";

		frame240();
		usleep(5000);
		std::cout << "\e[121A";

		frame241();
		usleep(5000);
		std::cout << "\e[121A";

		frame242();
		usleep(5000);
		std::cout << "\e[121A";

		frame243();
		usleep(5000);
		std::cout << "\e[121A";

		frame244();
		usleep(5000);
		std::cout << "\e[121A";

		frame245();
		usleep(5000);
		std::cout << "\e[121A";

		frame246();
		usleep(5000);
		std::cout << "\e[121A";

		frame247();
		usleep(5000);
		std::cout << "\e[121A";

		frame248();
		usleep(5000);
		std::cout << "\e[121A";

		frame249();
		usleep(5000);
		std::cout << "\e[121A";

		frame250();
		usleep(5000);
		std::cout << "\e[121A";

		frame251();
		usleep(5000);
		std::cout << "\e[121A";

		frame252();
		usleep(5000);
		std::cout << "\e[121A";

		frame253();
		usleep(5000);
		std::cout << "\e[121A";

		frame254();
		usleep(5000);
		std::cout << "\e[121A";

		frame255();
		usleep(5000);
		std::cout << "\e[121A";

		frame256();
		usleep(5000);
		std::cout << "\e[121A";

		frame257();
		usleep(5000);
		std::cout << "\e[121A";

		frame258();
		usleep(5000);
		std::cout << "\e[121A";

		frame259();
		usleep(5000);
		std::cout << "\e[121A";

		frame260();
		usleep(5000);
		std::cout << "\e[121A";

		frame261();
		usleep(5000);
		std::cout << "\e[121A";

		frame262();
		usleep(5000);
		std::cout << "\e[121A";

		frame263();
		usleep(5000);
		std::cout << "\e[121A";

		frame264();
		usleep(5000);
		std::cout << "\e[121A";

		frame265();
		usleep(5000);
		std::cout << "\e[121A";

		frame266();
		usleep(5000);
		std::cout << "\e[121A";

		frame267();
		usleep(5000);
		std::cout << "\e[121A";

		frame268();
		usleep(5000);
		std::cout << "\e[121A";

		frame269();
		usleep(5000);
		std::cout << "\e[121A";

		frame270();
		usleep(5000);
		std::cout << "\e[121A";

		frame271();
		usleep(5000);
		std::cout << "\e[121A";

		frame272();
		usleep(5000);
		std::cout << "\e[121A";

		frame273();
		usleep(5000);
		std::cout << "\e[121A";

		frame274();
		usleep(5000);
		std::cout << "\e[121A";

		frame275();
		usleep(5000);
		std::cout << "\e[121A";

		frame276();
		usleep(5000);
		std::cout << "\e[121A";

		frame277();
		usleep(5000);
		std::cout << "\e[121A";

		frame278();
		usleep(5000);
		std::cout << "\e[121A";

		frame279();
		usleep(5000);
		std::cout << "\e[121A";

		frame280();
		usleep(5000);
		std::cout << "\e[121A";

		frame281();
		usleep(5000);
		std::cout << "\e[121A";

		frame282();
		usleep(5000);
		std::cout << "\e[121A";

		frame283();
		usleep(5000);
		std::cout << "\e[121A";

		frame284();
		usleep(5000);
		std::cout << "\e[121A";

		frame285();
		usleep(5000);
		std::cout << "\e[121A";

		frame286();
		usleep(5000);
		std::cout << "\e[121A";

		frame287();
		usleep(5000);
		std::cout << "\e[121A";

		frame288();
		usleep(5000);
		std::cout << "\e[121A";

		frame289();
		usleep(5000);
		std::cout << "\e[121A";

		frame290();
		usleep(5000);
		std::cout << "\e[121A";

		frame291();
		usleep(5000);
		std::cout << "\e[121A";

		frame292();
		usleep(5000);
		std::cout << "\e[121A";

		frame293();
		usleep(5000);
		std::cout << "\e[121A";

		frame294();
		usleep(5000);
		std::cout << "\e[121A";

		frame295();
		usleep(5000);
		std::cout << "\e[121A";

		frame296();
		usleep(5000);
		std::cout << "\e[121A";

		frame297();
		usleep(5000);
		std::cout << "\e[121A";

		frame298();
		usleep(5000);
		std::cout << "\e[121A";

		frame299();
		usleep(5000);
		std::cout << "\e[121A";

		frame300();
		usleep(5000);
		std::cout << "\e[121A";

		frame301();
		usleep(5000);
		std::cout << "\e[121A";

		frame302();
		usleep(5000);
		std::cout << "\e[121A";

		frame303();
		usleep(5000);
		std::cout << "\e[121A";

		frame304();
		usleep(5000);
		std::cout << "\e[121A";

		frame305();
		usleep(5000);
		std::cout << "\e[121A";

		frame306();
		usleep(5000);
		std::cout << "\e[121A";

		frame307();
		usleep(5000);
		std::cout << "\e[121A";

		frame308();
		usleep(5000);
		std::cout << "\e[121A";

		frame309();
		usleep(5000);
		std::cout << "\e[121A";

		frame310();
		usleep(5000);
		std::cout << "\e[121A";

		frame311();
		usleep(5000);
		std::cout << "\e[121A";

		frame312();
		usleep(5000);
		std::cout << "\e[121A";

		frame313();
		usleep(5000);
		std::cout << "\e[121A";

		frame314();
		usleep(5000);
		std::cout << "\e[121A";

		frame315();
		usleep(5000);
		std::cout << "\e[121A";

		frame316();
		usleep(5000);
		std::cout << "\e[121A";

		frame317();
		usleep(5000);
		std::cout << "\e[121A";

		frame318();
		usleep(5000);
		std::cout << "\e[121A";

		frame319();
		usleep(5000);
		std::cout << "\e[121A";

		frame320();
		usleep(5000);
		std::cout << "\e[121A";

		frame321();
		usleep(5000);
		std::cout << "\e[121A";

		frame322();
		usleep(5000);
		std::cout << "\e[121A";

		frame323();
		usleep(5000);
		std::cout << "\e[121A";

		frame324();
		usleep(5000);
		std::cout << "\e[121A";

		frame325();
		usleep(5000);
		std::cout << "\e[121A";

		frame326();
		usleep(5000);
		std::cout << "\e[121A";

		frame327();
		usleep(5000);
		std::cout << "\e[121A";

		frame328();
		usleep(5000);
		std::cout << "\e[121A";

		frame329();
		usleep(5000);
		std::cout << "\e[121A";

		frame330();
		usleep(5000);
		std::cout << "\e[121A";

		frame331();
		usleep(5000);
		std::cout << "\e[121A";

		frame332();
		usleep(5000);
		std::cout << "\e[121A";

		frame333();
		usleep(5000);
		std::cout << "\e[121A";

		frame334();
		usleep(5000);
		std::cout << "\e[121A";

		frame335();
		usleep(5000);
		std::cout << "\e[121A";

		frame336();
		usleep(5000);
		std::cout << "\e[121A";

		frame337();
		usleep(5000);
		std::cout << "\e[121A";

		frame338();
		usleep(5000);
		std::cout << "\e[121A";

		frame339();
		usleep(5000);
		std::cout << "\e[121A";

		frame340();
		usleep(5000);
		std::cout << "\e[121A";

		frame341();
		usleep(5000);
		std::cout << "\e[121A";

		frame342();
		usleep(5000);
		std::cout << "\e[121A";

		frame343();
		usleep(5000);
		std::cout << "\e[121A";

		frame344();
		usleep(5000);
		std::cout << "\e[121A";

		frame345();
		usleep(5000);
		std::cout << "\e[121A";

		frame346();
		usleep(5000);
		std::cout << "\e[121A";

		frame347();
		usleep(5000);
		std::cout << "\e[121A";

		frame348();
		usleep(5000);
		std::cout << "\e[121A";

		frame349();
		usleep(5000);
		std::cout << "\e[121A";

		frame350();
		usleep(5000);
		std::cout << "\e[121A";

		frame351();
		usleep(5000);
		std::cout << "\e[121A";

		frame352();
		usleep(5000);
		std::cout << "\e[121A";

		frame353();
		usleep(5000);
		std::cout << "\e[121A";

		frame354();
		usleep(5000);
		std::cout << "\e[121A";

		frame355();
		usleep(5000);
		std::cout << "\e[121A";

		frame356();
		usleep(5000);
		std::cout << "\e[121A";

		frame357();
		usleep(5000);
		std::cout << "\e[121A";

		frame358();
		usleep(5000);
		std::cout << "\e[121A";

		frame359();
		usleep(5000);
		std::cout << "\e[121A";

		frame360();
		usleep(5000);
		std::cout << "\e[121A";

		frame361();
		usleep(5000);
		std::cout << "\e[121A";

		frame362();
		usleep(5000);
		std::cout << "\e[121A";

		frame363();
		usleep(5000);
		std::cout << "\e[121A";

		frame364();
		usleep(5000);
		std::cout << "\e[121A";

		frame365();
		usleep(5000);
		std::cout << "\e[121A";

		frame366();
		usleep(5000);
		std::cout << "\e[121A";

		frame367();
		usleep(5000);
		std::cout << "\e[121A";

		frame368();
		usleep(5000);
		std::cout << "\e[121A";

		frame369();
		usleep(5000);
		std::cout << "\e[121A";

		frame370();
		usleep(5000);
		std::cout << "\e[121A";

		frame371();
		usleep(5000);
		std::cout << "\e[121A";

		frame372();
		usleep(5000);
		std::cout << "\e[121A";

		frame373();
		usleep(5000);
		std::cout << "\e[121A";

		frame374();
		usleep(5000);
		std::cout << "\e[121A";

		frame375();
		usleep(5000);
		std::cout << "\e[121A";

		frame376();
		usleep(5000);
		std::cout << "\e[121A";

		frame377();
		usleep(5000);
		std::cout << "\e[121A";

		frame378();
		usleep(5000);
		std::cout << "\e[121A";

		frame379();
		usleep(5000);
		std::cout << "\e[121A";

		frame380();
		usleep(5000);
		std::cout << "\e[121A";

		frame381();
		usleep(5000);
		std::cout << "\e[121A";

		frame382();
		usleep(5000);
		std::cout << "\e[121A";

		frame383();
		usleep(5000);
		std::cout << "\e[121A";

		frame384();
		usleep(5000);
		std::cout << "\e[121A";

		frame385();
		usleep(5000);
		std::cout << "\e[121A";

		frame386();
		usleep(5000);
		std::cout << "\e[121A";

		frame387();
		usleep(5000);
		std::cout << "\e[121A";

		frame388();
		usleep(5000);
		std::cout << "\e[121A";

		frame389();
		usleep(5000);
		std::cout << "\e[121A";

		frame390();
		usleep(5000);
		std::cout << "\e[121A";

		frame391();
		usleep(5000);
		std::cout << "\e[121A";

		frame392();
		usleep(5000);
		std::cout << "\e[121A";

		frame393();
		usleep(5000);
		std::cout << "\e[121A";

		frame394();
		usleep(5000);
		std::cout << "\e[121A";

		frame395();
		usleep(5000);
		std::cout << "\e[121A";

		frame396();
		usleep(5000);
		std::cout << "\e[121A";

		frame397();
		usleep(5000);
		std::cout << "\e[121A";

		frame398();
		usleep(5000);
		std::cout << "\e[121A";

		frame399();
		usleep(5000);
		std::cout << "\e[121A";

		frame400();
		usleep(5000);
		std::cout << "\e[121A";

		frame401();
		usleep(5000);
		std::cout << "\e[121A";

		frame402();
		usleep(5000);
		std::cout << "\e[121A";

		frame403();
		usleep(5000);
		std::cout << "\e[121A";

		frame404();
		usleep(5000);
		std::cout << "\e[121A";

		frame405();
		usleep(5000);
		std::cout << "\e[121A";

		frame406();
		usleep(5000);
		std::cout << "\e[121A";

		frame407();
		usleep(5000);
		std::cout << "\e[121A";

		frame408();
		usleep(5000);
		std::cout << "\e[121A";

		frame409();
		usleep(5000);
		std::cout << "\e[121A";

		frame410();
		usleep(5000);
		std::cout << "\e[121A";

		frame411();
		usleep(5000);
		std::cout << "\e[121A";

		frame412();
		usleep(5000);
		std::cout << "\e[121A";

		frame413();
		usleep(5000);
		std::cout << "\e[121A";

		frame414();
		usleep(5000);
		std::cout << "\e[121A";

		frame415();
		usleep(5000);
		std::cout << "\e[121A";

		frame416();
		usleep(5000);
		std::cout << "\e[121A";

		frame417();
		usleep(5000);
		std::cout << "\e[121A";

		frame418();
		usleep(5000);
		std::cout << "\e[121A";

		frame419();
		usleep(5000);
		std::cout << "\e[121A";

		frame420();
		usleep(5000);
		std::cout << "\e[121A";

		frame421();
		usleep(5000);
		std::cout << "\e[121A";

		frame422();
		usleep(5000);
		std::cout << "\e[121A";

		frame423();
		usleep(5000);
		std::cout << "\e[121A";

		frame424();
		usleep(5000);
		std::cout << "\e[121A";

		frame425();
		usleep(5000);
		std::cout << "\e[121A";

		frame426();
		usleep(5000);
		std::cout << "\e[121A";

		frame427();
		usleep(5000);
		std::cout << "\e[121A";

		frame428();
		usleep(5000);
		std::cout << "\e[121A";

		frame429();
		usleep(5000);
		std::cout << "\e[121A";

		frame430();
		usleep(5000);
		std::cout << "\e[121A";

		frame431();
		usleep(5000);
		std::cout << "\e[121A";

		frame432();
		usleep(5000);
		std::cout << "\e[121A";

		frame433();
		usleep(5000);
		std::cout << "\e[121A";

		frame434();
		usleep(5000);
		std::cout << "\e[121A";

		frame435();
		usleep(5000);
		std::cout << "\e[121A";

		frame436();
		usleep(5000);
		std::cout << "\e[121A";

		frame437();
		usleep(5000);
		std::cout << "\e[121A";

		frame438();
		usleep(5000);
		std::cout << "\e[121A";

		frame439();
		usleep(5000);
		std::cout << "\e[121A";

		frame440();
		usleep(5000);
		std::cout << "\e[121A";

		frame441();
		usleep(5000);
		std::cout << "\e[121A";

		frame442();
		usleep(5000);
		std::cout << "\e[121A";

		frame443();
		usleep(5000);
		std::cout << "\e[121A";

		frame444();
		usleep(5000);
		std::cout << "\e[121A";

		frame445();
		usleep(5000);
		std::cout << "\e[121A";

		frame446();
		usleep(5000);
		std::cout << "\e[121A";

		frame447();
		usleep(5000);
		std::cout << "\e[121A";

		frame448();
		usleep(5000);
		std::cout << "\e[121A";

		frame449();
		usleep(5000);
		std::cout << "\e[121A";

		frame450();
		usleep(5000);
		std::cout << "\e[121A";

		frame451();
		usleep(5000);
		std::cout << "\e[121A";

		frame452();
		usleep(5000);
		std::cout << "\e[121A";

		frame453();
		usleep(5000);
		std::cout << "\e[121A";

		frame454();
		usleep(5000);
		std::cout << "\e[121A";

		frame455();
		usleep(5000);
		std::cout << "\e[121A";

		frame456();
		usleep(5000);
		std::cout << "\e[121A";

		frame457();
		usleep(5000);
		std::cout << "\e[121A";

		frame458();
		usleep(5000);
		std::cout << "\e[121A";

		frame459();
		usleep(5000);
		std::cout << "\e[121A";

		frame460();
		usleep(5000);
		std::cout << "\e[121A";

		frame461();
		usleep(5000);
		std::cout << "\e[121A";

		frame462();
		usleep(5000);
		std::cout << "\e[121A";

		frame463();
		usleep(5000);
		std::cout << "\e[121A";

		frame464();
		usleep(5000);
		std::cout << "\e[121A";

		frame465();
		usleep(5000);
		std::cout << "\e[121A";

		frame466();
		usleep(5000);
		std::cout << "\e[121A";

		frame467();
		usleep(5000);
		std::cout << "\e[121A";

		frame468();
		usleep(5000);
		std::cout << "\e[121A";

		frame469();
		usleep(5000);
		std::cout << "\e[121A";

		frame470();
		usleep(5000);
		std::cout << "\e[121A";

		frame471();
		usleep(5000);
		std::cout << "\e[121A";

		frame472();
		usleep(5000);
		std::cout << "\e[121A";

		frame473();
		usleep(5000);
		std::cout << "\e[121A";

		frame474();
		usleep(5000);
		std::cout << "\e[121A";

		frame475();
		usleep(5000);
		std::cout << "\e[121A";

		frame476();
		usleep(5000);
		std::cout << "\e[121A";

		frame477();
		usleep(5000);
		std::cout << "\e[121A";

		frame478();
		usleep(5000);
		std::cout << "\e[121A";

		frame479();
		usleep(5000);
		std::cout << "\e[121A";

		frame480();
		usleep(5000);
		std::cout << "\e[121A";

		frame481();
		usleep(5000);
		std::cout << "\e[121A";

		frame482();
		usleep(5000);
		std::cout << "\e[121A";

		frame483();
		usleep(5000);
		std::cout << "\e[121A";

		frame484();
		usleep(5000);
		std::cout << "\e[121A";

		frame485();
		usleep(5000);
		std::cout << "\e[121A";

		frame486();
		usleep(5000);
		std::cout << "\e[121A";

		frame487();
		usleep(5000);
		std::cout << "\e[121A";

		frame488();
		usleep(5000);
		std::cout << "\e[121A";

		frame489();
		usleep(5000);
		std::cout << "\e[121A";

		frame490();
		usleep(5000);
		std::cout << "\e[121A";

		frame491();
		usleep(5000);
		std::cout << "\e[121A";

		frame492();
		usleep(5000);
		std::cout << "\e[121A";

		frame493();
		usleep(5000);
		std::cout << "\e[121A";

		frame494();
		usleep(5000);
		std::cout << "\e[121A";

		frame495();
		usleep(5000);
		std::cout << "\e[121A";

		frame496();
		usleep(5000);
		std::cout << "\e[121A";

		frame497();
		usleep(5000);
		std::cout << "\e[121A";

		frame498();
		usleep(5000);
		std::cout << "\e[121A";

		frame499();
		usleep(5000);
		std::cout << "\e[121A";

		frame500();
		usleep(5000);
		std::cout << "\e[121A";

		frame501();
		usleep(5000);
		std::cout << "\e[121A";

		frame502();
		usleep(5000);
		std::cout << "\e[121A";

		frame503();
		usleep(5000);
		std::cout << "\e[121A";

		frame504();
		usleep(5000);
		std::cout << "\e[121A";

		frame505();
		usleep(5000);
		std::cout << "\e[121A";

		frame506();
		usleep(5000);
		std::cout << "\e[121A";

		frame507();
		usleep(5000);
		std::cout << "\e[121A";

		frame508();
		usleep(5000);
		std::cout << "\e[121A";

		frame509();
		usleep(5000);
		std::cout << "\e[121A";

		frame510();
		usleep(5000);
		std::cout << "\e[121A";

		frame511();
		usleep(5000);
		std::cout << "\e[121A";

		frame512();
		usleep(5000);
		std::cout << "\e[121A";

		frame513();
		usleep(5000);
		std::cout << "\e[121A";

		frame514();
		usleep(5000);
		std::cout << "\e[121A";

		frame515();
		usleep(5000);
		std::cout << "\e[121A";

		frame516();
		usleep(5000);
		std::cout << "\e[121A";

		frame517();
		usleep(5000);
		std::cout << "\e[121A";

		frame518();
		usleep(5000);
		std::cout << "\e[121A";

		frame519();
		usleep(5000);
		std::cout << "\e[121A";

		frame520();
		usleep(5000);
		std::cout << "\e[121A";

		frame521();
		usleep(5000);
		std::cout << "\e[121A";

		frame522();
		usleep(5000);
		std::cout << "\e[121A";

		frame523();
		usleep(5000);
		std::cout << "\e[121A";

		frame524();
		usleep(5000);
		std::cout << "\e[121A";

		frame525();
		usleep(5000);
		std::cout << "\e[121A";

		frame526();
		usleep(5000);
		std::cout << "\e[121A";

		frame527();
		usleep(5000);
		std::cout << "\e[121A";

		frame528();
		usleep(5000);
		std::cout << "\e[121A";

		frame529();
		usleep(5000);
		std::cout << "\e[121A";

		frame530();
		usleep(5000);
		std::cout << "\e[121A";

		frame531();
		usleep(5000);
		std::cout << "\e[121A";

		frame532();
		usleep(5000);
		std::cout << "\e[121A";

		frame533();
		usleep(5000);
		std::cout << "\e[121A";

		frame534();
		usleep(5000);
		std::cout << "\e[121A";

		frame535();
		usleep(5000);
		std::cout << "\e[121A";

		frame536();
		usleep(5000);
		std::cout << "\e[121A";

		frame537();
		usleep(5000);
		std::cout << "\e[121A";

		frame538();
		usleep(5000);
		std::cout << "\e[121A";

		frame539();
		usleep(5000);
		std::cout << "\e[121A";

		frame540();
		usleep(5000);
		std::cout << "\e[121A";

		frame541();
		usleep(5000);
		std::cout << "\e[121A";

		frame542();
		usleep(5000);
		std::cout << "\e[121A";

		frame543();
		usleep(5000);
		std::cout << "\e[121A";

		frame544();
		usleep(5000);
		std::cout << "\e[121A";

		frame545();
		usleep(5000);
		std::cout << "\e[121A";

		frame546();
		usleep(5000);
		std::cout << "\e[121A";

		frame547();
		usleep(5000);
		std::cout << "\e[121A";

		frame548();
		usleep(5000);
		std::cout << "\e[121A";

		frame549();
		usleep(5000);
		std::cout << "\e[121A";

		frame550();
		usleep(5000);
		std::cout << "\e[121A";

		frame551();
		usleep(5000);
		std::cout << "\e[121A";

		frame552();
		usleep(5000);
		std::cout << "\e[121A";

		frame553();
		usleep(5000);
		std::cout << "\e[121A";

		frame554();
		usleep(5000);
		std::cout << "\e[121A";

		frame555();
		usleep(5000);
		std::cout << "\e[121A";

		frame556();
		usleep(5000);
		std::cout << "\e[121A";

		frame557();
		usleep(5000);
		std::cout << "\e[121A";

		frame558();
		usleep(5000);
		std::cout << "\e[121A";

		frame559();
		usleep(5000);
		std::cout << "\e[121A";

		frame560();
		usleep(5000);
		std::cout << "\e[121A";

		frame561();
		usleep(5000);
		std::cout << "\e[121A";

		frame562();
		usleep(5000);
		std::cout << "\e[121A";

		frame563();
		usleep(5000);
		std::cout << "\e[121A";

		frame564();
		usleep(5000);
		std::cout << "\e[121A";

		frame565();
		usleep(5000);
		std::cout << "\e[121A";

		frame566();
		usleep(5000);
		std::cout << "\e[121A";

		frame567();
		usleep(5000);
		std::cout << "\e[121A";

		frame568();
		usleep(5000);
		std::cout << "\e[121A";

		frame569();
		usleep(5000);
		std::cout << "\e[121A";

		frame570();
		usleep(5000);
		std::cout << "\e[121A";

		frame571();
		usleep(5000);
		std::cout << "\e[121A";

		frame572();
		usleep(5000);
		std::cout << "\e[121A";

		frame573();
		usleep(5000);
		std::cout << "\e[121A";

		frame574();
		usleep(5000);
		std::cout << "\e[121A";

		frame575();
		usleep(5000);
		std::cout << "\e[121A";

		frame576();
		usleep(5000);
		std::cout << "\e[121A";

		frame577();
		usleep(5000);
		std::cout << "\e[121A";

		frame578();
		usleep(5000);
		std::cout << "\e[121A";

		frame579();
		usleep(5000);
		std::cout << "\e[121A";

		frame580();
		usleep(5000);
		std::cout << "\e[121A";

		frame581();
		usleep(5000);
		std::cout << "\e[121A";

		frame582();
		usleep(5000);
		std::cout << "\e[121A";

		frame583();
		usleep(5000);
		std::cout << "\e[121A";

		frame584();
		usleep(5000);
		std::cout << "\e[121A";

		frame585();
		usleep(5000);
		std::cout << "\e[121A";

		frame586();
		usleep(5000);
		std::cout << "\e[121A";

		frame587();
		usleep(5000);
		std::cout << "\e[121A";

		frame588();
		usleep(5000);
		std::cout << "\e[121A";

		frame589();
		usleep(5000);
		std::cout << "\e[121A";

		frame590();
		usleep(5000);
		std::cout << "\e[121A";

		frame591();
		usleep(5000);
		std::cout << "\e[121A";

		frame592();
		usleep(5000);
		std::cout << "\e[121A";

		frame593();
		usleep(5000);
		std::cout << "\e[121A";

		frame594();
		usleep(5000);
		std::cout << "\e[121A";

		frame595();
		usleep(5000);
		std::cout << "\e[121A";

		frame596();
		usleep(5000);
		std::cout << "\e[121A";

		frame597();
		usleep(5000);
		std::cout << "\e[121A";

		frame598();
		usleep(5000);
		std::cout << "\e[121A";

		frame599();
		usleep(5000);
		std::cout << "\e[121A";

		frame600();
		usleep(5000);
		std::cout << "\e[121A";

		frame601();
		usleep(5000);
		std::cout << "\e[121A";

		frame602();
		usleep(5000);
		std::cout << "\e[121A";

		frame603();
		usleep(5000);
		std::cout << "\e[121A";

		frame604();
		usleep(5000);
		std::cout << "\e[121A";

		frame605();
		usleep(5000);
		std::cout << "\e[121A";

		frame606();
		usleep(5000);
		std::cout << "\e[121A";

		frame607();
		usleep(5000);
		std::cout << "\e[121A";

		frame608();
		usleep(5000);
		std::cout << "\e[121A";

		frame609();
		usleep(5000);
		std::cout << "\e[121A";

		frame610();
		usleep(5000);
		std::cout << "\e[121A";

		frame611();
		usleep(5000);
		std::cout << "\e[121A";

		frame612();
		usleep(5000);
		std::cout << "\e[121A";

		frame613();
		usleep(5000);
		std::cout << "\e[121A";

		frame614();
		usleep(5000);
		std::cout << "\e[121A";

		frame615();
		usleep(5000);
		std::cout << "\e[121A";

		frame616();
		usleep(5000);
		std::cout << "\e[121A";

		frame617();
		usleep(5000);
		std::cout << "\e[121A";

		frame618();
		usleep(5000);
		std::cout << "\e[121A";

		frame619();
		usleep(5000);
		std::cout << "\e[121A";

		frame620();
		usleep(5000);
		std::cout << "\e[121A";

		frame621();
		usleep(5000);
		std::cout << "\e[121A";

		frame622();
		usleep(5000);
		std::cout << "\e[121A";

		frame623();
		usleep(5000);
		std::cout << "\e[121A";

		frame624();
		usleep(5000);
		std::cout << "\e[121A";

		frame625();
		usleep(5000);
		std::cout << "\e[121A";

		frame626();
		usleep(5000);
		std::cout << "\e[121A";

		frame627();
		usleep(5000);
		std::cout << "\e[121A";

		frame628();
		usleep(5000);
		std::cout << "\e[121A";

		frame629();
		usleep(5000);
		std::cout << "\e[121A";

		frame630();
		usleep(5000);
		std::cout << "\e[121A";

		frame631();
		usleep(5000);
		std::cout << "\e[121A";

		frame632();
		usleep(5000);
		std::cout << "\e[121A";

		frame633();
		usleep(5000);
		std::cout << "\e[121A";

		frame634();
		usleep(5000);
		std::cout << "\e[121A";

		frame635();
		usleep(5000);
		std::cout << "\e[121A";

		frame636();
		usleep(5000);
		std::cout << "\e[121A";

		frame637();
		usleep(5000);
		std::cout << "\e[121A";

		frame638();
		usleep(5000);
		std::cout << "\e[121A";

		frame639();
		usleep(5000);
		std::cout << "\e[121A";

		frame640();
		usleep(5000);
		std::cout << "\e[121A";

		frame641();
		usleep(5000);
		std::cout << "\e[121A";

		frame642();
		usleep(5000);
		std::cout << "\e[121A";

		frame643();
		usleep(5000);
		std::cout << "\e[121A";

		frame644();
		usleep(5000);
		std::cout << "\e[121A";

		frame645();
		usleep(5000);
		std::cout << "\e[121A";

		frame646();
		usleep(5000);
		std::cout << "\e[121A";

		frame647();
		usleep(5000);
		std::cout << "\e[121A";

		frame648();
		usleep(5000);
		std::cout << "\e[121A";

		frame649();
		usleep(5000);
		std::cout << "\e[121A";

		frame650();
		usleep(5000);
		std::cout << "\e[121A";

		frame651();
		usleep(5000);
		std::cout << "\e[121A";

		frame652();
		usleep(5000);
		std::cout << "\e[121A";

		frame653();
		usleep(5000);
		std::cout << "\e[121A";

		frame654();
		usleep(5000);
		std::cout << "\e[121A";

		frame655();
		usleep(5000);
		std::cout << "\e[121A";

		frame656();
		usleep(5000);
		std::cout << "\e[121A";

		frame657();
		usleep(5000);
		std::cout << "\e[121A";

		frame658();
		usleep(5000);
		std::cout << "\e[121A";

		frame659();
		usleep(5000);
		std::cout << "\e[121A";

		frame660();
		usleep(5000);
		std::cout << "\e[121A";

		frame661();
		usleep(5000);
		std::cout << "\e[121A";

		frame662();
		usleep(5000);
		std::cout << "\e[121A";

		frame663();
		usleep(5000);
		std::cout << "\e[121A";

		frame664();
		usleep(5000);
		std::cout << "\e[121A";

		frame665();
		usleep(5000);
		std::cout << "\e[121A";

		frame666();
		usleep(5000);
		std::cout << "\e[121A";

		frame667();
		usleep(5000);
		std::cout << "\e[121A";

		frame668();
		usleep(5000);
		std::cout << "\e[121A";

		frame669();
		usleep(5000);
		std::cout << "\e[121A";

		frame670();
		usleep(5000);
		std::cout << "\e[121A";

		frame671();
		usleep(5000);
		std::cout << "\e[121A";

		frame672();
		usleep(5000);
		std::cout << "\e[121A";

		frame673();
		usleep(5000);
		std::cout << "\e[121A";

		frame674();
		usleep(5000);
		std::cout << "\e[121A";

		frame675();
		usleep(5000);
		std::cout << "\e[121A";

		frame676();
		usleep(5000);
		std::cout << "\e[121A";

		frame677();
		usleep(5000);
		std::cout << "\e[121A";

		frame678();
		usleep(5000);
		std::cout << "\e[121A";

		frame679();
		usleep(5000);
		std::cout << "\e[121A";

		frame680();
		usleep(5000);
		std::cout << "\e[121A";

		frame681();
		usleep(5000);
		std::cout << "\e[121A";

		frame682();
		usleep(5000);
		std::cout << "\e[121A";

		frame683();
		usleep(5000);
		std::cout << "\e[121A";

		frame684();
		usleep(5000);
		std::cout << "\e[121A";

		frame685();
		usleep(5000);
		std::cout << "\e[121A";

		frame686();
		usleep(5000);
		std::cout << "\e[121A";

		frame687();
		usleep(5000);
		std::cout << "\e[121A";

		frame688();
		usleep(5000);
		std::cout << "\e[121A";

		frame689();
		usleep(5000);
		std::cout << "\e[121A";

		frame690();
		usleep(5000);
		std::cout << "\e[121A";

		frame691();
		usleep(5000);
		std::cout << "\e[121A";

		frame692();
		usleep(5000);
		std::cout << "\e[121A";

		frame693();
		usleep(5000);
		std::cout << "\e[121A";

		frame694();
		usleep(5000);
		std::cout << "\e[121A";

		frame695();
		usleep(5000);
		std::cout << "\e[121A";

		frame696();
		usleep(5000);
		std::cout << "\e[121A";

		frame697();
		usleep(5000);
		std::cout << "\e[121A";

		frame698();
		usleep(5000);
		std::cout << "\e[121A";

		frame699();
		usleep(5000);
		std::cout << "\e[121A";

		frame700();
		usleep(5000);
		std::cout << "\e[121A";

		frame701();
		usleep(5000);
		std::cout << "\e[121A";

		frame702();
		usleep(5000);
		std::cout << "\e[121A";

		frame703();
		usleep(5000);
		std::cout << "\e[121A";

		frame704();
		usleep(5000);
		std::cout << "\e[121A";

		frame705();
		usleep(5000);
		std::cout << "\e[121A";

		frame706();
		usleep(5000);
		std::cout << "\e[121A";

		frame707();
		usleep(5000);
		std::cout << "\e[121A";

		frame708();
		usleep(5000);
		std::cout << "\e[121A";

		frame709();
		usleep(5000);
		std::cout << "\e[121A";

		frame710();
		usleep(5000);
		std::cout << "\e[121A";

		frame711();
		usleep(5000);
		std::cout << "\e[121A";

		frame712();
		usleep(5000);
		std::cout << "\e[121A";

		frame713();
		usleep(5000);
		std::cout << "\e[121A";

		frame714();
		usleep(5000);
		std::cout << "\e[121A";

		frame715();
		usleep(5000);
		std::cout << "\e[121A";

		frame716();
		usleep(5000);
		std::cout << "\e[121A";

		frame717();
		usleep(5000);
		std::cout << "\e[121A";

		frame718();
		usleep(5000);
		std::cout << "\e[121A";

		frame719();
		usleep(5000);
		std::cout << "\e[121A";

		frame720();
		usleep(5000);
		std::cout << "\e[121A";

		frame721();
		usleep(5000);
		std::cout << "\e[121A";

		frame722();
		usleep(5000);
		std::cout << "\e[121A";

		frame723();
		usleep(5000);
		std::cout << "\e[121A";

		frame724();
		usleep(5000);
		std::cout << "\e[121A";

		frame725();
		usleep(5000);
		std::cout << "\e[121A";

		frame726();
		usleep(5000);
		std::cout << "\e[121A";

		frame727();
		usleep(5000);
		std::cout << "\e[121A";

		frame728();
		usleep(5000);
		std::cout << "\e[121A";

		frame729();
		usleep(5000);
		std::cout << "\e[121A";

		frame730();
		usleep(5000);
		std::cout << "\e[121A";

		frame731();
		usleep(5000);
		std::cout << "\e[121A";

		frame732();
		usleep(5000);
		std::cout << "\e[121A";

		frame733();
		usleep(5000);
		std::cout << "\e[121A";

		frame734();
		usleep(5000);
		std::cout << "\e[121A";

		frame735();
		usleep(5000);
		std::cout << "\e[121A";

		frame736();
		usleep(5000);
		std::cout << "\e[121A";

		frame737();
		usleep(5000);
		std::cout << "\e[121A";

		frame738();
		usleep(5000);
		std::cout << "\e[121A";

		frame739();
		usleep(5000);
		std::cout << "\e[121A";

		frame740();
		usleep(5000);
		std::cout << "\e[121A";

		frame741();
		usleep(5000);
		std::cout << "\e[121A";

		frame742();
		usleep(5000);
		std::cout << "\e[121A";

		frame743();
		usleep(5000);
		std::cout << "\e[121A";

		frame744();
		usleep(5000);
		std::cout << "\e[121A";

		frame745();
		usleep(5000);
		std::cout << "\e[121A";

		frame746();
		usleep(5000);
		std::cout << "\e[121A";

		frame747();
		usleep(5000);
		std::cout << "\e[121A";

		frame748();
		usleep(5000);
		std::cout << "\e[121A";

		frame749();
		usleep(5000);
		std::cout << "\e[121A";

		frame750();
		usleep(5000);
		std::cout << "\e[121A";

		frame751();
		usleep(5000);
		std::cout << "\e[121A";

		frame752();
		usleep(5000);
		std::cout << "\e[121A";

		frame753();
		usleep(5000);
		std::cout << "\e[121A";

		frame754();
		usleep(5000);
		std::cout << "\e[121A";

		frame755();
		usleep(5000);
		std::cout << "\e[121A";

		frame756();
		usleep(5000);
		std::cout << "\e[121A";

		frame757();
		usleep(5000);
		std::cout << "\e[121A";

		frame758();
		usleep(5000);
		std::cout << "\e[121A";

		frame759();
		usleep(5000);
		std::cout << "\e[121A";

		frame760();
		usleep(5000);
		std::cout << "\e[121A";

		frame761();
		usleep(5000);
		std::cout << "\e[121A";

		frame762();
		usleep(5000);
		std::cout << "\e[121A";

		frame763();
		usleep(5000);
		std::cout << "\e[121A";

		frame764();
		usleep(5000);
		std::cout << "\e[121A";

		frame765();
		usleep(5000);
		std::cout << "\e[121A";

		frame766();
		usleep(5000);
		std::cout << "\e[121A";

		frame767();
		usleep(5000);
		std::cout << "\e[121A";

		frame768();
		usleep(5000);
		std::cout << "\e[121A";

		frame769();
		usleep(5000);
		std::cout << "\e[121A";

		frame770();
		usleep(5000);
		std::cout << "\e[121A";

		frame771();
		usleep(5000);
		std::cout << "\e[121A";

		frame772();
		usleep(5000);
		std::cout << "\e[121A";

		frame773();
		usleep(5000);
		std::cout << "\e[121A";

		frame774();
		usleep(5000);
		std::cout << "\e[121A";

		frame775();
		usleep(5000);
		std::cout << "\e[121A";

		frame776();
		usleep(5000);
		std::cout << "\e[121A";

		frame777();
		usleep(5000);
		std::cout << "\e[121A";

		frame778();
		usleep(5000);
		std::cout << "\e[121A";

		frame779();
		usleep(5000);
		std::cout << "\e[121A";

		frame780();
		usleep(5000);
		std::cout << "\e[121A";

		frame781();
		usleep(5000);
		std::cout << "\e[121A";

		frame782();
		usleep(5000);
		std::cout << "\e[121A";

		frame783();
		usleep(5000);
		std::cout << "\e[121A";

		frame784();
		usleep(5000);
		std::cout << "\e[121A";

		frame785();
		usleep(5000);
		std::cout << "\e[121A";

		frame786();
		usleep(5000);
		std::cout << "\e[121A";

		frame787();
		usleep(5000);
		std::cout << "\e[121A";

		frame788();
		usleep(5000);
		std::cout << "\e[121A";

		frame789();
		usleep(5000);
		std::cout << "\e[121A";

		frame790();
		usleep(5000);
		std::cout << "\e[121A";

		frame791();
		usleep(5000);
		std::cout << "\e[121A";

		frame792();
		usleep(5000);
		std::cout << "\e[121A";

		frame793();
		usleep(5000);
		std::cout << "\e[121A";

		frame794();
		usleep(5000);
		std::cout << "\e[121A";

		frame795();
		usleep(5000);
		std::cout << "\e[121A";

		frame796();
		usleep(5000);
		std::cout << "\e[121A";

		frame797();
		usleep(5000);
		std::cout << "\e[121A";

		frame798();
		usleep(5000);
		std::cout << "\e[121A";

		frame799();
		usleep(5000);
		std::cout << "\e[121A";

		frame800();
		usleep(5000);
		std::cout << "\e[121A";

		frame801();
		usleep(5000);
		std::cout << "\e[121A";

		frame802();
		usleep(5000);
		std::cout << "\e[121A";

		frame803();
		usleep(5000);
		std::cout << "\e[121A";

		frame804();
		usleep(5000);
		std::cout << "\e[121A";

		frame805();
		usleep(5000);
		std::cout << "\e[121A";

		frame806();
		usleep(5000);
		std::cout << "\e[121A";

		frame807();
		usleep(5000);
		std::cout << "\e[121A";

		frame808();
		usleep(5000);
		std::cout << "\e[121A";

		frame809();
		usleep(5000);
		std::cout << "\e[121A";

		frame810();
		usleep(5000);
		std::cout << "\e[121A";

		frame811();
		usleep(5000);
		std::cout << "\e[121A";

		frame812();
		usleep(5000);
		std::cout << "\e[121A";

		frame813();
		usleep(5000);
		std::cout << "\e[121A";

		frame814();
		usleep(5000);
		std::cout << "\e[121A";

		frame815();
		usleep(5000);
		std::cout << "\e[121A";

		frame816();
		usleep(5000);
		std::cout << "\e[121A";

		frame817();
		usleep(5000);
		std::cout << "\e[121A";

		frame818();
		usleep(5000);
		std::cout << "\e[121A";

		frame819();
		usleep(5000);
		std::cout << "\e[121A";

		frame820();
		usleep(5000);
		std::cout << "\e[121A";

		frame821();
		usleep(5000);
		std::cout << "\e[121A";

		frame822();
		usleep(5000);
		std::cout << "\e[121A";

		frame823();
		usleep(5000);
		std::cout << "\e[121A";

		frame824();
		usleep(5000);
		std::cout << "\e[121A";

		frame825();
		usleep(5000);
		std::cout << "\e[121A";

		frame826();
		usleep(5000);
		std::cout << "\e[121A";

		frame827();
		usleep(5000);
		std::cout << "\e[121A";

		frame828();
		usleep(5000);
		std::cout << "\e[121A";

		frame829();
		usleep(5000);
		std::cout << "\e[121A";

		frame830();
		usleep(5000);
		std::cout << "\e[121A";

		frame831();
		usleep(5000);
		std::cout << "\e[121A";

		frame832();
		usleep(5000);
		std::cout << "\e[121A";

		frame833();
		usleep(5000);
		std::cout << "\e[121A";

		frame834();
		usleep(5000);
		std::cout << "\e[121A";

		frame835();
		usleep(5000);
		std::cout << "\e[121A";

		frame836();
		usleep(5000);
		std::cout << "\e[121A";

		frame837();
		usleep(5000);
		std::cout << "\e[121A";

		frame838();
		usleep(5000);
		std::cout << "\e[121A";

		frame839();
		usleep(5000);
		std::cout << "\e[121A";

		frame840();
		usleep(5000);
		std::cout << "\e[121A";

		frame841();
		usleep(5000);
		std::cout << "\e[121A";

		frame842();
		usleep(5000);
		std::cout << "\e[121A";

		frame843();
		usleep(5000);
		std::cout << "\e[121A";

		frame844();
		usleep(5000);
		std::cout << "\e[121A";

		frame845();
		usleep(5000);
		std::cout << "\e[121A";

		frame846();
		usleep(5000);
		std::cout << "\e[121A";

		frame847();
		usleep(5000);
		std::cout << "\e[121A";

		frame848();
		usleep(5000);
		std::cout << "\e[121A";

		frame849();
		usleep(5000);
		std::cout << "\e[121A";

		frame850();
		usleep(5000);
		std::cout << "\e[121A";

		frame851();
		usleep(5000);
		std::cout << "\e[121A";

		frame852();
		usleep(5000);
		std::cout << "\e[121A";

		frame853();
		usleep(5000);
		std::cout << "\e[121A";

		frame854();
		usleep(5000);
		std::cout << "\e[121A";

		frame855();
		usleep(5000);
		std::cout << "\e[121A";

		frame856();
		usleep(5000);
		std::cout << "\e[121A";

		frame857();
		usleep(5000);
		std::cout << "\e[121A";

		frame858();
		usleep(5000);
		std::cout << "\e[121A";

		frame859();
		usleep(5000);
		std::cout << "\e[121A";

		frame860();
		usleep(5000);
		std::cout << "\e[121A";

		frame861();
		usleep(5000);
		std::cout << "\e[121A";

		frame862();
		usleep(5000);
		std::cout << "\e[121A";

		frame863();
		usleep(5000);
		std::cout << "\e[121A";

		frame864();
		usleep(5000);
		std::cout << "\e[121A";

		frame865();
		usleep(5000);
		std::cout << "\e[121A";

		frame866();
		usleep(5000);
		std::cout << "\e[121A";

		frame867();
		usleep(5000);
		std::cout << "\e[121A";

		frame868();
		usleep(5000);
		std::cout << "\e[121A";

		frame869();
		usleep(5000);
		std::cout << "\e[121A";

		frame870();
		usleep(5000);
		std::cout << "\e[121A";

		frame871();
		usleep(5000);
		std::cout << "\e[121A";

		frame872();
		usleep(5000);
		std::cout << "\e[121A";

		frame873();
		usleep(5000);
		std::cout << "\e[121A";

		frame874();
		usleep(5000);
		std::cout << "\e[121A";

		frame875();
		usleep(5000);
		std::cout << "\e[121A";

		frame876();
		usleep(5000);
		std::cout << "\e[121A";

		frame877();
		usleep(5000);
		std::cout << "\e[121A";

		frame878();
		usleep(5000);
		std::cout << "\e[121A";

		frame879();
		usleep(5000);
		std::cout << "\e[121A";

		frame880();
		usleep(5000);
		std::cout << "\e[121A";

		frame881();
		usleep(5000);
		std::cout << "\e[121A";

		frame882();
		usleep(5000);
		std::cout << "\e[121A";

		frame883();
		usleep(5000);
		std::cout << "\e[121A";

		frame884();
		usleep(5000);
		std::cout << "\e[121A";

		frame885();
		usleep(5000);
		std::cout << "\e[121A";

		frame886();
		usleep(5000);
		std::cout << "\e[121A";

		frame887();
		usleep(5000);
		std::cout << "\e[121A";

		frame888();
		usleep(5000);
		std::cout << "\e[121A";

		frame889();
		usleep(5000);
		std::cout << "\e[121A";

		frame890();
		usleep(5000);
		std::cout << "\e[121A";

		frame891();
		usleep(5000);
		std::cout << "\e[121A";

		frame892();
		usleep(5000);
		std::cout << "\e[121A";

		frame893();
		usleep(5000);
		std::cout << "\e[121A";

		frame894();
		usleep(5000);
		std::cout << "\e[121A";

		frame895();
		usleep(5000);
		std::cout << "\e[121A";

		frame896();
		usleep(5000);
		std::cout << "\e[121A";

		frame897();
		usleep(5000);
		std::cout << "\e[121A";

		frame898();
		usleep(5000);
		std::cout << "\e[121A";

		frame899();
		usleep(5000);
		std::cout << "\e[121A";

		frame900();
		usleep(5000);
		std::cout << "\e[121A";

		frame901();
		usleep(5000);
		std::cout << "\e[121A";

		frame902();
		usleep(5000);
		std::cout << "\e[121A";

		frame903();
		usleep(5000);
		std::cout << "\e[121A";

		frame904();
		usleep(5000);
		std::cout << "\e[121A";

		frame905();
		usleep(5000);
		std::cout << "\e[121A";

		frame906();
		usleep(5000);
		std::cout << "\e[121A";

		frame907();
		usleep(5000);
		std::cout << "\e[121A";

		frame908();
		usleep(5000);
		std::cout << "\e[121A";

		frame909();
		usleep(5000);
		std::cout << "\e[121A";

		frame910();
		usleep(5000);
		std::cout << "\e[121A";

		frame911();
		usleep(5000);
		std::cout << "\e[121A";

		frame912();
		usleep(5000);
		std::cout << "\e[121A";

		frame913();
		usleep(5000);
		std::cout << "\e[121A";

		frame914();
		usleep(5000);
		std::cout << "\e[121A";

		frame915();
		usleep(5000);
		std::cout << "\e[121A";

		frame916();
		usleep(5000);
		std::cout << "\e[121A";

		frame917();
		usleep(5000);
		std::cout << "\e[121A";

		frame918();
		usleep(5000);
		std::cout << "\e[121A";

		frame919();
		usleep(5000);
		std::cout << "\e[121A";

		frame920();
		usleep(5000);
		std::cout << "\e[121A";

		frame921();
		usleep(5000);
		std::cout << "\e[121A";

		frame922();
		usleep(5000);
		std::cout << "\e[121A";

		frame923();
		usleep(5000);
		std::cout << "\e[121A";

		frame924();
		usleep(5000);
		std::cout << "\e[121A";

		frame925();
		usleep(5000);
		std::cout << "\e[121A";

		frame926();
		usleep(5000);
		std::cout << "\e[121A";

		frame927();
		usleep(5000);
		std::cout << "\e[121A";

		frame928();
		usleep(5000);
		std::cout << "\e[121A";

		frame929();
		usleep(5000);
		std::cout << "\e[121A";

		frame930();
		usleep(5000);
		std::cout << "\e[121A";

		frame931();
		usleep(5000);
		std::cout << "\e[121A";

		frame932();
		usleep(5000);
		std::cout << "\e[121A";

		frame933();
		usleep(5000);
		std::cout << "\e[121A";

		frame934();
		usleep(5000);
		std::cout << "\e[121A";

		frame935();
		usleep(5000);
		std::cout << "\e[121A";

		frame936();
		usleep(5000);
		std::cout << "\e[121A";

		frame937();
		usleep(5000);
		std::cout << "\e[121A";

		frame938();
		usleep(5000);
		std::cout << "\e[121A";

		frame939();
		usleep(5000);
		std::cout << "\e[121A";

		frame940();
		usleep(5000);
		std::cout << "\e[121A";

		frame941();
		usleep(5000);
		std::cout << "\e[121A";

		frame942();
		usleep(5000);
		std::cout << "\e[121A";

		frame943();
		usleep(5000);
		std::cout << "\e[121A";

		frame944();
		usleep(5000);
		std::cout << "\e[121A";

		frame945();
		usleep(5000);
		std::cout << "\e[121A";

		frame946();
		usleep(5000);
		std::cout << "\e[121A";

		frame947();
		usleep(5000);
		std::cout << "\e[121A";

		frame948();
		usleep(5000);
		std::cout << "\e[121A";

		frame949();
		usleep(5000);
		std::cout << "\e[121A";

		frame950();
		usleep(5000);
		std::cout << "\e[121A";

		frame951();
		usleep(5000);
		std::cout << "\e[121A";

		frame952();
		usleep(5000);
		std::cout << "\e[121A";

		frame953();
		usleep(5000);
		std::cout << "\e[121A";

		frame954();
		usleep(5000);
		std::cout << "\e[121A";

		frame955();
		usleep(5000);
		std::cout << "\e[121A";

		frame956();
		usleep(5000);
		std::cout << "\e[121A";

		frame957();
		usleep(5000);
		std::cout << "\e[121A";

		frame958();
		usleep(5000);
		std::cout << "\e[121A";

		frame959();
		usleep(5000);
		std::cout << "\e[121A";

		frame960();
		usleep(5000);
		std::cout << "\e[121A";

		frame961();
		usleep(5000);
		std::cout << "\e[121A";

		frame962();
		usleep(5000);
		std::cout << "\e[121A";

		frame963();
		usleep(5000);
		std::cout << "\e[121A";

		frame964();
		usleep(5000);
		std::cout << "\e[121A";

		frame965();
		usleep(5000);
		std::cout << "\e[121A";

		frame966();
		usleep(5000);
		std::cout << "\e[121A";

		frame967();
		usleep(5000);
		std::cout << "\e[121A";

		frame968();
		usleep(5000);
		std::cout << "\e[121A";

		frame969();
		usleep(5000);
		std::cout << "\e[121A";

		frame970();
		usleep(5000);
		std::cout << "\e[121A";

		frame971();
		usleep(5000);
		std::cout << "\e[121A";

		frame972();
		usleep(5000);
		std::cout << "\e[121A";

		frame973();
		usleep(5000);
		std::cout << "\e[121A";

		frame974();
		usleep(5000);
		std::cout << "\e[121A";

		frame975();
		usleep(5000);
		std::cout << "\e[121A";

		frame976();
		usleep(5000);
		std::cout << "\e[121A";

		frame977();
		usleep(5000);
		std::cout << "\e[121A";

		frame978();
		usleep(5000);
		std::cout << "\e[121A";

		frame979();
		usleep(5000);
		std::cout << "\e[121A";

		frame980();
		usleep(5000);
		std::cout << "\e[121A";

		frame981();
		usleep(5000);
		std::cout << "\e[121A";

		frame982();
		usleep(5000);
		std::cout << "\e[121A";

		frame983();
		usleep(5000);
		std::cout << "\e[121A";

		frame984();
		usleep(5000);
		std::cout << "\e[121A";

		frame985();
		usleep(5000);
		std::cout << "\e[121A";

		frame986();
		usleep(5000);
		std::cout << "\e[121A";

		frame987();
		usleep(5000);
		std::cout << "\e[121A";

		frame988();
		usleep(5000);
		std::cout << "\e[121A";

		frame989();
		usleep(5000);
		std::cout << "\e[121A";

		frame990();
		usleep(5000);
		std::cout << "\e[121A";

		frame991();
		usleep(5000);
		std::cout << "\e[121A";

		frame992();
		usleep(5000);
		std::cout << "\e[121A";

		frame993();
		usleep(5000);
		std::cout << "\e[121A";

		frame994();
		usleep(5000);
		std::cout << "\e[121A";

		frame995();
		usleep(5000);
		std::cout << "\e[121A";

		frame996();
		usleep(5000);
		std::cout << "\e[121A";

		frame997();
		usleep(5000);
		std::cout << "\e[121A";

		frame998();
		usleep(5000);
		std::cout << "\e[121A";

		frame999();
		usleep(5000);
		std::cout << "\e[121A";

		frame1000();
		usleep(5000);
		std::cout << "\e[121A";

		frame1001();
		usleep(5000);
		std::cout << "\e[121A";

		frame1002();
		usleep(5000);
		std::cout << "\e[121A";

		frame1003();
		usleep(5000);
		std::cout << "\e[121A";

		frame1004();
		usleep(5000);
		std::cout << "\e[121A";

		frame1005();
		usleep(5000);
		std::cout << "\e[121A";

		frame1006();
		usleep(5000);
		std::cout << "\e[121A";

		frame1007();
		usleep(5000);
		std::cout << "\e[121A";

		frame1008();
		usleep(5000);
		std::cout << "\e[121A";

		frame1009();
		usleep(5000);
		std::cout << "\e[121A";

		frame1010();
		usleep(5000);
		std::cout << "\e[121A";

		frame1011();
		usleep(5000);
		std::cout << "\e[121A";

		frame1012();
		usleep(5000);
		std::cout << "\e[121A";

		frame1013();
		usleep(5000);
		std::cout << "\e[121A";

		frame1014();
		usleep(5000);
		std::cout << "\e[121A";

		frame1015();
		usleep(5000);
		std::cout << "\e[121A";

		frame1016();
		usleep(5000);
		std::cout << "\e[121A";

		frame1017();
		usleep(5000);
		std::cout << "\e[121A";

		frame1018();
		usleep(5000);
		std::cout << "\e[121A";

		frame1019();
		usleep(5000);
		std::cout << "\e[121A";

		frame1020();
		usleep(5000);
		std::cout << "\e[121A";

		frame1021();
		usleep(5000);
		std::cout << "\e[121A";

		frame1022();
		usleep(5000);
		std::cout << "\e[121A";

		frame1023();
		usleep(5000);
		std::cout << "\e[121A";

		frame1024();
		usleep(5000);
		std::cout << "\e[121A";

		frame1025();
		usleep(5000);
		std::cout << "\e[121A";

		frame1026();
		usleep(5000);
		std::cout << "\e[121A";

		frame1027();
		usleep(5000);
		std::cout << "\e[121A";

		frame1028();
		usleep(5000);
		std::cout << "\e[121A";

		frame1029();
		usleep(5000);
		std::cout << "\e[121A";

		frame1030();
		usleep(5000);
		std::cout << "\e[121A";

		frame1031();
		usleep(5000);
		std::cout << "\e[121A";

		frame1032();
		usleep(5000);
		std::cout << "\e[121A";

		frame1033();
		usleep(5000);
		std::cout << "\e[121A";

		frame1034();
		usleep(5000);
		std::cout << "\e[121A";

		frame1035();
		usleep(5000);
		std::cout << "\e[121A";

		frame1036();
		usleep(5000);
		std::cout << "\e[121A";

		frame1037();
		usleep(5000);
		std::cout << "\e[121A";

		frame1038();
		usleep(5000);
		std::cout << "\e[121A";

		frame1039();
		usleep(5000);
		std::cout << "\e[121A";

		frame1040();
		usleep(5000);
		std::cout << "\e[121A";

		frame1041();
		usleep(5000);
		std::cout << "\e[121A";

		frame1042();
		usleep(5000);
		std::cout << "\e[121A";

		frame1043();
		usleep(5000);
		std::cout << "\e[121A";

		frame1044();
		usleep(5000);
		std::cout << "\e[121A";

		frame1045();
		usleep(5000);
		std::cout << "\e[121A";

		frame1046();
		usleep(5000);
		std::cout << "\e[121A";

		frame1047();
		usleep(5000);
		std::cout << "\e[121A";

		frame1048();
		usleep(5000);
		std::cout << "\e[121A";

		frame1049();
		usleep(5000);
		std::cout << "\e[121A";

		frame1050();
		usleep(5000);
		std::cout << "\e[121A";

		frame1051();
		usleep(5000);
		std::cout << "\e[121A";

		frame1052();
		usleep(5000);
		std::cout << "\e[121A";

		frame1053();
		usleep(5000);
		std::cout << "\e[121A";

		frame1054();
		usleep(5000);
		std::cout << "\e[121A";

		frame1055();
		usleep(5000);
		std::cout << "\e[121A";

		frame1056();
		usleep(5000);
		std::cout << "\e[121A";

		frame1057();
		usleep(5000);
		std::cout << "\e[121A";

		frame1058();
		usleep(5000);
		std::cout << "\e[121A";

		frame1059();
		usleep(5000);
		std::cout << "\e[121A";

		frame1060();
		usleep(5000);
		std::cout << "\e[121A";

		frame1061();
		usleep(5000);
		std::cout << "\e[121A";

		frame1062();
		usleep(5000);
		std::cout << "\e[121A";

		frame1063();
		usleep(5000);
		std::cout << "\e[121A";

		frame1064();
		usleep(5000);
		std::cout << "\e[121A";

		frame1065();
		usleep(5000);
		std::cout << "\e[121A";

		frame1066();
		usleep(5000);
		std::cout << "\e[121A";

		frame1067();
		usleep(5000);
		std::cout << "\e[121A";

		frame1068();
		usleep(5000);
		std::cout << "\e[121A";

		frame1069();
		usleep(5000);
		std::cout << "\e[121A";

		frame1070();
		usleep(5000);
		std::cout << "\e[121A";

		frame1071();
		usleep(5000);
		std::cout << "\e[121A";

		frame1072();
		usleep(5000);
		std::cout << "\e[121A";

		frame1073();
		usleep(5000);
		std::cout << "\e[121A";

		frame1074();
		usleep(5000);
		std::cout << "\e[121A";

		frame1075();
		usleep(5000);
		std::cout << "\e[121A";

		frame1076();
		usleep(5000);
		std::cout << "\e[121A";

		frame1077();
		usleep(5000);
		std::cout << "\e[121A";

		frame1078();
		usleep(5000);
		std::cout << "\e[121A";

		frame1079();
		usleep(5000);
		std::cout << "\e[121A";

		frame1080();
		usleep(5000);
		std::cout << "\e[121A";

		frame1081();
		usleep(5000);
		std::cout << "\e[121A";

		frame1082();
		usleep(5000);
		std::cout << "\e[121A";

		frame1083();
		usleep(5000);
		std::cout << "\e[121A";

		frame1084();
		usleep(5000);
		std::cout << "\e[121A";

		frame1085();
		usleep(5000);
		std::cout << "\e[121A";

		frame1086();
		usleep(5000);
		std::cout << "\e[121A";

		frame1087();
		usleep(5000);
		std::cout << "\e[121A";

		frame1088();
		usleep(5000);
		std::cout << "\e[121A";

		frame1089();
		usleep(5000);
		std::cout << "\e[121A";

		frame1090();
		usleep(5000);
		std::cout << "\e[121A";

		frame1091();
		usleep(5000);
		std::cout << "\e[121A";

		frame1092();
		usleep(5000);
		std::cout << "\e[121A";

		frame1093();
		usleep(5000);
		std::cout << "\e[121A";

		frame1094();
		usleep(5000);
		std::cout << "\e[121A";

		frame1095();
		usleep(5000);
		std::cout << "\e[121A";

		frame1096();
		usleep(5000);
		std::cout << "\e[121A";

		frame1097();
		usleep(5000);
		std::cout << "\e[121A";

		frame1098();
		usleep(5000);
		std::cout << "\e[121A";

		frame1099();
		usleep(5000);
		std::cout << "\e[121A";

		frame1100();
		usleep(5000);
		std::cout << "\e[121A";

		frame1101();
		usleep(5000);
		std::cout << "\e[121A";

		frame1102();
		usleep(5000);
		std::cout << "\e[121A";

		frame1103();
		usleep(5000);
		std::cout << "\e[121A";

		frame1104();
		usleep(5000);
		std::cout << "\e[121A";

		frame1105();
		usleep(5000);
		std::cout << "\e[121A";

		frame1106();
		usleep(5000);
		std::cout << "\e[121A";

		frame1107();
		usleep(5000);
		std::cout << "\e[121A";

		frame1108();
		usleep(5000);
		std::cout << "\e[121A";

		frame1109();
		usleep(5000);
		std::cout << "\e[121A";

		frame1110();
		usleep(5000);
		std::cout << "\e[121A";

		frame1111();
		usleep(5000);
		std::cout << "\e[121A";

		frame1112();
		usleep(5000);
		std::cout << "\e[121A";

		frame1113();
		usleep(5000);
		std::cout << "\e[121A";

		frame1114();
		usleep(5000);
		std::cout << "\e[121A";

		frame1115();
		usleep(5000);
		std::cout << "\e[121A";

		frame1116();
		usleep(5000);
		std::cout << "\e[121A";

		frame1117();
		usleep(5000);
		std::cout << "\e[121A";

		frame1118();
		usleep(5000);
		std::cout << "\e[121A";

		frame1119();
		usleep(5000);
		std::cout << "\e[121A";

		frame1120();
		usleep(5000);
		std::cout << "\e[121A";

		frame1121();
		usleep(5000);
		std::cout << "\e[121A";

		frame1122();
		usleep(5000);
		std::cout << "\e[121A";

		frame1123();
		usleep(5000);
		std::cout << "\e[121A";

		frame1124();
		usleep(5000);
		std::cout << "\e[121A";

		frame1125();
		usleep(5000);
		std::cout << "\e[121A";

		frame1126();
		usleep(5000);
		std::cout << "\e[121A";

		frame1127();
		usleep(5000);
		std::cout << "\e[121A";

		frame1128();
		usleep(5000);
		std::cout << "\e[121A";

		frame1129();
		usleep(5000);
		std::cout << "\e[121A";

		frame1130();
		usleep(5000);
		std::cout << "\e[121A";

		frame1131();
		usleep(5000);
		std::cout << "\e[121A";

		frame1132();
		usleep(5000);
		std::cout << "\e[121A";

		frame1133();
		usleep(5000);
		std::cout << "\e[121A";

		frame1134();
		usleep(5000);
		std::cout << "\e[121A";

		frame1135();
		usleep(5000);
		std::cout << "\e[121A";

		frame1136();
		usleep(5000);
		std::cout << "\e[121A";

		frame1137();
		usleep(5000);
		std::cout << "\e[121A";

		frame1138();
		usleep(5000);
		std::cout << "\e[121A";

		frame1139();
		usleep(5000);
		std::cout << "\e[121A";

		frame1140();
		usleep(5000);
		std::cout << "\e[121A";

		frame1141();
		usleep(5000);
		std::cout << "\e[121A";

		frame1142();
		usleep(5000);
		std::cout << "\e[121A";

		frame1143();
		usleep(5000);
		std::cout << "\e[121A";

		frame1144();
		usleep(5000);
		std::cout << "\e[121A";

		frame1145();
		usleep(5000);
		std::cout << "\e[121A";

		frame1146();
		usleep(5000);
		std::cout << "\e[121A";

		frame1147();
		usleep(5000);
		std::cout << "\e[121A";

		frame1148();
		usleep(5000);
		std::cout << "\e[121A";

		frame1149();
		usleep(5000);
		std::cout << "\e[121A";

		frame1150();
		usleep(5000);
		std::cout << "\e[121A";

		frame1151();
		usleep(5000);
		std::cout << "\e[121A";

		frame1152();
		usleep(5000);
		std::cout << "\e[121A";

		frame1153();
		usleep(5000);
		std::cout << "\e[121A";

		frame1154();
		usleep(5000);
		std::cout << "\e[121A";

		frame1155();
		usleep(5000);
		std::cout << "\e[121A";

		frame1156();
		usleep(5000);
		std::cout << "\e[121A";

		frame1157();
		usleep(5000);
		std::cout << "\e[121A";

		frame1158();
		usleep(5000);
		std::cout << "\e[121A";

		frame1159();
		usleep(5000);
		std::cout << "\e[121A";

		frame1160();
		usleep(5000);
		std::cout << "\e[121A";

		frame1161();
		usleep(5000);
		std::cout << "\e[121A";

		frame1162();
		usleep(5000);
		std::cout << "\e[121A";

		frame1163();
		usleep(5000);
		std::cout << "\e[121A";

		frame1164();
		usleep(5000);
		std::cout << "\e[121A";

		frame1165();
		usleep(5000);
		std::cout << "\e[121A";

		frame1166();
		usleep(5000);
		std::cout << "\e[121A";

		frame1167();
		usleep(5000);
		std::cout << "\e[121A";

		frame1168();
		usleep(5000);
		std::cout << "\e[121A";

		frame1169();
		usleep(5000);
		std::cout << "\e[121A";

		frame1170();
		usleep(5000);
		std::cout << "\e[121A";

		frame1171();
		usleep(5000);
		std::cout << "\e[121A";

		frame1172();
		usleep(5000);
		std::cout << "\e[121A";

		frame1173();
		usleep(5000);
		std::cout << "\e[121A";

		frame1174();
		usleep(5000);
		std::cout << "\e[121A";

		frame1175();
		usleep(5000);
		std::cout << "\e[121A";

		frame1176();
		usleep(5000);
		std::cout << "\e[121A";

		frame1177();
		usleep(5000);
		std::cout << "\e[121A";

		frame1178();
		usleep(5000);
		std::cout << "\e[121A";

		frame1179();
		usleep(5000);
		std::cout << "\e[121A";

		frame1180();
		usleep(5000);
		std::cout << "\e[121A";

		frame1181();
		usleep(5000);
		std::cout << "\e[121A";

		frame1182();
		usleep(5000);
		std::cout << "\e[121A";

		frame1183();
		usleep(5000);
		std::cout << "\e[121A";

		frame1184();
		usleep(5000);
		std::cout << "\e[121A";

		frame1185();
		usleep(5000);
		std::cout << "\e[121A";

		frame1186();
		usleep(5000);
		std::cout << "\e[121A";

		frame1187();
		usleep(5000);
		std::cout << "\e[121A";

		frame1188();
		usleep(5000);
		std::cout << "\e[121A";

		frame1189();
		usleep(5000);
		std::cout << "\e[121A";

		frame1190();
		usleep(5000);
		std::cout << "\e[121A";

		frame1191();
		usleep(5000);
		std::cout << "\e[121A";

		frame1192();
		usleep(5000);
		std::cout << "\e[121A";

		frame1193();
		usleep(5000);
		std::cout << "\e[121A";

		frame1194();
		usleep(5000);
		std::cout << "\e[121A";

		frame1195();
		usleep(5000);
		std::cout << "\e[121A";

		frame1196();
		usleep(5000);
		std::cout << "\e[121A";

		frame1197();
		usleep(5000);
		std::cout << "\e[121A";

		frame1198();
		usleep(5000);
		std::cout << "\e[121A";

		frame1199();
		usleep(5000);
		std::cout << "\e[121A";

		frame1200();
		usleep(5000);
		std::cout << "\e[121A";

		frame1201();
		usleep(5000);
		std::cout << "\e[121A";

		frame1202();
		usleep(5000);
		std::cout << "\e[121A";

		frame1203();
		usleep(5000);
		std::cout << "\e[121A";

		frame1204();
		usleep(5000);
		std::cout << "\e[121A";

		frame1205();
		usleep(5000);
		std::cout << "\e[121A";

		frame1206();
		usleep(5000);
		std::cout << "\e[121A";

		frame1207();
		usleep(5000);
		std::cout << "\e[121A";

		frame1208();
		usleep(5000);
		std::cout << "\e[121A";

		frame1209();
		usleep(5000);
		std::cout << "\e[121A";

		frame1210();
		usleep(5000);
		std::cout << "\e[121A";

		frame1211();
		usleep(5000);
		std::cout << "\e[121A";

		frame1212();
		usleep(5000);
		std::cout << "\e[121A";

		frame1213();
		usleep(5000);
		std::cout << "\e[121A";

		frame1214();
		usleep(5000);
		std::cout << "\e[121A";

		frame1215();
		usleep(5000);
		std::cout << "\e[121A";

		frame1216();
		usleep(5000);
		std::cout << "\e[121A";

		frame1217();
		usleep(5000);
		std::cout << "\e[121A";

		frame1218();
		usleep(5000);
		std::cout << "\e[121A";

		frame1219();
		usleep(5000);
		std::cout << "\e[121A";

		frame1220();
		usleep(5000);
		std::cout << "\e[121A";

		frame1221();
		usleep(5000);
		std::cout << "\e[121A";

		frame1222();
		usleep(5000);
		std::cout << "\e[121A";

		frame1223();
		usleep(5000);
		std::cout << "\e[121A";

		frame1224();
		usleep(5000);
		std::cout << "\e[121A";

		frame1225();
		usleep(5000);
		std::cout << "\e[121A";

		frame1226();
		usleep(5000);
		std::cout << "\e[121A";

		frame1227();
		usleep(5000);
		std::cout << "\e[121A";

		frame1228();
		usleep(5000);
		std::cout << "\e[121A";

		frame1229();
		usleep(5000);
		std::cout << "\e[121A";

		frame1230();
		usleep(5000);
		std::cout << "\e[121A";

		frame1231();
		usleep(5000);
		std::cout << "\e[121A";

		frame1232();
		usleep(5000);
		std::cout << "\e[121A";

		frame1233();
		usleep(5000);
		std::cout << "\e[121A";

		frame1234();
		usleep(5000);
		std::cout << "\e[121A";

		frame1235();
		usleep(5000);
		std::cout << "\e[121A";

		frame1236();
		usleep(5000);
		std::cout << "\e[121A";

		frame1237();
		usleep(5000);
		std::cout << "\e[121A";

		frame1238();
		usleep(5000);
		std::cout << "\e[121A";

		frame1239();
		usleep(5000);
		std::cout << "\e[121A";

		frame1240();
		usleep(5000);
		std::cout << "\e[121A";

		frame1241();
		usleep(5000);
		std::cout << "\e[121A";

		frame1242();
		usleep(5000);
		std::cout << "\e[121A";

		frame1243();
		usleep(5000);
		std::cout << "\e[121A";

		frame1244();
		usleep(5000);
		std::cout << "\e[121A";

		frame1245();
		usleep(5000);
		std::cout << "\e[121A";

		frame1246();
		usleep(5000);
		std::cout << "\e[121A";

		frame1247();
		usleep(5000);
		std::cout << "\e[121A";

		frame1248();
		usleep(5000);
		std::cout << "\e[121A";

		frame1249();
		usleep(5000);
		std::cout << "\e[121A";

		frame1250();
		usleep(5000);
		std::cout << "\e[121A";

		frame1251();
		usleep(5000);
		std::cout << "\e[121A";

		frame1252();
		usleep(5000);
		std::cout << "\e[121A";

		frame1253();
		usleep(5000);
		std::cout << "\e[121A";

		frame1254();
		usleep(5000);
		std::cout << "\e[121A";

		frame1255();
		usleep(5000);
		std::cout << "\e[121A";

		frame1256();
		usleep(5000);
		std::cout << "\e[121A";

		frame1257();
		usleep(5000);
		std::cout << "\e[121A";

		frame1258();
		usleep(5000);
		std::cout << "\e[121A";

		frame1259();
		usleep(5000);
		std::cout << "\e[121A";

		frame1260();
		usleep(5000);
		std::cout << "\e[121A";

		frame1261();
		usleep(5000);
		std::cout << "\e[121A";

		frame1262();
		usleep(5000);
		std::cout << "\e[121A";

		frame1263();
		usleep(5000);
		std::cout << "\e[121A";

		frame1264();
		usleep(5000);
		std::cout << "\e[121A";

		frame1265();
		usleep(5000);
		std::cout << "\e[121A";

		frame1266();
		usleep(5000);
		std::cout << "\e[121A";

		frame1267();
		usleep(5000);
		std::cout << "\e[121A";

		frame1268();
		usleep(5000);
		std::cout << "\e[121A";

		frame1269();
		usleep(5000);
		std::cout << "\e[121A";

		frame1270();
		usleep(5000);
		std::cout << "\e[121A";

		frame1271();
		usleep(5000);
		std::cout << "\e[121A";

		frame1272();
		usleep(5000);
		std::cout << "\e[121A";

		frame1273();
		usleep(5000);
		std::cout << "\e[121A";

		frame1274();
		usleep(5000);
		std::cout << "\e[121A";

		frame1275();
		usleep(5000);
		std::cout << "\e[121A";

		frame1276();
		usleep(5000);
		std::cout << "\e[121A";

		frame1277();
		usleep(5000);
		std::cout << "\e[121A";

		frame1278();
		usleep(5000);
		std::cout << "\e[121A";

		frame1279();
		usleep(5000);
		std::cout << "\e[121A";

		frame1280();
		usleep(5000);
		std::cout << "\e[121A";

		frame1281();
		usleep(5000);
		std::cout << "\e[121A";

		frame1282();
		usleep(5000);
		std::cout << "\e[121A";

		frame1283();
		usleep(5000);
		std::cout << "\e[121A";

		frame1284();
		usleep(5000);
		std::cout << "\e[121A";

		frame1285();
		usleep(5000);
		std::cout << "\e[121A";

		frame1286();
		usleep(5000);
		std::cout << "\e[121A";

		frame1287();
		usleep(5000);
		std::cout << "\e[121A";

		frame1288();
		usleep(5000);
		std::cout << "\e[121A";

		frame1289();
		usleep(5000);
		std::cout << "\e[121A";

		frame1290();
		usleep(5000);
		std::cout << "\e[121A";

		frame1291();
		usleep(5000);
		std::cout << "\e[121A";

		frame1292();
		usleep(5000);
		std::cout << "\e[121A";

		frame1293();
		usleep(5000);
		std::cout << "\e[121A";

		frame1294();
		usleep(5000);
		std::cout << "\e[121A";

		frame1295();
		usleep(5000);
		std::cout << "\e[121A";

		frame1296();
		usleep(5000);
		std::cout << "\e[121A";

		frame1297();
		usleep(5000);
		std::cout << "\e[121A";

		frame1298();
		usleep(5000);
		std::cout << "\e[121A";

		frame1299();
		usleep(5000);
		std::cout << "\e[121A";

		frame1300();
		usleep(5000);
		std::cout << "\e[121A";

		frame1301();
		usleep(5000);
		std::cout << "\e[121A";

		frame1302();
		usleep(5000);
		std::cout << "\e[121A";

		frame1303();
		usleep(5000);
		std::cout << "\e[121A";

		frame1304();
		usleep(5000);
		std::cout << "\e[121A";

		frame1305();
		usleep(5000);
		std::cout << "\e[121A";

		frame1306();
		usleep(5000);
		std::cout << "\e[121A";

		frame1307();
		usleep(5000);
		std::cout << "\e[121A";

		frame1308();
		usleep(5000);
		std::cout << "\e[121A";

		frame1309();
		usleep(5000);
		std::cout << "\e[121A";

		frame1310();
		usleep(5000);
		std::cout << "\e[121A";

		frame1311();
		usleep(5000);
		std::cout << "\e[121A";

		frame1312();
		usleep(5000);
		std::cout << "\e[121A";

		frame1313();
		usleep(5000);
		std::cout << "\e[121A";

		frame1314();
		usleep(5000);
		std::cout << "\e[121A";

		frame1315();
		usleep(5000);
		std::cout << "\e[121A";

		frame1316();
		usleep(5000);
		std::cout << "\e[121A";

		frame1317();
		usleep(5000);
		std::cout << "\e[121A";

		frame1318();
		usleep(5000);
		std::cout << "\e[121A";

		frame1319();
		usleep(5000);
		std::cout << "\e[121A";

		frame1320();
		usleep(5000);
		std::cout << "\e[121A";

		frame1321();
		usleep(5000);
		std::cout << "\e[121A";

		frame1322();
		usleep(5000);
		std::cout << "\e[121A";

		frame1323();
		usleep(5000);
		std::cout << "\e[121A";

		frame1324();
		usleep(5000);
		std::cout << "\e[121A";

		frame1325();
		usleep(5000);
		std::cout << "\e[121A";

		frame1326();
		usleep(5000);
		std::cout << "\e[121A";

		frame1327();
		usleep(5000);
		std::cout << "\e[121A";

		frame1328();
		usleep(5000);
		std::cout << "\e[121A";

		frame1329();
		usleep(5000);
		std::cout << "\e[121A";

		frame1330();
		usleep(5000);
		std::cout << "\e[121A";

		frame1331();
		usleep(5000);
		std::cout << "\e[121A";

		frame1332();
		usleep(5000);
		std::cout << "\e[121A";

		frame1333();
		usleep(5000);
		std::cout << "\e[121A";

		frame1334();
		usleep(5000);
		std::cout << "\e[121A";

		frame1335();
		usleep(5000);
		std::cout << "\e[121A";

		frame1336();
		usleep(5000);
		std::cout << "\e[121A";

		frame1337();
		usleep(5000);
		std::cout << "\e[121A";

		frame1338();
		usleep(5000);
		std::cout << "\e[121A";

		frame1339();
		usleep(5000);
		std::cout << "\e[121A";

		frame1340();
		usleep(5000);
		std::cout << "\e[121A";

		frame1341();
		usleep(5000);
		std::cout << "\e[121A";

		frame1342();
		usleep(5000);
		std::cout << "\e[121A";

		frame1343();
		usleep(5000);
		std::cout << "\e[121A";

		frame1344();
		usleep(5000);
		std::cout << "\e[121A";

		frame1345();
		usleep(5000);
		std::cout << "\e[121A";

		frame1346();
		usleep(5000);
		std::cout << "\e[121A";

		frame1347();
		usleep(5000);
		std::cout << "\e[121A";

		frame1348();
		usleep(5000);
		std::cout << "\e[121A";

		frame1349();
		usleep(5000);
		std::cout << "\e[121A";

		frame1350();
		usleep(5000);
		std::cout << "\e[121A";

		frame1351();
		usleep(5000);
		std::cout << "\e[121A";

		frame1352();
		usleep(5000);
		std::cout << "\e[121A";

		frame1353();
		usleep(5000);
		std::cout << "\e[121A";

		frame1354();
		usleep(5000);
		std::cout << "\e[121A";

		frame1355();
		usleep(5000);
		std::cout << "\e[121A";

		frame1356();
		usleep(5000);
		std::cout << "\e[121A";

		frame1357();
		usleep(5000);
		std::cout << "\e[121A";

		frame1358();
		usleep(5000);
		std::cout << "\e[121A";

		frame1359();
		usleep(5000);
		std::cout << "\e[121A";

		frame1360();
		usleep(5000);
		std::cout << "\e[121A";

		frame1361();
		usleep(5000);
		std::cout << "\e[121A";

		frame1362();
		usleep(5000);
		std::cout << "\e[121A";

		frame1363();
		usleep(5000);
		std::cout << "\e[121A";

		frame1364();
		usleep(5000);
		std::cout << "\e[121A";

		frame1365();
		usleep(5000);
		std::cout << "\e[121A";

		frame1366();
		usleep(5000);
		std::cout << "\e[121A";

		frame1367();
		usleep(5000);
		std::cout << "\e[121A";

		frame1368();
		usleep(5000);
		std::cout << "\e[121A";

		frame1369();
		usleep(5000);
		std::cout << "\e[121A";

		frame1370();
		usleep(5000);
		std::cout << "\e[121A";

		frame1371();
		usleep(5000);
		std::cout << "\e[121A";

		frame1372();
		usleep(5000);
		std::cout << "\e[121A";

		frame1373();
		usleep(5000);
		std::cout << "\e[121A";

		frame1374();
		usleep(5000);
		std::cout << "\e[121A";

		frame1375();
		usleep(5000);
		std::cout << "\e[121A";

		frame1376();
		usleep(5000);
		std::cout << "\e[121A";

		frame1377();
		usleep(5000);
		std::cout << "\e[121A";

		frame1378();
		usleep(5000);
		std::cout << "\e[121A";

		frame1379();
		usleep(5000);
		std::cout << "\e[121A";

		frame1380();
		usleep(5000);
		std::cout << "\e[121A";

		frame1381();
		usleep(5000);
		std::cout << "\e[121A";

		frame1382();
		usleep(5000);
		std::cout << "\e[121A";

		frame1383();
		usleep(5000);
		std::cout << "\e[121A";

		frame1384();
		usleep(5000);
		std::cout << "\e[121A";

		frame1385();
		usleep(5000);
		std::cout << "\e[121A";

		frame1386();
		usleep(5000);
		std::cout << "\e[121A";

		frame1387();
		usleep(5000);
		std::cout << "\e[121A";

		frame1388();
		usleep(5000);
		std::cout << "\e[121A";

		frame1389();
		usleep(5000);
		std::cout << "\e[121A";

		frame1390();
		usleep(5000);
		std::cout << "\e[121A";

		frame1391();
		usleep(5000);
		std::cout << "\e[121A";

		frame1392();
		usleep(5000);
		std::cout << "\e[121A";

		frame1393();
		usleep(5000);
		std::cout << "\e[121A";

		frame1394();
		usleep(5000);
		std::cout << "\e[121A";

		frame1395();
		usleep(5000);
		std::cout << "\e[121A";

		frame1396();
		usleep(5000);
		std::cout << "\e[121A";

		frame1397();
		usleep(5000);
		std::cout << "\e[121A";

		frame1398();
		usleep(5000);
		std::cout << "\e[121A";

		frame1399();
		usleep(5000);
		std::cout << "\e[121A";

		frame1400();
		usleep(5000);
		std::cout << "\e[121A";

		frame1401();
		usleep(5000);
		std::cout << "\e[121A";

		frame1402();
		usleep(5000);
		std::cout << "\e[121A";

		frame1403();
		usleep(5000);
		std::cout << "\e[121A";

		frame1404();
		usleep(5000);
		std::cout << "\e[121A";

		frame1405();
		usleep(5000);
		std::cout << "\e[121A";

		frame1406();
		usleep(5000);
		std::cout << "\e[121A";

		frame1407();
		usleep(5000);
		std::cout << "\e[121A";

		frame1408();
		usleep(5000);
		std::cout << "\e[121A";

		frame1409();
		usleep(5000);
		std::cout << "\e[121A";

		frame1410();
		usleep(5000);
		std::cout << "\e[121A";

		frame1411();
		usleep(5000);
		std::cout << "\e[121A";

		frame1412();
		usleep(5000);
		std::cout << "\e[121A";

		frame1413();
		usleep(5000);
		std::cout << "\e[121A";

		frame1414();
		usleep(5000);
		std::cout << "\e[121A";

		frame1415();
		usleep(5000);
		std::cout << "\e[121A";

		frame1416();
		usleep(5000);
		std::cout << "\e[121A";

		frame1417();
		usleep(5000);
		std::cout << "\e[121A";

		frame1418();
		usleep(5000);
		std::cout << "\e[121A";

		frame1419();
		usleep(5000);
		std::cout << "\e[121A";

		frame1420();
		usleep(5000);
		std::cout << "\e[121A";

		frame1421();
		usleep(5000);
		std::cout << "\e[121A";

		frame1422();
		usleep(5000);
		std::cout << "\e[121A";

		frame1423();
		usleep(5000);
		std::cout << "\e[121A";

		frame1424();
		usleep(5000);
		std::cout << "\e[121A";

		frame1425();
		usleep(5000);
		std::cout << "\e[121A";

		frame1426();
		usleep(5000);
		std::cout << "\e[121A";

		frame1427();
		usleep(5000);
		std::cout << "\e[121A";

		frame1428();
		usleep(5000);
		std::cout << "\e[121A";

		frame1429();
		usleep(5000);
		std::cout << "\e[121A";

		frame1430();
		usleep(5000);
		std::cout << "\e[121A";

		frame1431();
		usleep(5000);
		std::cout << "\e[121A";

		frame1432();
		usleep(5000);
		std::cout << "\e[121A";

		frame1433();
		usleep(5000);
		std::cout << "\e[121A";

		frame1434();
		usleep(5000);
		std::cout << "\e[121A";

		frame1435();
		usleep(5000);
		std::cout << "\e[121A";

		frame1436();
		usleep(5000);
		std::cout << "\e[121A";

		frame1437();
		usleep(5000);
		std::cout << "\e[121A";

		frame1438();
		usleep(5000);
		std::cout << "\e[121A";

		frame1439();
		usleep(5000);
		std::cout << "\e[121A";

		frame1440();
		usleep(5000);
		std::cout << "\e[121A";

		frame1441();
		usleep(5000);
		std::cout << "\e[121A";

		frame1442();
		usleep(5000);
		std::cout << "\e[121A";

		frame1443();
		usleep(5000);
		std::cout << "\e[121A";

		frame1444();
		usleep(5000);
		std::cout << "\e[121A";

		frame1445();
		usleep(5000);
		std::cout << "\e[121A";

		frame1446();
		usleep(5000);
		std::cout << "\e[121A";

		frame1447();
		usleep(5000);
		std::cout << "\e[121A";

		frame1448();
		usleep(5000);
		std::cout << "\e[121A";

		frame1449();
		usleep(5000);
		std::cout << "\e[121A";

		frame1450();
		usleep(5000);
		std::cout << "\e[121A";

		frame1451();
		usleep(5000);
		std::cout << "\e[121A";

		frame1452();
		usleep(5000);
		std::cout << "\e[121A";

		frame1453();
		usleep(5000);
		std::cout << "\e[121A";

		frame1454();
		usleep(5000);
		std::cout << "\e[121A";

		frame1455();
		usleep(5000);
		std::cout << "\e[121A";

		frame1456();
		usleep(5000);
		std::cout << "\e[121A";

		frame1457();
		usleep(5000);
		std::cout << "\e[121A";

		frame1458();
		usleep(5000);
		std::cout << "\e[121A";

		frame1459();
		usleep(5000);
		std::cout << "\e[121A";

		frame1460();
		usleep(5000);
		std::cout << "\e[121A";

		frame1461();
		usleep(5000);
		std::cout << "\e[121A";

		frame1462();
		usleep(5000);
		std::cout << "\e[121A";

		frame1463();
		usleep(5000);
		std::cout << "\e[121A";

		frame1464();
		usleep(5000);
		std::cout << "\e[121A";

		frame1465();
		usleep(5000);
		std::cout << "\e[121A";

		frame1466();
		usleep(5000);
		std::cout << "\e[121A";

		frame1467();
		usleep(5000);
		std::cout << "\e[121A";

		frame1468();
		usleep(5000);
		std::cout << "\e[121A";

		frame1469();
		usleep(5000);
		std::cout << "\e[121A";

		frame1470();
		usleep(5000);
		std::cout << "\e[121A";

		frame1471();
		usleep(5000);
		std::cout << "\e[121A";

		frame1472();
		usleep(5000);
		std::cout << "\e[121A";

		frame1473();
		usleep(5000);
		std::cout << "\e[121A";

		frame1474();
		usleep(5000);
		std::cout << "\e[121A";

		frame1475();
		usleep(5000);
		std::cout << "\e[121A";

		frame1476();
		usleep(5000);
		std::cout << "\e[121A";

		frame1477();
		usleep(5000);
		std::cout << "\e[121A";

		frame1478();
		usleep(5000);
		std::cout << "\e[121A";

		frame1479();
		usleep(5000);
		std::cout << "\e[121A";

		frame1480();
		usleep(5000);
		std::cout << "\e[121A";

		frame1481();
		usleep(5000);
		std::cout << "\e[121A";

		frame1482();
		usleep(5000);
		std::cout << "\e[121A";

		frame1483();
		usleep(5000);
		std::cout << "\e[121A";

		frame1484();
		usleep(5000);
		std::cout << "\e[121A";

		frame1485();
		usleep(5000);
		std::cout << "\e[121A";

		frame1486();
		usleep(5000);
		std::cout << "\e[121A";

		frame1487();
		usleep(5000);
		std::cout << "\e[121A";

		frame1488();
		usleep(5000);
		std::cout << "\e[121A";

		frame1489();
		usleep(5000);
		std::cout << "\e[121A";

		frame1490();
		usleep(5000);
		std::cout << "\e[121A";

		frame1491();
		usleep(5000);
		std::cout << "\e[121A";

		frame1492();
		usleep(5000);
		std::cout << "\e[121A";

		frame1493();
		usleep(5000);
		std::cout << "\e[121A";

		frame1494();
		usleep(5000);
		std::cout << "\e[121A";

		frame1495();
		usleep(5000);
		std::cout << "\e[121A";

		frame1496();
		usleep(5000);
		std::cout << "\e[121A";

		frame1497();
		usleep(5000);
		std::cout << "\e[121A";

		frame1498();
		usleep(5000);
		std::cout << "\e[121A";

		frame1499();
		usleep(5000);
		std::cout << "\e[121A";

		frame1500();
		usleep(5000);
		std::cout << "\e[121A";

		frame1501();
		usleep(5000);
		std::cout << "\e[121A";

		frame1502();
		usleep(5000);
		std::cout << "\e[121A";

		frame1503();
		usleep(5000);
		std::cout << "\e[121A";

		frame1504();
		usleep(5000);
		std::cout << "\e[121A";

		frame1505();
		usleep(5000);
		std::cout << "\e[121A";

		frame1506();
		usleep(5000);
		std::cout << "\e[121A";

		frame1507();
		usleep(5000);
		std::cout << "\e[121A";

		frame1508();
		usleep(5000);
		std::cout << "\e[121A";

		frame1509();
		usleep(5000);
		std::cout << "\e[121A";

		frame1510();
		usleep(5000);
		std::cout << "\e[121A";

		frame1511();
		usleep(5000);
		std::cout << "\e[121A";

		frame1512();
		usleep(5000);
		std::cout << "\e[121A";

		frame1513();
		usleep(5000);
		std::cout << "\e[121A";

		frame1514();
		usleep(5000);
		std::cout << "\e[121A";

		frame1515();
		usleep(5000);
		std::cout << "\e[121A";

		frame1516();
		usleep(5000);
		std::cout << "\e[121A";

		frame1517();
		usleep(5000);
		std::cout << "\e[121A";

		frame1518();
		usleep(5000);
		std::cout << "\e[121A";

		frame1519();
		usleep(5000);
		std::cout << "\e[121A";

		frame1520();
		usleep(5000);
		std::cout << "\e[121A";

		frame1521();
		usleep(5000);
		std::cout << "\e[121A";

		frame1522();
		usleep(5000);
		std::cout << "\e[121A";

		frame1523();
		usleep(5000);
		std::cout << "\e[121A";

		frame1524();
		usleep(5000);
		std::cout << "\e[121A";

		frame1525();
		usleep(5000);
		std::cout << "\e[121A";

		frame1526();
		usleep(5000);
		std::cout << "\e[121A";

		frame1527();
		usleep(5000);
		std::cout << "\e[121A";

		frame1528();
		usleep(5000);
		std::cout << "\e[121A";

		frame1529();
		usleep(5000);
		std::cout << "\e[121A";

		frame1530();
		usleep(5000);
		std::cout << "\e[121A";

		frame1531();
		usleep(5000);
		std::cout << "\e[121A";

		frame1532();
		usleep(5000);
		std::cout << "\e[121A";

		frame1533();
		usleep(5000);
		std::cout << "\e[121A";

		frame1534();
		usleep(5000);
		std::cout << "\e[121A";

		frame1535();
		usleep(5000);
		std::cout << "\e[121A";

		frame1536();
		usleep(5000);
		std::cout << "\e[121A";

		frame1537();
		usleep(5000);
		std::cout << "\e[121A";

		frame1538();
		usleep(5000);
		std::cout << "\e[121A";

		frame1539();
		usleep(5000);
		std::cout << "\e[121A";

		frame1540();
		usleep(5000);
		std::cout << "\e[121A";

		frame1541();
		usleep(5000);
		std::cout << "\e[121A";

		frame1542();
		usleep(5000);
		std::cout << "\e[121A";

		frame1543();
		usleep(5000);
		std::cout << "\e[121A";

		frame1544();
		usleep(5000);
		std::cout << "\e[121A";

		frame1545();
		usleep(5000);
		std::cout << "\e[121A";

		frame1546();
		usleep(5000);
		std::cout << "\e[121A";

		frame1547();
		usleep(5000);
		std::cout << "\e[121A";

		frame1548();
		usleep(5000);
		std::cout << "\e[121A";

		frame1549();
		usleep(5000);
		std::cout << "\e[121A";

		frame1550();
		usleep(5000);
		std::cout << "\e[121A";

		frame1551();
		usleep(5000);
		std::cout << "\e[121A";

		frame1552();
		usleep(5000);
		std::cout << "\e[121A";

		frame1553();
		usleep(5000);
		std::cout << "\e[121A";

		frame1554();
		usleep(5000);
		std::cout << "\e[121A";

		frame1555();
		usleep(5000);
		std::cout << "\e[121A";

		frame1556();
		usleep(5000);
		std::cout << "\e[121A";

		frame1557();
		usleep(5000);
		std::cout << "\e[121A";

		frame1558();
		usleep(5000);
		std::cout << "\e[121A";

		frame1559();
		usleep(5000);
		std::cout << "\e[121A";

		frame1560();
		usleep(5000);
		std::cout << "\e[121A";

		frame1561();
		usleep(5000);
		std::cout << "\e[121A";

		frame1562();
		usleep(5000);
		std::cout << "\e[121A";

		frame1563();
		usleep(5000);
		std::cout << "\e[121A";

		frame1564();
		usleep(5000);
		std::cout << "\e[121A";

		frame1565();
		usleep(5000);
		std::cout << "\e[121A";

		frame1566();
		usleep(5000);
		std::cout << "\e[121A";

		frame1567();
		usleep(5000);
		std::cout << "\e[121A";

		frame1568();
		usleep(5000);
		std::cout << "\e[121A";

		frame1569();
		usleep(5000);
		std::cout << "\e[121A";

		frame1570();
		usleep(5000);
		std::cout << "\e[121A";

		frame1571();
		usleep(5000);
		std::cout << "\e[121A";

		frame1572();
		usleep(5000);
		std::cout << "\e[121A";

		frame1573();
		usleep(5000);
		std::cout << "\e[121A";

		frame1574();
		usleep(5000);
		std::cout << "\e[121A";

		frame1575();
		usleep(5000);
		std::cout << "\e[121A";

		frame1576();
		usleep(5000);
		std::cout << "\e[121A";

		frame1577();
		usleep(5000);
		std::cout << "\e[121A";

		frame1578();
		usleep(5000);
		std::cout << "\e[121A";

		frame1579();
		usleep(5000);
		std::cout << "\e[121A";

		frame1580();
		usleep(5000);
		std::cout << "\e[121A";

		frame1581();
		usleep(5000);
		std::cout << "\e[121A";

		frame1582();
		usleep(5000);
		std::cout << "\e[121A";

		frame1583();
		usleep(5000);
		std::cout << "\e[121A";

		frame1584();
		usleep(5000);
		std::cout << "\e[121A";

		frame1585();
		usleep(5000);
		std::cout << "\e[121A";

		frame1586();
		usleep(5000);
		std::cout << "\e[121A";

		frame1587();
		usleep(5000);
		std::cout << "\e[121A";

		frame1588();
		usleep(5000);
		std::cout << "\e[121A";

		frame1589();
		usleep(5000);
		std::cout << "\e[121A";

		frame1590();
		usleep(5000);
		std::cout << "\e[121A";

		frame1591();
		usleep(5000);
		std::cout << "\e[121A";

		frame1592();
		usleep(5000);
		std::cout << "\e[121A";

		frame1593();
		usleep(5000);
		std::cout << "\e[121A";

		frame1594();
		usleep(5000);
		std::cout << "\e[121A";

		frame1595();
		usleep(5000);
		std::cout << "\e[121A";

		frame1596();
		usleep(5000);
		std::cout << "\e[121A";

		frame1597();
		usleep(5000);
		std::cout << "\e[121A";

		frame1598();
		usleep(5000);
		std::cout << "\e[121A";

		frame1599();
		usleep(5000);
		std::cout << "\e[121A";

		frame1600();
		usleep(5000);
		std::cout << "\e[121A";

		frame1601();
		usleep(5000);
		std::cout << "\e[121A";

		frame1602();
		usleep(5000);
		std::cout << "\e[121A";

		frame1603();
		usleep(5000);
		std::cout << "\e[121A";

		frame1604();
		usleep(5000);
		std::cout << "\e[121A";

		frame1605();
		usleep(5000);
		std::cout << "\e[121A";

		frame1606();
		usleep(5000);
		std::cout << "\e[121A";

		frame1607();
		usleep(5000);
		std::cout << "\e[121A";

		frame1608();
		usleep(5000);
		std::cout << "\e[121A";

		frame1609();
		usleep(5000);
		std::cout << "\e[121A";

		frame1610();
		usleep(5000);
		std::cout << "\e[121A";

		frame1611();
		usleep(5000);
		std::cout << "\e[121A";

		frame1612();
		usleep(5000);
		std::cout << "\e[121A";

		frame1613();
		usleep(5000);
		std::cout << "\e[121A";

		frame1614();
		usleep(5000);
		std::cout << "\e[121A";

		frame1615();
		usleep(5000);
		std::cout << "\e[121A";

		frame1616();
		usleep(5000);
		std::cout << "\e[121A";

		frame1617();
		usleep(5000);
		std::cout << "\e[121A";

		frame1618();
		usleep(5000);
		std::cout << "\e[121A";

		frame1619();
		usleep(5000);
		std::cout << "\e[121A";

		frame1620();
		usleep(5000);
		std::cout << "\e[121A";

		frame1621();
		usleep(5000);
		std::cout << "\e[121A";

		frame1622();
		usleep(5000);
		std::cout << "\e[121A";

		frame1623();
		usleep(5000);
		std::cout << "\e[121A";

		frame1624();
		usleep(5000);
		std::cout << "\e[121A";

		frame1625();
		usleep(5000);
		std::cout << "\e[121A";

		frame1626();
		usleep(5000);
		std::cout << "\e[121A";

		frame1627();
		usleep(5000);
		std::cout << "\e[121A";

		frame1628();
		usleep(5000);
		std::cout << "\e[121A";

		frame1629();
		usleep(5000);
		std::cout << "\e[121A";

		frame1630();
		usleep(5000);
		std::cout << "\e[121A";

		frame1631();
		usleep(5000);
		std::cout << "\e[121A";

		frame1632();
		usleep(5000);
		std::cout << "\e[121A";

		frame1633();
		usleep(5000);
		std::cout << "\e[121A";

		frame1634();
		usleep(5000);
		std::cout << "\e[121A";

		frame1635();
		usleep(5000);
		std::cout << "\e[121A";

		frame1636();
		usleep(5000);
		std::cout << "\e[121A";

		frame1637();
		usleep(5000);
		std::cout << "\e[121A";

		frame1638();
		usleep(5000);
		std::cout << "\e[121A";

		frame1639();
		usleep(5000);
		std::cout << "\e[121A";

		frame1640();
		usleep(5000);
		std::cout << "\e[121A";

		frame1641();
		usleep(5000);
		std::cout << "\e[121A";

		frame1642();
		usleep(5000);
		std::cout << "\e[121A";

		frame1643();
		usleep(5000);
		std::cout << "\e[121A";

		frame1644();
		usleep(5000);
		std::cout << "\e[121A";

		frame1645();
		usleep(5000);
		std::cout << "\e[121A";

		frame1646();
		usleep(5000);
		std::cout << "\e[121A";

		frame1647();
		usleep(5000);
		std::cout << "\e[121A";

		frame1648();
		usleep(5000);
		std::cout << "\e[121A";

		frame1649();
		usleep(5000);
		std::cout << "\e[121A";

		frame1650();
		usleep(5000);
		std::cout << "\e[121A";

		frame1651();
		usleep(5000);
		std::cout << "\e[121A";

		frame1652();
		usleep(5000);
		std::cout << "\e[121A";

		frame1653();
		usleep(5000);
		std::cout << "\e[121A";

		frame1654();
		usleep(5000);
		std::cout << "\e[121A";

		frame1655();
		usleep(5000);
		std::cout << "\e[121A";

		frame1656();
		usleep(5000);
		std::cout << "\e[121A";

		frame1657();
		usleep(5000);
		std::cout << "\e[121A";

		frame1658();
		usleep(5000);
		std::cout << "\e[121A";

		frame1659();
		usleep(5000);
		std::cout << "\e[121A";

		frame1660();
		usleep(5000);
		std::cout << "\e[121A";

		frame1661();
		usleep(5000);
		std::cout << "\e[121A";

		frame1662();
		usleep(5000);
		std::cout << "\e[121A";

		frame1663();
		usleep(5000);
		std::cout << "\e[121A";

		frame1664();
		usleep(5000);
		std::cout << "\e[121A";

		frame1665();
		usleep(5000);
		std::cout << "\e[121A";

		frame1666();
		usleep(5000);
		std::cout << "\e[121A";

		frame1667();
		usleep(5000);
		std::cout << "\e[121A";

		frame1668();
		usleep(5000);
		std::cout << "\e[121A";

		frame1669();
		usleep(5000);
		std::cout << "\e[121A";

		frame1670();
		usleep(5000);
		std::cout << "\e[121A";

		frame1671();
		usleep(5000);
		std::cout << "\e[121A";

		frame1672();
		usleep(5000);
		std::cout << "\e[121A";

		frame1673();
		usleep(5000);
		std::cout << "\e[121A";

		frame1674();
		usleep(5000);
		std::cout << "\e[121A";

		frame1675();
		usleep(5000);
		std::cout << "\e[121A";

		frame1676();
		usleep(5000);
		std::cout << "\e[121A";

		frame1677();
		usleep(5000);
		std::cout << "\e[121A";

		frame1678();
		usleep(5000);
		std::cout << "\e[121A";

		frame1679();
		usleep(5000);
		std::cout << "\e[121A";

		frame1680();
		usleep(5000);
		std::cout << "\e[121A";

		frame1681();
		usleep(5000);
		std::cout << "\e[121A";

		frame1682();
		usleep(5000);
		std::cout << "\e[121A";

		frame1683();
		usleep(5000);
		std::cout << "\e[121A";

		frame1684();
		usleep(5000);
		std::cout << "\e[121A";

		frame1685();
		usleep(5000);
		std::cout << "\e[121A";

		frame1686();
		usleep(5000);
		std::cout << "\e[121A";

		frame1687();
		usleep(5000);
		std::cout << "\e[121A";

		frame1688();
		usleep(5000);
		std::cout << "\e[121A";

		frame1689();
		usleep(5000);
		std::cout << "\e[121A";

		frame1690();
		usleep(5000);
		std::cout << "\e[121A";

		frame1691();
		usleep(5000);
		std::cout << "\e[121A";

		frame1692();
		usleep(5000);
		std::cout << "\e[121A";

		frame1693();
		usleep(5000);
		std::cout << "\e[121A";

		frame1694();
		usleep(5000);
		std::cout << "\e[121A";

		frame1695();
		usleep(5000);
		std::cout << "\e[121A";

		frame1696();
		usleep(5000);
		std::cout << "\e[121A";

		frame1697();
		usleep(5000);
		std::cout << "\e[121A";

		frame1698();
		usleep(5000);
		std::cout << "\e[121A";

		frame1699();
		usleep(5000);
		std::cout << "\e[121A";

		frame1700();
		usleep(5000);
		std::cout << "\e[121A";

		frame1701();
		usleep(5000);
		std::cout << "\e[121A";

		frame1702();
		usleep(5000);
		std::cout << "\e[121A";

		frame1703();
		usleep(5000);
		std::cout << "\e[121A";

		frame1704();
		usleep(5000);
		std::cout << "\e[121A";

		frame1705();
		usleep(5000);
		std::cout << "\e[121A";

		frame1706();
		usleep(5000);
		std::cout << "\e[121A";

		frame1707();
		usleep(5000);
		std::cout << "\e[121A";

		frame1708();
		usleep(5000);
		std::cout << "\e[121A";

		frame1709();
		usleep(5000);
		std::cout << "\e[121A";

		frame1710();
		usleep(5000);
		std::cout << "\e[121A";

		frame1711();
		usleep(5000);
		std::cout << "\e[121A";

		frame1712();
		usleep(5000);
		std::cout << "\e[121A";

		frame1713();
		usleep(5000);
		std::cout << "\e[121A";

		frame1714();
		usleep(5000);
		std::cout << "\e[121A";

		frame1715();
		usleep(5000);
		std::cout << "\e[121A";

		frame1716();
		usleep(5000);
		std::cout << "\e[121A";

		frame1717();
		usleep(5000);
		std::cout << "\e[121A";

		frame1718();
		usleep(5000);
		std::cout << "\e[121A";

		frame1719();
		usleep(5000);
		std::cout << "\e[121A";

		frame1720();
		usleep(5000);
		std::cout << "\e[121A";

		frame1721();
		usleep(5000);
		std::cout << "\e[121A";

		frame1722();
		usleep(5000);
		std::cout << "\e[121A";

		frame1723();
		usleep(5000);
		std::cout << "\e[121A";

		frame1724();
		usleep(5000);
		std::cout << "\e[121A";

		frame1725();
		usleep(5000);
		std::cout << "\e[121A";

		frame1726();
		usleep(5000);
		std::cout << "\e[121A";

		frame1727();
		usleep(5000);
		std::cout << "\e[121A";

		frame1728();
		usleep(5000);
		std::cout << "\e[121A";

		frame1729();
		usleep(5000);
		std::cout << "\e[121A";

		frame1730();
		usleep(5000);
		std::cout << "\e[121A";

		frame1731();
		usleep(5000);
		std::cout << "\e[121A";

		frame1732();
		usleep(5000);
		std::cout << "\e[121A";

		frame1733();
		usleep(5000);
		std::cout << "\e[121A";

		frame1734();
		usleep(5000);
		std::cout << "\e[121A";

		frame1735();
		usleep(5000);
		std::cout << "\e[121A";

		frame1736();
		usleep(5000);
		std::cout << "\e[121A";

		frame1737();
		usleep(5000);
		std::cout << "\e[121A";

		frame1738();
		usleep(5000);
		std::cout << "\e[121A";

		frame1739();
		usleep(5000);
		std::cout << "\e[121A";

		frame1740();
		usleep(5000);
		std::cout << "\e[121A";

		frame1741();
		usleep(5000);
		std::cout << "\e[121A";

		frame1742();
		usleep(5000);
		std::cout << "\e[121A";

		frame1743();
		usleep(5000);
		std::cout << "\e[121A";

		frame1744();
		usleep(5000);
		std::cout << "\e[121A";

		frame1745();
		usleep(5000);
		std::cout << "\e[121A";

		frame1746();
		usleep(5000);
		std::cout << "\e[121A";

		frame1747();
		usleep(5000);
		std::cout << "\e[121A";

		frame1748();
		usleep(5000);
		std::cout << "\e[121A";

		frame1749();
		usleep(5000);
		std::cout << "\e[121A";

		frame1750();
		usleep(5000);
		std::cout << "\e[121A";

		frame1751();
		usleep(5000);
		std::cout << "\e[121A";

		frame1752();
		usleep(5000);
		std::cout << "\e[121A";

		frame1753();
		usleep(5000);
		std::cout << "\e[121A";

		frame1754();
		usleep(5000);
		std::cout << "\e[121A";

		frame1755();
		usleep(5000);
		std::cout << "\e[121A";

		frame1756();
		usleep(5000);
		std::cout << "\e[121A";

		frame1757();
		usleep(5000);
		std::cout << "\e[121A";

		frame1758();
		usleep(5000);
		std::cout << "\e[121A";

		frame1759();
		usleep(5000);
		std::cout << "\e[121A";

		frame1760();
		usleep(5000);
		std::cout << "\e[121A";

		frame1761();
		usleep(5000);
		std::cout << "\e[121A";

		frame1762();
		usleep(5000);
		std::cout << "\e[121A";

		frame1763();
		usleep(5000);
		std::cout << "\e[121A";

		frame1764();
		usleep(5000);
		std::cout << "\e[121A";

		frame1765();
		usleep(5000);
		std::cout << "\e[121A";

		frame1766();
		usleep(5000);
		std::cout << "\e[121A";

		frame1767();
		usleep(5000);
		std::cout << "\e[121A";

		frame1768();
		usleep(5000);
		std::cout << "\e[121A";

		frame1769();
		usleep(5000);
		std::cout << "\e[121A";

		frame1770();
		usleep(5000);
		std::cout << "\e[121A";

		frame1771();
		usleep(5000);
		std::cout << "\e[121A";

		frame1772();
		usleep(5000);
		std::cout << "\e[121A";

		frame1773();
		usleep(5000);
		std::cout << "\e[121A";

		frame1774();
		usleep(5000);
		std::cout << "\e[121A";

		frame1775();
		usleep(5000);
		std::cout << "\e[121A";

		frame1776();
		usleep(5000);
		std::cout << "\e[121A";

		frame1777();
		usleep(5000);
		std::cout << "\e[121A";

		frame1778();
		usleep(5000);
		std::cout << "\e[121A";

		frame1779();
		usleep(5000);
		std::cout << "\e[121A";

		frame1780();
		usleep(5000);
		std::cout << "\e[121A";

		frame1781();
		usleep(5000);
		std::cout << "\e[121A";

		frame1782();
		usleep(5000);
		std::cout << "\e[121A";

		frame1783();
		usleep(5000);
		std::cout << "\e[121A";

		frame1784();
		usleep(5000);
		std::cout << "\e[121A";

		frame1785();
		usleep(5000);
		std::cout << "\e[121A";

		frame1786();
		usleep(5000);
		std::cout << "\e[121A";

		frame1787();
		usleep(5000);
		std::cout << "\e[121A";

		frame1788();
		usleep(5000);
		std::cout << "\e[121A";

		frame1789();
		usleep(5000);
		std::cout << "\e[121A";

		frame1790();
		usleep(5000);
		std::cout << "\e[121A";

		frame1791();
		usleep(5000);
		std::cout << "\e[121A";

		frame1792();
		usleep(5000);
		std::cout << "\e[121A";

		frame1793();
		usleep(5000);
		std::cout << "\e[121A";

		frame1794();
		usleep(5000);
		std::cout << "\e[121A";

		frame1795();
		usleep(5000);
		std::cout << "\e[121A";

		frame1796();
		usleep(5000);
		std::cout << "\e[121A";

		frame1797();
		usleep(5000);
		std::cout << "\e[121A";

		frame1798();
		usleep(5000);
		std::cout << "\e[121A";

		frame1799();
		usleep(5000);
		std::cout << "\e[121A";

		frame1800();
		usleep(5000);
		std::cout << "\e[121A";

		frame1801();
		usleep(5000);
		std::cout << "\e[121A";

		frame1802();
		usleep(5000);
		std::cout << "\e[121A";

		frame1803();
		usleep(5000);
		std::cout << "\e[121A";

		frame1804();
		usleep(5000);
		std::cout << "\e[121A";

		frame1805();
		usleep(5000);
		std::cout << "\e[121A";

		frame1806();
		usleep(5000);
		std::cout << "\e[121A";

		frame1807();
		usleep(5000);
		std::cout << "\e[121A";

		frame1808();
		usleep(5000);
		std::cout << "\e[121A";

		frame1809();
		usleep(5000);
		std::cout << "\e[121A";

		frame1810();
		usleep(5000);
		std::cout << "\e[121A";

		frame1811();
		usleep(5000);
		std::cout << "\e[121A";

		frame1812();
		usleep(5000);
		std::cout << "\e[121A";

		frame1813();
		usleep(5000);
		std::cout << "\e[121A";

		frame1814();
		usleep(5000);
		std::cout << "\e[121A";

		frame1815();
		usleep(5000);
		std::cout << "\e[121A";

		frame1816();
		usleep(5000);
		std::cout << "\e[121A";

		frame1817();
		usleep(5000);
		std::cout << "\e[121A";

		frame1818();
		usleep(5000);
		std::cout << "\e[121A";

		frame1819();
		usleep(5000);
		std::cout << "\e[121A";

		frame1820();
		usleep(5000);
		std::cout << "\e[121A";

		frame1821();
		usleep(5000);
		std::cout << "\e[121A";

		frame1822();
		usleep(5000);
		std::cout << "\e[121A";

		frame1823();
		usleep(5000);
		std::cout << "\e[121A";

		frame1824();
		usleep(5000);
		std::cout << "\e[121A";

		frame1825();
		usleep(5000);
		std::cout << "\e[121A";

		frame1826();
		usleep(5000);
		std::cout << "\e[121A";

		frame1827();
		usleep(5000);
		std::cout << "\e[121A";

		frame1828();
		usleep(5000);
		std::cout << "\e[121A";

		frame1829();
		usleep(5000);
		std::cout << "\e[121A";

		frame1830();
		usleep(5000);
		std::cout << "\e[121A";

		frame1831();
		usleep(5000);
		std::cout << "\e[121A";

		frame1832();
		usleep(5000);
		std::cout << "\e[121A";

		frame1833();
		usleep(5000);
		std::cout << "\e[121A";

		frame1834();
		usleep(5000);
		std::cout << "\e[121A";

		frame1835();
		usleep(5000);
		std::cout << "\e[121A";

		frame1836();
		usleep(5000);
		std::cout << "\e[121A";

		frame1837();
		usleep(5000);
		std::cout << "\e[121A";

		frame1838();
		usleep(5000);
		std::cout << "\e[121A";

		frame1839();
		usleep(5000);
		std::cout << "\e[121A";

		frame1840();
		usleep(5000);
		std::cout << "\e[121A";

		frame1841();
		usleep(5000);
		std::cout << "\e[121A";

		frame1842();
		usleep(5000);
		std::cout << "\e[121A";

		frame1843();
		usleep(5000);
		std::cout << "\e[121A";

		frame1844();
		usleep(5000);
		std::cout << "\e[121A";

		frame1845();
		usleep(5000);
		std::cout << "\e[121A";

		frame1846();
		usleep(5000);
		std::cout << "\e[121A";

		frame1847();
		usleep(5000);
		std::cout << "\e[121A";

		frame1848();
		usleep(5000);
		std::cout << "\e[121A";

		frame1849();
		usleep(5000);
		std::cout << "\e[121A";

		frame1850();
		usleep(5000);
		std::cout << "\e[121A";

		frame1851();
		usleep(5000);
		std::cout << "\e[121A";

		frame1852();
		usleep(5000);
		std::cout << "\e[121A";

		frame1853();
		usleep(5000);
		std::cout << "\e[121A";

		frame1854();
		usleep(5000);
		std::cout << "\e[121A";

		frame1855();
		usleep(5000);
		std::cout << "\e[121A";

		frame1856();
		usleep(5000);
		std::cout << "\e[121A";

		frame1857();
		usleep(5000);
		std::cout << "\e[121A";

		frame1858();
		usleep(5000);
		std::cout << "\e[121A";

		frame1859();
		usleep(5000);
		std::cout << "\e[121A";

		frame1860();
		usleep(5000);
		std::cout << "\e[121A";

		frame1861();
		usleep(5000);
		std::cout << "\e[121A";

		frame1862();
		usleep(5000);
		std::cout << "\e[121A";

		frame1863();
		usleep(5000);
		std::cout << "\e[121A";

		frame1864();
		usleep(5000);
		std::cout << "\e[121A";

		frame1865();
		usleep(5000);
		std::cout << "\e[121A";

		frame1866();
		usleep(5000);
		std::cout << "\e[121A";

		frame1867();
		usleep(5000);
		std::cout << "\e[121A";

		frame1868();
		usleep(5000);
		std::cout << "\e[121A";

		frame1869();
		usleep(5000);
		std::cout << "\e[121A";

		frame1870();
		usleep(5000);
		std::cout << "\e[121A";

		frame1871();
		usleep(5000);
		std::cout << "\e[121A";

		frame1872();
		usleep(5000);
		std::cout << "\e[121A";

		frame1873();
		usleep(5000);
		std::cout << "\e[121A";

		frame1874();
		usleep(5000);
		std::cout << "\e[121A";

		frame1875();
		usleep(5000);
		std::cout << "\e[121A";

		frame1876();
		usleep(5000);
		std::cout << "\e[121A";

		frame1877();
		usleep(5000);
		std::cout << "\e[121A";

		frame1878();
		usleep(5000);
		std::cout << "\e[121A";

		frame1879();
		usleep(5000);
		std::cout << "\e[121A";

		frame1880();
		usleep(5000);
		std::cout << "\e[121A";

		frame1881();
		usleep(5000);
		std::cout << "\e[121A";

		frame1882();
		usleep(5000);
		std::cout << "\e[121A";

		frame1883();
		usleep(5000);
		std::cout << "\e[121A";

		frame1884();
		usleep(5000);
		std::cout << "\e[121A";

		frame1885();
		usleep(5000);
		std::cout << "\e[121A";

		frame1886();
		usleep(5000);
		std::cout << "\e[121A";

		frame1887();
		usleep(5000);
		std::cout << "\e[121A";

		frame1888();
		usleep(5000);
		std::cout << "\e[121A";

		frame1889();
		usleep(5000);
		std::cout << "\e[121A";

		frame1890();
		usleep(5000);
		std::cout << "\e[121A";

		frame1891();
		usleep(5000);
		std::cout << "\e[121A";

		frame1892();
		usleep(5000);
		std::cout << "\e[121A";

		frame1893();
		usleep(5000);
		std::cout << "\e[121A";

		frame1894();
		usleep(5000);
		std::cout << "\e[121A";

		frame1895();
		usleep(5000);
		std::cout << "\e[121A";

		frame1896();
		usleep(5000);
		std::cout << "\e[121A";

		frame1897();
		usleep(5000);
		std::cout << "\e[121A";

		frame1898();
		usleep(5000);
		std::cout << "\e[121A";

		frame1899();
		usleep(5000);
		std::cout << "\e[121A";

		frame1900();
		usleep(5000);
		std::cout << "\e[121A";

		frame1901();
		usleep(5000);
		std::cout << "\e[121A";

		frame1902();
		usleep(5000);
		std::cout << "\e[121A";

		frame1903();
		usleep(5000);
		std::cout << "\e[121A";

		frame1904();
		usleep(5000);
		std::cout << "\e[121A";

		frame1905();
		usleep(5000);
		std::cout << "\e[121A";

		frame1906();
		usleep(5000);
		std::cout << "\e[121A";

		frame1907();
		usleep(5000);
		std::cout << "\e[121A";

		frame1908();
		usleep(5000);
		std::cout << "\e[121A";

		frame1909();
		usleep(5000);
		std::cout << "\e[121A";

		frame1910();
		usleep(5000);
		std::cout << "\e[121A";

		frame1911();
		usleep(5000);
		std::cout << "\e[121A";

		frame1912();
		usleep(5000);
		std::cout << "\e[121A";

		frame1913();
		usleep(5000);
		std::cout << "\e[121A";

		frame1914();
		usleep(5000);
		std::cout << "\e[121A";

		frame1915();
		usleep(5000);
		std::cout << "\e[121A";

		frame1916();
		usleep(5000);
		std::cout << "\e[121A";

		frame1917();
		usleep(5000);
		std::cout << "\e[121A";

		frame1918();
		usleep(5000);
		std::cout << "\e[121A";

		frame1919();
		usleep(5000);
		std::cout << "\e[121A";

		frame1920();
		usleep(5000);
		std::cout << "\e[121A";

		frame1921();
		usleep(5000);
		std::cout << "\e[121A";

		frame1922();
		usleep(5000);
		std::cout << "\e[121A";

		frame1923();
		usleep(5000);
		std::cout << "\e[121A";

		frame1924();
		usleep(5000);
		std::cout << "\e[121A";

		frame1925();
		usleep(5000);
		std::cout << "\e[121A";

		frame1926();
		usleep(5000);
		std::cout << "\e[121A";

		frame1927();
		usleep(5000);
		std::cout << "\e[121A";

		frame1928();
		usleep(5000);
		std::cout << "\e[121A";

		frame1929();
		usleep(5000);
		std::cout << "\e[121A";

		frame1930();
		usleep(5000);
		std::cout << "\e[121A";

		frame1931();
		usleep(5000);
		std::cout << "\e[121A";

		frame1932();
		usleep(5000);
		std::cout << "\e[121A";

		frame1933();
		usleep(5000);
		std::cout << "\e[121A";

		frame1934();
		usleep(5000);
		std::cout << "\e[121A";

		frame1935();
		usleep(5000);
		std::cout << "\e[121A";

		frame1936();
		usleep(5000);
		std::cout << "\e[121A";

		frame1937();
		usleep(5000);
		std::cout << "\e[121A";

		frame1938();
		usleep(5000);
		std::cout << "\e[121A";

		frame1939();
		usleep(5000);
		std::cout << "\e[121A";

		frame1940();
		usleep(5000);
		std::cout << "\e[121A";

		frame1941();
		usleep(5000);
		std::cout << "\e[121A";

		frame1942();
		usleep(5000);
		std::cout << "\e[121A";

		frame1943();
		usleep(5000);
		std::cout << "\e[121A";

		frame1944();
		usleep(5000);
		std::cout << "\e[121A";

		frame1945();
		usleep(5000);
		std::cout << "\e[121A";

		frame1946();
		usleep(5000);
		std::cout << "\e[121A";

		frame1947();
		usleep(5000);
		std::cout << "\e[121A";

		frame1948();
		usleep(5000);
		std::cout << "\e[121A";

		frame1949();
		usleep(5000);
		std::cout << "\e[121A";

		frame1950();
		usleep(5000);
		std::cout << "\e[121A";

		frame1951();
		usleep(5000);
		std::cout << "\e[121A";

		frame1952();
		usleep(5000);
		std::cout << "\e[121A";

		frame1953();
		usleep(5000);
		std::cout << "\e[121A";

		frame1954();
		usleep(5000);
		std::cout << "\e[121A";

		frame1955();
		usleep(5000);
		std::cout << "\e[121A";

		frame1956();
		usleep(5000);
		std::cout << "\e[121A";

		frame1957();
		usleep(5000);
		std::cout << "\e[121A";

		frame1958();
		usleep(5000);
		std::cout << "\e[121A";

		frame1959();
		usleep(5000);
		std::cout << "\e[121A";

		frame1960();
		usleep(5000);
		std::cout << "\e[121A";

		frame1961();
		usleep(5000);
		std::cout << "\e[121A";

		frame1962();
		usleep(5000);
		std::cout << "\e[121A";

		frame1963();
		usleep(5000);
		std::cout << "\e[121A";

		frame1964();
		usleep(5000);
		std::cout << "\e[121A";

		frame1965();
		usleep(5000);
		std::cout << "\e[121A";

		frame1966();
		usleep(5000);
		std::cout << "\e[121A";

		frame1967();
		usleep(5000);
		std::cout << "\e[121A";

		frame1968();
		usleep(5000);
		std::cout << "\e[121A";

		frame1969();
		usleep(5000);
		std::cout << "\e[121A";

		frame1970();
		usleep(5000);
		std::cout << "\e[121A";

		frame1971();
		usleep(5000);
		std::cout << "\e[121A";

		frame1972();
		usleep(5000);
		std::cout << "\e[121A";

		frame1973();
		usleep(5000);
		std::cout << "\e[121A";

		frame1974();
		usleep(5000);
		std::cout << "\e[121A";

		frame1975();
		usleep(5000);
		std::cout << "\e[121A";

		frame1976();
		usleep(5000);
		std::cout << "\e[121A";

		frame1977();
		usleep(5000);
		std::cout << "\e[121A";

		frame1978();
		usleep(5000);
		std::cout << "\e[121A";

		frame1979();
		usleep(5000);
		std::cout << "\e[121A";

		frame1980();
		usleep(5000);
		std::cout << "\e[121A";

		frame1981();
		usleep(5000);
		std::cout << "\e[121A";

		frame1982();
		usleep(5000);
		std::cout << "\e[121A";

		frame1983();
		usleep(5000);
		std::cout << "\e[121A";

		frame1984();
		usleep(5000);
		std::cout << "\e[121A";

		frame1985();
		usleep(5000);
		std::cout << "\e[121A";

		frame1986();
		usleep(5000);
		std::cout << "\e[121A";

		frame1987();
		usleep(5000);
		std::cout << "\e[121A";

		frame1988();
		usleep(5000);
		std::cout << "\e[121A";

		frame1989();
		usleep(5000);
		std::cout << "\e[121A";

		frame1990();
		usleep(5000);
		std::cout << "\e[121A";

		frame1991();
		usleep(5000);
		std::cout << "\e[121A";

		frame1992();
		usleep(5000);
		std::cout << "\e[121A";

		frame1993();
		usleep(5000);
		std::cout << "\e[121A";

		frame1994();
		usleep(5000);
		std::cout << "\e[121A";

		frame1995();
		usleep(5000);
		std::cout << "\e[121A";

		frame1996();
		usleep(5000);
		std::cout << "\e[121A";

		frame1997();
		usleep(5000);
		std::cout << "\e[121A";

		frame1998();
		usleep(5000);
		std::cout << "\e[121A";

		frame1999();
		usleep(5000);
		std::cout << "\e[121A";

		frame2000();
		usleep(5000);
		std::cout << "\e[121A";

		frame2001();
		usleep(5000);
		std::cout << "\e[121A";

		frame2002();
		usleep(5000);
		std::cout << "\e[121A";

		frame2003();
		usleep(5000);
		std::cout << "\e[121A";

		frame2004();
		usleep(5000);
		std::cout << "\e[121A";

		frame2005();
		usleep(5000);
		std::cout << "\e[121A";

		frame2006();
		usleep(5000);
		std::cout << "\e[121A";

		frame2007();
		usleep(5000);
		std::cout << "\e[121A";

		frame2008();
		usleep(5000);
		std::cout << "\e[121A";

		frame2009();
		usleep(5000);
		std::cout << "\e[121A";

		frame2010();
		usleep(5000);
		std::cout << "\e[121A";

		frame2011();
		usleep(5000);
		std::cout << "\e[121A";

		frame2012();
		usleep(5000);
		std::cout << "\e[121A";

		frame2013();
		usleep(5000);
		std::cout << "\e[121A";

		frame2014();
		usleep(5000);
		std::cout << "\e[121A";

		frame2015();
		usleep(5000);
		std::cout << "\e[121A";

		frame2016();
		usleep(5000);
		std::cout << "\e[121A";

		frame2017();
		usleep(5000);
		std::cout << "\e[121A";

		frame2018();
		usleep(5000);
		std::cout << "\e[121A";

		frame2019();
		usleep(5000);
		std::cout << "\e[121A";

		frame2020();
		usleep(5000);
		std::cout << "\e[121A";

		frame2021();
		usleep(5000);
		std::cout << "\e[121A";

		frame2022();
		usleep(5000);
		std::cout << "\e[121A";

		frame2023();
		usleep(5000);
		std::cout << "\e[121A";

		frame2024();
		usleep(5000);
		std::cout << "\e[121A";

		frame2025();
		usleep(5000);
		std::cout << "\e[121A";

		frame2026();
		usleep(5000);
		std::cout << "\e[121A";

		frame2027();
		usleep(5000);
		std::cout << "\e[121A";

		frame2028();
		usleep(5000);
		std::cout << "\e[121A";

		frame2029();
		usleep(5000);
		std::cout << "\e[121A";

		frame2030();
		usleep(5000);
		std::cout << "\e[121A";

		frame2031();
		usleep(5000);
		std::cout << "\e[121A";

		frame2032();
		usleep(5000);
		std::cout << "\e[121A";

		frame2033();
		usleep(5000);
		std::cout << "\e[121A";

		frame2034();
		usleep(5000);
		std::cout << "\e[121A";

		frame2035();
		usleep(5000);
		std::cout << "\e[121A";

		frame2036();
		usleep(5000);
		std::cout << "\e[121A";

		frame2037();
		usleep(5000);
		std::cout << "\e[121A";

		frame2038();
		usleep(5000);
		std::cout << "\e[121A";

		frame2039();
		usleep(5000);
		std::cout << "\e[121A";

		frame2040();
		usleep(5000);
		std::cout << "\e[121A";

		frame2041();
		usleep(5000);
		std::cout << "\e[121A";

		frame2042();
		usleep(5000);
		std::cout << "\e[121A";

		frame2043();
		usleep(5000);
		std::cout << "\e[121A";

		frame2044();
		usleep(5000);
		std::cout << "\e[121A";

		frame2045();
		usleep(5000);
		std::cout << "\e[121A";

		frame2046();
		usleep(5000);
		std::cout << "\e[121A";

		frame2047();
		usleep(5000);
		std::cout << "\e[121A";

		frame2048();
		usleep(5000);
		std::cout << "\e[121A";

		frame2049();
		usleep(5000);
		std::cout << "\e[121A";

		frame2050();
		usleep(5000);
		std::cout << "\e[121A";

		frame2051();
		usleep(5000);
		std::cout << "\e[121A";

		frame2052();
		usleep(5000);
		std::cout << "\e[121A";

		frame2053();
		usleep(5000);
		std::cout << "\e[121A";

		frame2054();
		usleep(5000);
		std::cout << "\e[121A";

		frame2055();
		usleep(5000);
		std::cout << "\e[121A";

		frame2056();
		usleep(5000);
		std::cout << "\e[121A";

		frame2057();
		usleep(5000);
		std::cout << "\e[121A";

		frame2058();
		usleep(5000);
		std::cout << "\e[121A";

		frame2059();
		usleep(5000);
		std::cout << "\e[121A";

		frame2060();
		usleep(5000);
		std::cout << "\e[121A";

		frame2061();
		usleep(5000);
		std::cout << "\e[121A";

		frame2062();
		usleep(5000);
		std::cout << "\e[121A";

		frame2063();
		usleep(5000);
		std::cout << "\e[121A";

		frame2064();
		usleep(5000);
		std::cout << "\e[121A";

		frame2065();
		usleep(5000);
		std::cout << "\e[121A";

		frame2066();
		usleep(5000);
		std::cout << "\e[121A";

		frame2067();
		usleep(5000);
		std::cout << "\e[121A";

		frame2068();
		usleep(5000);
		std::cout << "\e[121A";

		frame2069();
		usleep(5000);
		std::cout << "\e[121A";

		frame2070();
		usleep(5000);
		std::cout << "\e[121A";

		frame2071();
		usleep(5000);
		std::cout << "\e[121A";

		frame2072();
		usleep(5000);
		std::cout << "\e[121A";

		frame2073();
		usleep(5000);
		std::cout << "\e[121A";

		frame2074();
		usleep(5000);
		std::cout << "\e[121A";

		frame2075();
		usleep(5000);
		std::cout << "\e[121A";

		frame2076();
		usleep(5000);
		std::cout << "\e[121A";

		frame2077();
		usleep(5000);
		std::cout << "\e[121A";

		frame2078();
		usleep(5000);
		std::cout << "\e[121A";

		frame2079();
		usleep(5000);
		std::cout << "\e[121A";

		frame2080();
		usleep(5000);
		std::cout << "\e[121A";

		frame2081();
		usleep(5000);
		std::cout << "\e[121A";

		frame2082();
		usleep(5000);
		std::cout << "\e[121A";

		frame2083();
		usleep(5000);
		std::cout << "\e[121A";

		frame2084();
		usleep(5000);
		std::cout << "\e[121A";

		frame2085();
		usleep(5000);
		std::cout << "\e[121A";

		frame2086();
		usleep(5000);
		std::cout << "\e[121A";

		frame2087();
		usleep(5000);
		std::cout << "\e[121A";

		frame2088();
		usleep(5000);
		std::cout << "\e[121A";

		frame2089();
		usleep(5000);
		std::cout << "\e[121A";

		frame2090();
		usleep(5000);
		std::cout << "\e[121A";

		frame2091();
		usleep(5000);
		std::cout << "\e[121A";

		frame2092();
		usleep(5000);
		std::cout << "\e[121A";

		frame2093();
		usleep(5000);
		std::cout << "\e[121A";

		frame2094();
		usleep(5000);
		std::cout << "\e[121A";

		frame2095();
		usleep(5000);
		std::cout << "\e[121A";

		frame2096();
		usleep(5000);
		std::cout << "\e[121A";

		frame2097();
		usleep(5000);
		std::cout << "\e[121A";

		frame2098();
		usleep(5000);
		std::cout << "\e[121A";

		frame2099();
		usleep(5000);
		std::cout << "\e[121A";

		frame2100();
		usleep(5000);
		std::cout << "\e[121A";

		frame2101();
		usleep(5000);
		std::cout << "\e[121A";

		frame2102();
		usleep(5000);
		std::cout << "\e[121A";

		frame2103();
		usleep(5000);
		std::cout << "\e[121A";

		frame2104();
		usleep(5000);
		std::cout << "\e[121A";

		frame2105();
		usleep(5000);
		std::cout << "\e[121A";

		frame2106();
		usleep(5000);
		std::cout << "\e[121A";

		frame2107();
		usleep(5000);
		std::cout << "\e[121A";

		frame2108();
		usleep(5000);
		std::cout << "\e[121A";

		frame2109();
		usleep(5000);
		std::cout << "\e[121A";

		frame2110();
		usleep(5000);
		std::cout << "\e[121A";

		frame2111();
		usleep(5000);
		std::cout << "\e[121A";

		frame2112();
		usleep(5000);
		std::cout << "\e[121A";

		frame2113();
		usleep(5000);
		std::cout << "\e[121A";

		frame2114();
		usleep(5000);
		std::cout << "\e[121A";

		frame2115();
		usleep(5000);
		std::cout << "\e[121A";

		frame2116();
		usleep(5000);
		std::cout << "\e[121A";

		frame2117();
		usleep(5000);
		std::cout << "\e[121A";

		frame2118();
		usleep(5000);
		std::cout << "\e[121A";

		frame2119();
		usleep(5000);
		std::cout << "\e[121A";

		frame2120();
		usleep(5000);
		std::cout << "\e[121A";

		frame2121();
		usleep(5000);
		std::cout << "\e[121A";

		frame2122();
		usleep(5000);
		std::cout << "\e[121A";

		frame2123();
		usleep(5000);
		std::cout << "\e[121A";

		frame2124();
		usleep(5000);
		std::cout << "\e[121A";

		frame2125();
		usleep(5000);
		std::cout << "\e[121A";

		frame2126();
		usleep(5000);
		std::cout << "\e[121A";

		frame2127();
		usleep(5000);
		std::cout << "\e[121A";

		frame2128();
		usleep(5000);
		std::cout << "\e[121A";

		frame2129();
		usleep(5000);
		std::cout << "\e[121A";

		frame2130();
		usleep(5000);
		std::cout << "\e[121A";

		frame2131();
		usleep(5000);
		std::cout << "\e[121A";

		frame2132();
		usleep(5000);
		std::cout << "\e[121A";

		frame2133();
		usleep(5000);
		std::cout << "\e[121A";

		frame2134();
		usleep(5000);
		std::cout << "\e[121A";

		frame2135();
		usleep(5000);
		std::cout << "\e[121A";

		frame2136();
		usleep(5000);
		std::cout << "\e[121A";

		frame2137();
		usleep(5000);
		std::cout << "\e[121A";

		frame2138();
		usleep(5000);
		std::cout << "\e[121A";

		frame2139();
		usleep(5000);
		std::cout << "\e[121A";

		frame2140();
		usleep(5000);
		std::cout << "\e[121A";

		frame2141();
		usleep(5000);
		std::cout << "\e[121A";

		frame2142();
		usleep(5000);
		std::cout << "\e[121A";

		frame2143();
		usleep(5000);
		std::cout << "\e[121A";

		frame2144();
		usleep(5000);
		std::cout << "\e[121A";

		frame2145();
		usleep(5000);
		std::cout << "\e[121A";

		frame2146();
		usleep(5000);
		std::cout << "\e[121A";

		frame2147();
		usleep(5000);
		std::cout << "\e[121A";

		frame2148();
		usleep(5000);
		std::cout << "\e[121A";

		frame2149();
		usleep(5000);
		std::cout << "\e[121A";

		frame2150();
		usleep(5000);
		std::cout << "\e[121A";

		frame2151();
		usleep(5000);
		std::cout << "\e[121A";

		frame2152();
		usleep(5000);
		std::cout << "\e[121A";

		frame2153();
		usleep(5000);
		std::cout << "\e[121A";

		frame2154();
		usleep(5000);
		std::cout << "\e[121A";

		frame2155();
		usleep(5000);
		std::cout << "\e[121A";

		frame2156();
		usleep(5000);
		std::cout << "\e[121A";

		frame2157();
		usleep(5000);
		std::cout << "\e[121A";

		frame2158();
		usleep(5000);
		std::cout << "\e[121A";

		frame2159();
		usleep(5000);
		std::cout << "\e[121A";

		frame2160();
		usleep(5000);
		std::cout << "\e[121A";

		frame2161();
		usleep(5000);
		std::cout << "\e[121A";

		frame2162();
		usleep(5000);
		std::cout << "\e[121A";

		frame2163();
		usleep(5000);
		std::cout << "\e[121A";

		frame2164();
		usleep(5000);
		std::cout << "\e[121A";

		frame2165();
		usleep(5000);
		std::cout << "\e[121A";

		frame2166();
		usleep(5000);
		std::cout << "\e[121A";

		frame2167();
		usleep(5000);
		std::cout << "\e[121A";

		frame2168();
		usleep(5000);
		std::cout << "\e[121A";

		frame2169();
		usleep(5000);
		std::cout << "\e[121A";

		frame2170();
		usleep(5000);
		std::cout << "\e[121A";

		frame2171();
		usleep(5000);
		std::cout << "\e[121A";

		frame2172();
		usleep(5000);
		std::cout << "\e[121A";

		frame2173();
		usleep(5000);
		std::cout << "\e[121A";

		frame2174();
		usleep(5000);
		std::cout << "\e[121A";

		frame2175();
		usleep(5000);
		std::cout << "\e[121A";

		frame2176();
		usleep(5000);
		std::cout << "\e[121A";

		frame2177();
		usleep(5000);
		std::cout << "\e[121A";

		frame2178();
		usleep(5000);
		std::cout << "\e[121A";

		frame2179();
		usleep(5000);
		std::cout << "\e[121A";

		frame2180();
		usleep(5000);
		std::cout << "\e[121A";

		frame2181();
		usleep(5000);
		std::cout << "\e[121A";

		frame2182();
		usleep(5000);
		std::cout << "\e[121A";

		frame2183();
		usleep(5000);
		std::cout << "\e[121A";

		frame2184();
		usleep(5000);
		std::cout << "\e[121A";

		frame2185();
		usleep(5000);
		std::cout << "\e[121A";

		frame2186();
		usleep(5000);
		std::cout << "\e[121A";

		frame2187();
		usleep(5000);
		std::cout << "\e[121A";

		frame2188();
		usleep(5000);
		std::cout << "\e[121A";

		frame2189();
		usleep(5000);
		std::cout << "\e[121A";

		frame2190();
		usleep(5000);
		std::cout << "\e[121A";

		frame2191();
		usleep(5000);
		std::cout << "\e[121A";

		frame2192();
		usleep(5000);
		std::cout << "\e[121A";

		frame2193();
		usleep(5000);
		std::cout << "\e[121A";

		frame2194();
		usleep(5000);
		std::cout << "\e[121A";
	}

    return 0;
}
