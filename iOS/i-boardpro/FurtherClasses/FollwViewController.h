//
//  FollwViewController.h
//  TwitterBoard
//
//  Created by GLB-254 on 4/18/15.
//  Copyright (c) 2015 globussoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FollwViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UIDocumentInteractionControllerDelegate>
{
    UITableView * followTableView;
    NSMutableArray * usreId;
   
}

@property(nonatomic)BOOL isAddMoreJokes;
@property (nonatomic, retain) UIDocumentInteractionController *dic;
@end
