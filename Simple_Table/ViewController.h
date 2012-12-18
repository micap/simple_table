//
//  ViewController.h
//  Simple_Table
//
//  Created by Mica Huynh on 18/12/12.
//  Copyright (c) 2012 Mica Huynh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *myTable;

@end
