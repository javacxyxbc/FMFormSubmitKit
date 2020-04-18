//
//  FormListSelectModel.h
//  ChengXuan
//
//  Created by 郑桂华 on 2019/11/29.
//  Copyright © 2019 蔡华荣. All rights reserved.
//

#import "FormListTitleModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface FormListSelectModel : FormListTitleModel

@property(nonatomic, strong)NSArray *selects;
@property(nonatomic, assign)NSInteger selectIndex;
@property(nonatomic, copy)void(^configurationBtn)(NSInteger index, UIButton *btn, NSString *title);

+ (instancetype)modelWithTitle:(NSString *)title;

@end

@interface FormListBaseModel (ConvertSelect)

@property(readonly)FormListSelectModel *convertSelect;

@end

NS_ASSUME_NONNULL_END
