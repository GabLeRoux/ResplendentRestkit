//
//  RKObjectManager+RRKRequests.h
//  Resplendent
//
//  Created by Benjamin Maer on 11/7/14.
//  Copyright (c) 2014 Resplendent. All rights reserved.
//

#import <RestKit/Network/RKObjectManager.h>
#import <RestKit/Network/RKObjectRequestOperation.h>





@interface RKObjectManager (RRKRequests)

- (RKObjectRequestOperation*)rrk_getRequestCreatedAfterPerformingBlock:(void (^)())createAndEnqueueRequestBlock;

@end
