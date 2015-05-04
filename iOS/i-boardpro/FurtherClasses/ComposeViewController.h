//
//  ComposeViewController.h
//  Board
//
//  Created by Sumit Ghosh on 28/04/15.
//  Copyright (c) 2015 Sumit Ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ComposeViewController : UIViewController<UIDocumentInteractionControllerDelegate,UITextViewDelegate>
{
    CGSize windowSize;
    BOOL isDate;
    NSDate * dateFire;
    sqlite3 * database;
    time_t  unixTime;
}
@property(nonatomic,strong)UIImage * img;
@property(nonatomic,strong)UIView * headerView,* tabView;
@property(nonatomic,strong)UIDatePicker * datePicker;
@property(nonatomic,strong)NSURL * imgPath;
@property (nonatomic, retain) UIDocumentInteractionController *dic;
@property(nonatomic,strong)NSString * imgId;

-(void)firedNotification :(NSString *)imgPath imgId:(NSString *)imgid;
@end
