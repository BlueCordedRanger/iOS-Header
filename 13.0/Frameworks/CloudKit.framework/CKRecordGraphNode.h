//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKRecordGraphNode : NSObject
{
    NSMutableSet *_edges;
    NSMutableSet *_indegrees;
    CKRecord *_record;
}

@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) NSMutableSet *indegrees; // @synthesize indegrees=_indegrees;
@property(retain, nonatomic) NSMutableSet *edges; // @synthesize edges=_edges;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long indegree;
- (id)init;

@end
