//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCSolConfiguration : NSObject
{
    unsigned long long _maxArticleCombos;
    unsigned long long _heuristicSampleSize;
    unsigned long long _searchBranchMultiplier;
    double _searchBranchDecay;
    double _searchTimeLimit;
    double _tagSizeCoeff;
    double _tagFavoritedCoeff;
    double _tagAutoFavoritedCoeff;
    double _tagGroupableCoeff;
    double _tagArticleScoreCoeff;
    double _tagPersonalizationCoeff;
    double _tagSpecificityCoeff;
    double _optionalTagSpecificityScore;
    long long _heuristicOption;
}

+ (id)configurationWithTreatment:(id)arg1 deviceIsiPad:(_Bool)arg2;
@property(readonly, nonatomic) long long heuristicOption; // @synthesize heuristicOption=_heuristicOption;
@property(readonly, nonatomic) double optionalTagSpecificityScore; // @synthesize optionalTagSpecificityScore=_optionalTagSpecificityScore;
@property(readonly, nonatomic) double tagSpecificityCoeff; // @synthesize tagSpecificityCoeff=_tagSpecificityCoeff;
@property(readonly, nonatomic) double tagPersonalizationCoeff; // @synthesize tagPersonalizationCoeff=_tagPersonalizationCoeff;
@property(readonly, nonatomic) double tagArticleScoreCoeff; // @synthesize tagArticleScoreCoeff=_tagArticleScoreCoeff;
@property(readonly, nonatomic) double tagGroupableCoeff; // @synthesize tagGroupableCoeff=_tagGroupableCoeff;
@property(readonly, nonatomic) double tagAutoFavoritedCoeff; // @synthesize tagAutoFavoritedCoeff=_tagAutoFavoritedCoeff;
@property(readonly, nonatomic) double tagFavoritedCoeff; // @synthesize tagFavoritedCoeff=_tagFavoritedCoeff;
@property(readonly, nonatomic) double tagSizeCoeff; // @synthesize tagSizeCoeff=_tagSizeCoeff;
@property(readonly, nonatomic) double searchTimeLimit; // @synthesize searchTimeLimit=_searchTimeLimit;
@property(readonly, nonatomic) double searchBranchDecay; // @synthesize searchBranchDecay=_searchBranchDecay;
@property(readonly, nonatomic) unsigned long long searchBranchMultiplier; // @synthesize searchBranchMultiplier=_searchBranchMultiplier;
@property(readonly, nonatomic) unsigned long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) unsigned long long maxArticleCombos; // @synthesize maxArticleCombos=_maxArticleCombos;
- (id)initWithHeuristicSampleSize:(unsigned long long)arg1 searchBranchMultiplier:(unsigned long long)arg2 searchBranchDecay:(double)arg3 searchTimeLimit:(double)arg4 tagSizeCoeff:(double)arg5 tagFavoritedCoeff:(double)arg6 tagAutoFavoritedCoeff:(double)arg7 tagGroupableCoeff:(double)arg8 tagArticleScoreCoeff:(double)arg9 tagPersonalizationCoeff:(double)arg10 tagSpecificityCoeff:(double)arg11 optionalTagSpecificityScore:(double)arg12 heuristicOption:(long long)arg13;

@end
