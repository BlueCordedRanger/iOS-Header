//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TIInputMode;

@interface TIKeyboardInputManagerConfig : NSObject
{
    _Bool _allowsSpaceCorrections;
    _Bool _usesTextChecker;
    _Bool _usesRetrocorrection;
    _Bool _usesWordNgramModel;
    _Bool _usesAdaptation;
    _Bool _completionsShouldSharePrefix;
    _Bool _usesStemSuffixCorrectionFactor;
    _Bool _languageAllowsCP;
    _Bool _usesContinuousPath;
    _Bool _usesContinuousPathProgressiveCandidates;
    _Bool _continuousPathDeleteWholeWord;
    _Bool _continuousPathDetectPause;
    _Bool _continuousPathCompletesWords;
    _Bool _insertsSpaceAfterPredictiveInput;
    _Bool _usesContinuousPathRetrocorrection;
    _Bool _shouldIgnoreCPRequirements;
    _Bool _usesCJContinuousPath;
    _Bool _testing;
    _Bool _usesCustomNgramModel;
    _Bool _usesCustomStaticDictionary;
    _Bool _usesDODMLLogging;
    _Bool _sensorKitEnabled;
    _Bool _allowRelaxedOVSPolicy;
    _Bool _usesUserModelLogging;
    int _continuousPathEnabledAlgorithms;
    int _cpConfidenceModelType;
    TIInputMode *_inputMode;
    NSString *_staticDictionaryPath;
    NSString *_dynamicResourcePath;
    NSString *_ngramModelPath;
    NSString *_shapeStoreResourceDir;
    unsigned long long _maxWordsPerPrediction;
    NSDictionary *_continuousPathParams;
    double _continuousPathLanguageWeight;
    unsigned long long _sensorKitWordsThreshold;
}

+ (id)configurationForInputMode:(id)arg1;
@property(nonatomic) _Bool usesUserModelLogging; // @synthesize usesUserModelLogging=_usesUserModelLogging;
@property(nonatomic) _Bool allowRelaxedOVSPolicy; // @synthesize allowRelaxedOVSPolicy=_allowRelaxedOVSPolicy;
@property(nonatomic) unsigned long long sensorKitWordsThreshold; // @synthesize sensorKitWordsThreshold=_sensorKitWordsThreshold;
@property(nonatomic) _Bool sensorKitEnabled; // @synthesize sensorKitEnabled=_sensorKitEnabled;
@property(nonatomic) _Bool usesDODMLLogging; // @synthesize usesDODMLLogging=_usesDODMLLogging;
@property(nonatomic) _Bool usesCustomStaticDictionary; // @synthesize usesCustomStaticDictionary=_usesCustomStaticDictionary;
@property(nonatomic) _Bool usesCustomNgramModel; // @synthesize usesCustomNgramModel=_usesCustomNgramModel;
@property(nonatomic, getter=isTesting) _Bool testing; // @synthesize testing=_testing;
@property(nonatomic) _Bool usesCJContinuousPath; // @synthesize usesCJContinuousPath=_usesCJContinuousPath;
@property(nonatomic) int cpConfidenceModelType; // @synthesize cpConfidenceModelType=_cpConfidenceModelType;
@property(nonatomic) _Bool shouldIgnoreCPRequirements; // @synthesize shouldIgnoreCPRequirements=_shouldIgnoreCPRequirements;
@property(nonatomic) _Bool usesContinuousPathRetrocorrection; // @synthesize usesContinuousPathRetrocorrection=_usesContinuousPathRetrocorrection;
@property(nonatomic) int continuousPathEnabledAlgorithms; // @synthesize continuousPathEnabledAlgorithms=_continuousPathEnabledAlgorithms;
@property(nonatomic) _Bool insertsSpaceAfterPredictiveInput; // @synthesize insertsSpaceAfterPredictiveInput=_insertsSpaceAfterPredictiveInput;
@property(nonatomic) _Bool continuousPathCompletesWords; // @synthesize continuousPathCompletesWords=_continuousPathCompletesWords;
@property(nonatomic) _Bool continuousPathDetectPause; // @synthesize continuousPathDetectPause=_continuousPathDetectPause;
@property(nonatomic) _Bool continuousPathDeleteWholeWord; // @synthesize continuousPathDeleteWholeWord=_continuousPathDeleteWholeWord;
@property(nonatomic) double continuousPathLanguageWeight; // @synthesize continuousPathLanguageWeight=_continuousPathLanguageWeight;
@property(nonatomic) _Bool usesContinuousPathProgressiveCandidates; // @synthesize usesContinuousPathProgressiveCandidates=_usesContinuousPathProgressiveCandidates;
@property(copy, nonatomic) NSDictionary *continuousPathParams; // @synthesize continuousPathParams=_continuousPathParams;
@property(nonatomic) _Bool usesContinuousPath; // @synthesize usesContinuousPath=_usesContinuousPath;
@property(nonatomic) _Bool languageAllowsCP; // @synthesize languageAllowsCP=_languageAllowsCP;
@property(nonatomic) _Bool usesStemSuffixCorrectionFactor; // @synthesize usesStemSuffixCorrectionFactor=_usesStemSuffixCorrectionFactor;
@property(nonatomic) _Bool completionsShouldSharePrefix; // @synthesize completionsShouldSharePrefix=_completionsShouldSharePrefix;
@property(nonatomic) unsigned long long maxWordsPerPrediction; // @synthesize maxWordsPerPrediction=_maxWordsPerPrediction;
@property(nonatomic) _Bool usesAdaptation; // @synthesize usesAdaptation=_usesAdaptation;
@property(nonatomic) _Bool usesWordNgramModel; // @synthesize usesWordNgramModel=_usesWordNgramModel;
@property(nonatomic) _Bool usesRetrocorrection; // @synthesize usesRetrocorrection=_usesRetrocorrection;
@property(nonatomic) _Bool usesTextChecker; // @synthesize usesTextChecker=_usesTextChecker;
@property(nonatomic) _Bool allowsSpaceCorrections; // @synthesize allowsSpaceCorrections=_allowsSpaceCorrections;
@property(copy, nonatomic) NSString *shapeStoreResourceDir; // @synthesize shapeStoreResourceDir=_shapeStoreResourceDir;
@property(copy, nonatomic) NSString *ngramModelPath; // @synthesize ngramModelPath=_ngramModelPath;
@property(copy, nonatomic) NSString *dynamicResourcePath; // @synthesize dynamicResourcePath=_dynamicResourcePath;
@property(copy, nonatomic) NSString *staticDictionaryPath; // @synthesize staticDictionaryPath=_staticDictionaryPath;
@property(retain, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
- (void).cxx_destruct;
- (id)propertyList;
@property(nonatomic) _Bool usesWordNgramModelAdaptation;

@end
