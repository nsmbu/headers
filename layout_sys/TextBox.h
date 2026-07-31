#pragma once

#include <prim/seadSafeString.h>

#include <nw/lyt/lyt_TextBox.h>

// TODO
class TextBox : public nw::lyt::TextBox
{
public:
    NW_UT_RUNTIME_TYPEINFO(nw::lyt::TextBox);

public:
    // TextBox();
    virtual ~TextBox();

    void setMessage(const sead::SafeString& label, u32 argNum, ...);

protected:
    f32 mFontWidth;
    f32 mFontHeight;
    bool _10C;
    u32 mTextBufLen;
    bool _114;
};
static_assert(sizeof(TextBox) == 0x118);
