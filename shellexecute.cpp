#include<windows.h>
#include<shellapi.h>


int main() {
	ShellExecute(NULL, "open", "c:\\program files\\notepad++\\notepad++.exe", NULL, NULL, SW_SHOW);

	

	system("pause");
	return 0;
}
