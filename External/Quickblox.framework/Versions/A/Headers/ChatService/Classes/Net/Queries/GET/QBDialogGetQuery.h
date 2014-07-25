//
//  QBDialogsGetQuery.h
//  Quickblox
//
//  Created by Igor Alefirenko on 25/04/2014.
//  Copyright (c) 2014 QuickBlox. All rights reserved.
//

@interface QBDialogGetQuery : QBChatQuery {
    
    NSMutableDictionary *getRequest;
}

@property (nonatomic, readonly) NSMutableDictionary *getRequest;

- (id)initWithGetRequest:(NSMutableDictionary *)_getRequest;

@end
