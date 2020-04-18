//
//  FormListImageUpModel.h
//  ChengXuan
//
//  Created by 郑桂华 on 2019/11/28.
//  Copyright © 2019 蔡华荣. All rights reserved.
//

#import "FormListTitleModel.h"

NS_ASSUME_NONNULL_BEGIN
@class FormListImageSelectModel;
@interface FormListImageUpModel : FormListTitleModel
@property(nonatomic, copy)NSString *intro;
@property(nonatomic, assign)BOOL isIntroMutibleLine;
@property(nonatomic, assign)BOOL canDynamicAdd;
@property(nonatomic, assign)NSInteger maxCount;
@property(nonatomic, copy)void(^refreshBlock)(void);
@property(nonatomic, strong)NSArray<FormListImageSelectModel *> *images;

@property(nonatomic, copy)void(^selectImageBlock)(FormListImageSelectModel *model, UIImage *image);

@end

@interface FormListBaseModel (ConvertImage)

@property(readonly)FormListImageUpModel *convertImage;

@end

NS_ASSUME_NONNULL_END
