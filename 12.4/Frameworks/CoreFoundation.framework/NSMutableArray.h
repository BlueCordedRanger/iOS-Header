//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSMutableArray : NSArray
{
}

+ (id)arrayWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 range:(struct _NSRange)arg3;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)setSet:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (id)sortedArrayFromRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(const id *)arg2 count:(unsigned long long)arg3;
- (void)replaceObject:(id)arg1;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inSet:(id)arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inOrderedSet:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1 inArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeLastObject;
- (void)removeFirstObject;
- (void)removeAllObjects;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjects:(const id *)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (void)_mutate;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;

@end

