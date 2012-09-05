//
//	 ______    ______    ______    
//	/\  __ \  /\  ___\  /\  ___\   
//	\ \  __<  \ \  __\_ \ \  __\_ 
//	 \ \_____\ \ \_____\ \ \_____\ 
//	  \/_____/  \/_____/  \/_____/ 
//
//	Copyright (c) 2012 BEE creators
//	http://www.whatsbug.com
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//
//
//  Bee_UIPullLoader.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Bee_UISignal.h"

#pragma mark -

typedef enum
{
	BEE_UIPULLLOADER_STATE_NORMAL = 0,
	BEE_UIPULLLOADER_STATE_PULLING,
	BEE_UIPULLLOADER_STATE_LOADING
} BeeUIPullLoaderState;

#pragma mark -

@class BeeUIActivityIndicatorView;

@interface BeeUIPullLoader : UIView
{
	BeeUIPullLoaderState			_state;
	UIImageView *					_arrowView;
	BeeUIActivityIndicatorView *	_indicator;
}

AS_SIGNAL( STATE_CHANGED )	// 状态改变

@property (nonatomic, readonly) BeeUIPullLoaderState	state;

+ (BeeUIPullLoader *)spawn;

- (void)changeState:(BeeUIPullLoaderState)state;
- (void)changeState:(BeeUIPullLoaderState)state animated:(BOOL)animated;

@end