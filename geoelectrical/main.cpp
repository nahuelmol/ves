#define _WIN32_WINNT 0x0601

#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"

#include <iostream>
#include <shobjidl.h>

HINSTANCE hInst;

void OpenFileDialog(HWND hwndOwner){
    HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);
    if(FAILED(hr))
        return;

    IFileOpenDialog* pFileOpen = NULL;
    hr = CoCreateInstance(CLSID_FileOpenDialog,
            NULL,
            CLSCTX_ALL,
            IID_IFileOpenDialog,
            reinterpret_cast<void**>(&pFileOpen));
    if (SUCCEEDED(hr)) {
        hr = pFileOpen->Show(hwndOwner);
        if(SUCCEEDED(hr)) {
            IShellItem* pItem;
            hr = pFileOpen->GetResult(&pItem);
            if(SUCCEEDED(hr)){
                PWSTR pszFilePath = NULL;
                hr = pItem->GetDisplayName(SIGDN_FILESYSPATH, &pszFilePath);
                if(SUCCEEDED(hr)){
                    MessageBoxW(hwndOwner, pszFilePath, L"File selectd", MB_OK);
                    CoTaskMemFree(pszFilePath);
                }
                pItem->Release();
            }
        }
        pFileOpen->Release();
    }
    CoUninitialize();
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
