//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface USKResourcePath : NSObject
{
    struct SdfAssetPath _path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)resolvedPath;
- (id)path;
- (id)initWithSdfAssetPath:(struct SdfAssetPath)arg1;
- (struct SdfAssetPath)sdfAssetPath;

@end
