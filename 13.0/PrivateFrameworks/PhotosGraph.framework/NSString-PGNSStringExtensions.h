//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;
- (id)pg_stringByRemovingDates;
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;
- (id)pg_stringByRemovingParentheses;
- (id)pg_stringByRemovingParenthesesAndBrackets;
@end
