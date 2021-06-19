/* A master header file which includes other header files containing 
1. Symbolic constants
2. Typedefs
3. function prototypes
used in this program */
#include <Windows.h>

/*Link subsystem DLL files containing stubs of win32 APIs */

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "kernel32.lib")

/*Prototype of call back procedure of window */
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

/*Entry Point procedure*/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    /*Define Window class name*/
    static TCHAR szClassName[]=TEXT("The First Window");
    
    /*Define Window Caption*/   
    static TCHAR szWindowCaption[]=TEXT("Masterclass in C - Batch 1 - GUI 1");

    HBRUSH hBrush = NULL;   /* HANDLE TO BRUSH */
    HCURSOR hCursor = NULL; /* HANDLE TO CURSOR */
    HICON hIcon = NULL;     /* HANDLE TO ICON */
    HICON hIconSm = NULL;   /* HANDLE TO SMALL ICON */
    HWND hWnd = NULL;

    WNDCLASSEX wndEx;
    MSG msg;

    ZeroMemory(&wndEx, sizeof(WNDCLASSEX));
    ZeroMemory(&msg, sizeof(MSG));
    
    hBrush = (HBRUSH)GetStockObject(WHITE_BRUSH);
    if(hBrush == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Failed to acquire brush handle"), TEXT("GetStockObject"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }
    
    hCursor = LoadCursor((HINSTANCE)NULL, IDC_ARROW);
    if(hCursor == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Failed to acquire handle to cursor"), TEXT("LoadCursor"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    hIcon = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION);
    if(hIcon == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Failed to acquire an icon"), TEXT("LoadIcon"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    hIconSm = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION);
    if(hIconSm == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Failed to load small icon"), TEXT("LoadIcon"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    wndEx.cbSize = sizeof(WNDCLASSEX);
    wndEx.cbClsExtra = 0;
    wndEx.cbWndExtra = 0;

    wndEx.hbrBackground = hBrush;
    wndEx.hCursor = hCursor;
    wndEx.hIcon = hIcon;
    wndEx.hIconSm = hIconSm;

    wndEx.hInstance = hInstance;

    wndEx.lpszClassName = szClassName;
    wndEx.lpszMenuName = NULL;
    wndEx.lpfnWndProc = WndProc;

    wndEx.style = CS_HREDRAW | CS_VREDRAW;

    if(!RegisterClassEx(&wndEx))
    {
        MessageBox((HWND)NULL, TEXT("Failed to register window class"), TEXT("RegisterClassEx"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    hWnd = CreateWindowEx(
                            WS_EX_APPWINDOW,        /* unsigned int */
                            szClassName,            /* LPCWSTR */
                            szWindowCaption,        /* LPCWSTR */
                            WS_OVERLAPPEDWINDOW,    /* WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_THICKFRAME */
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            (HWND)NULL,
                            (HMENU)NULL,
                            hInstance,
                            NULL
                        );
    
    if(hWnd == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Failed to create window"), TEXT("CreateWindowEx"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    ShowWindow(hWnd, nShowCmd);
    UpdateWindow(hWnd);

    while(GetMessage(&msg,NULL,0,0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    
    return (msg.wParam);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
        case WM_DESTROY:
            PostQuitMessage(EXIT_SUCCESS);
            break;
    }
    
    return (DefWindowProc(hWnd, uMsg, wParam, lParam));
}

