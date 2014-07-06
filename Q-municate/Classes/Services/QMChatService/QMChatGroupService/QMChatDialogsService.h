//
//  QMChatGroupService.h
//  Qmunicate
//
//  Created by Andrey on 02.07.14.
//  Copyright (c) 2014 Quickblox. All rights reserved.
//

#import "QMChatService.h"

@interface QMChatDialogsService : QMChatService

- (void)fetchAllDialogs:(QBDialogsPagedResultBlock)completion;
- (void)createChatDialog:(QBChatDialog *)chatDialog completion:(QBChatDialogResultBlock)completionl;
- (void)updateChatDialogWithID:(NSString *)dialogID extendedRequest:(NSMutableDictionary *)extendedRequest completion:(QBChatDialogResultBlock)completion;

@end
