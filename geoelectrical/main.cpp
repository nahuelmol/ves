#define UNICODE
#define _UNICODE

#include <windows.h>
#include <commdlg.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"

#include <iostream>


HINSTANCE hInst;

void OpenFileDialog(HWND hwnd){
    OPENFILENAME ofn;
    wchar_t szFile[260] = {0};
    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = hwnd;
    ofn.lpstrFile = szFile;
    ofn.nMaxFile = sizeof(szFile);
    ofn.lpstrFilter = L"Todos los archivos\0*.*\0Archivos de texto\0*.TXT\0";
    ofn.nFilterIndex = 1;
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
    if(GetOpenFileName(&ofn)){
        MessageBox(hwnd, ofn.lpstrFile, L"Archivos seleccionado", MB_OK);
    }
}

BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch(uMsg) {
    case WM_INITDIALOG:
    {
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND:
    {
        switch(LOWORD(wParam)) {
        case ID_PBTN_Slingram:
            std::cout << "slingram" << std::endl;
            OpenFileDialog(hwndDlg);
            break;
        case ID_PBTN_Turam:
            std::cout << "Turam" << std::endl;
            break;
        case ID_PBTN_InclinedField:
            std::cout << "Inclined Field" << std::endl;
            break;
        case ID_PBTN_SP:
            std::cout << "Self-potential" << std::endl;
            break;
        case ID_PBTN_IP:
            std::cout << "Induced potential" << std::endl;
            break;
        case ID_PBTN_AFMAG:
            std::cout << "AFMAG" << std::endl;
            break;
        case ID_PBTN_TelluricCurrents:
            std::cout << "Telluric current" << std::endl;
            break;
        case ID_PBTN_MT:
            std::cout << "MT" << std::endl;
            break;
        }
        return TRUE;
    }
    return FALSE;
}
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
