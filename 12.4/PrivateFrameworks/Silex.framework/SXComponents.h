//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/NSCopying-Protocol.h>
#import <Silex/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface SXComponents : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableArray *_components;
    NSMutableDictionary *_componentsByIdentifier;
    NSMutableDictionary *_childComponentsByParentIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *childComponentsByParentIdentifier; // @synthesize childComponentsByParentIdentifier=_childComponentsByParentIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *componentsByIdentifier; // @synthesize componentsByIdentifier=_componentsByIdentifier;
@property(readonly, nonatomic) NSMutableArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertComponent:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addComponent:(id)arg1;
- (void)addComponentsFromArray:(id)arg1;
- (id)componentsForContainerComponentWithPath:(id)arg1;
- (id)componentsForContainerComponentWithIdentifier:(id)arg1;
- (id)componentForIdentifier:(id)arg1;
- (unsigned long long)indexOfComponent:(id)arg1;
- (id)componentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allComponents;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithArray:(id)arg1;
- (id)init;

@end
