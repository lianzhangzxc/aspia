//
// PROJECT:         Aspia Remote Desktop
// FILE:            ui/base/timer.h
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_UI__BASE__TIMER_H
#define _ASPIA_UI__BASE__TIMER_H

#include "base/macros.h"

namespace aspia {

class UiTimer
{
public:
    explicit UiTimer(UINT_PTR id);
    ~UiTimer();

    void Start(HWND window, UINT elapse = 25);
    void Stop();

private:
    HWND window_ = nullptr;
    UINT_PTR id_;
    bool active_ = false;

    DISALLOW_COPY_AND_ASSIGN(UiTimer);
};

} // namespace aspia

#endif // _ASPIA_UI__BASE__TIMER_H