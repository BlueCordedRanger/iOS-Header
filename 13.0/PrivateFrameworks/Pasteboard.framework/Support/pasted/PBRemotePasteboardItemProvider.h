//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UAPasteboardFileItemProviding-Protocol.h"

@class NSString, NSUUID, PBItem;

@interface PBRemotePasteboardItemProvider : NSObject <UAPasteboardFileItemProviding>
{
    _Bool _preferFileRep;
    PBItem *_item;
    NSUUID *_uuid;
    NSString *_type;
}

@property(nonatomic) _Bool preferFileRep; // @synthesize preferFileRep=_preferFileRep;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) PBItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)getFileName;
- (void)getDataFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithType:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
