//
//  UITextView+FormExtension.h
//  FMFormSubmitKit
//
//  Created by 郑桂华 on 2020/4/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (FormExtension)

- (BOOL)isChineseInput;

- (void)matchWithPattern:(NSString *)pattern;

- (BOOL)hasInputPinYin;

@end

NS_ASSUME_NONNULL_END
