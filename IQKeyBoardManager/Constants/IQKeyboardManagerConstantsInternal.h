//
//  IQKeyboardManagerConstantsInternal.h
// https://github.com/hackiftekhar/IQKeyboardManager
// Copyright (c) 2013-14 Iftekhar Qurashi.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef IQKeyboardManagerConstantsInternal_h
#define IQKeyboardManagerConstantsInternal_h

//Xcode 4.6 or less compilation check
#ifdef NSFoundationVersionNumber_iOS_6_1
    #define IQ_IS_IOS7_OR_GREATER (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1)
    #define IQ_IS_XCODE_5_1_OR_GREATER 1
#else
    #define IQ_IS_IOS7_OR_GREATER NO
    #define IQ_IS_XCODE_5_1_OR_GREATER 0
#endif

//Xcode 5.1 or less compilation check
#ifdef NSFoundationVersionNumber_iOS_7_1
    #define IQ_IS_IOS8_OR_GREATER (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_7_1)
    #define IQ_IS_XCODE_6_0_OR_GREATER 1
#else
    #define IQ_IS_IOS8_OR_GREATER NO
    #define IQ_IS_XCODE_6_0_OR_GREATER 0
#endif

#endif
