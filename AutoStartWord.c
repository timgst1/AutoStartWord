#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Pfade anpassen
    const char* documentPath = "C:\\Pfad\\zum\\Dein_Dokument.docx";

    // Word starten
    ShellExecute(NULL, "open", "winword.exe", documentPath, NULL, SW_SHOWNORMAL);

    return 0;
}
