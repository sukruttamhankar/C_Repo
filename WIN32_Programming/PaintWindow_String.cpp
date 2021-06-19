#include<Windows.h>

#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "kernel32.lib")

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    static TCHAR szClassName[] = TEXT("The First Window");
    static TCHAR szWindowCaption[] = TEXT("Hello Windows!!");

    HBRUSH hBrush = NULL;
    HCURSOR hCursor = NULL;
    HICON hIcon = NULL;
    HICON hIconSm = NULL;
    HWND hWnd = NULL;

    WNDCLASSEX wndEx;
    MSG msg;

    ZeroMemory(&wndEx, sizeof(WNDCLASSEX));
    ZeroMemory(&msg, sizeof(MSG));

    hBrush = (HBRUSH)GetStockObject(WHITE_BRUSH);
    if(hBrush == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Could not obtain brush"), TEXT("GetStockObject"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }
    hCursor = LoadCursor((HINSTANCE)NULL, IDC_ARROW);
    if(hCursor == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Could not obtain cursor"), TEXT("LoadCursor"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }
    hIcon = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION);
    if(hIcon == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Could not obtain icon"), TEXT("LoadIcon"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }
    hIconSm = LoadIcon((HINSTANCE)NULL, IDI_APPLICATION);
    if(hIconSm == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Could not obtain small icon"), TEXT("LoadIcon"), MB_ICONERROR);
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
    wndEx.lpfnWndProc = WndProc;
    wndEx.lpszClassName = szClassName;
    wndEx.lpszMenuName = NULL;
    wndEx.style = CS_HREDRAW | CS_VREDRAW;

    if(!RegisterClassEx(&wndEx))
    {
        MessageBox((HWND)NULL, TEXT("Could not register window class"), TEXT("RegisterClassEx"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    hWnd = CreateWindowEx(WS_EX_APPWINDOW,
                            szClassName,
                            szWindowCaption,
                            WS_OVERLAPPEDWINDOW,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            (HWND)NULL,
                            (HMENU)NULL,
                            hInstance,
                            NULL);
    if(hWnd == NULL)
    {
        MessageBox((HWND)NULL, TEXT("Could not create application window"), TEXT("CreateWindowEx"), MB_ICONERROR);
        return(EXIT_FAILURE);
    }

    ShowWindow(hWnd, nShowCmd);
    UpdateWindow(hWnd);

    while(GetMessage(&msg, (HWND)NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (msg.wParam);
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static int cxClient; /* static variable to store the width of the window */
    static int cyClient; /* static variable to store the height of the window */

    CHAR* lpszMsg = "Hello,World!!";
    int iLength = strlen(lpszMsg);

    HDC hdc = NULL;

    PAINTSTRUCT ps;

    switch(uMsg)
    {
        case WM_SIZE:
            cxClient = LOWORD(lParam);
            cyClient = HIWORD(lParam);
            break;

        case WM_PAINT:
            hdc = BeginPaint(hWnd, &ps);
            SetTextAlign(hdc, TA_CENTER);
            TextOutA(hdc, cxClient/2, cyClient/2, lpszMsg, iLength);
            EndPaint(hWnd, &ps);
            hdc = NULL;
            break;
        
        case WM_DESTROY:
            PostQuitMessage(EXIT_SUCCESS);
            break;
    }
    
    return(DefWindowProc(hWnd, uMsg, wParam, lParam));

}