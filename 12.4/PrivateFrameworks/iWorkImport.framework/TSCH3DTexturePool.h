//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DTexturePool : NSObject
{
}

+ (id)pool;
- (struct TextureCoordinateConverter)coordinateConverterForTexture:(id)arg1 material:(id)arg2;
- (id)resourceForMaterial:(id)arg1;
- (void)add:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
