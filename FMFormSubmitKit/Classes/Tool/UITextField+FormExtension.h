//
//  UITextField+ChineseInput.h
//  QiaoKeApp
//
//  Created by 郑桂华 on 2020/3/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (FormExtension)

- (BOOL)isChineseInput;

- (void)matchWithPattern:(NSString *)pattern;

- (BOOL)hasInputPinYin;

@end

NS_ASSUME_NONNULL_END
