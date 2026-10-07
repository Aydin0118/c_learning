#include <windows.h>

LRESULT CALLBACK WndProc(HWND h, UINT msg, WPARAM w, LPARAM l) {
    if (msg == WM_DESTROY) { PostQuitMessage(0); return 0; }
    return DefWindowProcW(h, msg, w, l);
}

int WINAPI WinMain(HINSTANCE hi, HINSTANCE p, LPSTR cmd, int show) {
    WNDCLASSW wc = { 0 };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hi;
    wc.lpszClassName = L"MyWin";
    RegisterClassW(&wc);

    HWND hwnd = CreateWindowW(L"MyWin", L"my first 窗口", WS_OVERLAPPEDWINDOW,
                             100, 100, 640, 480, NULL, NULL, hi, NULL);
    ShowWindow(hwnd, show);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
