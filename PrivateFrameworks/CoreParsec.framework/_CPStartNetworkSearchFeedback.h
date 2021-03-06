/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPStartNetworkSearchFeedback : PBCodable <NSSecureCoding, _CPFeedbackUUID, _CPProcessableFeedback, _CPStartNetworkSearchFeedback> {
    int  _endpoint;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int queryId : 1; 
        unsigned int endpoint : 1; 
        unsigned int tuscanyStatus : 1; 
    }  _has;
    NSDictionary * _headers;
    NSString * _input;
    int  _lookupSelectionType;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    int  _tuscanyStatus;
    NSString * _url;
    NSString * _uuid;
    unsigned long long  _whichTrigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int endpoint;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasEndpoint;
@property (nonatomic, readonly) bool hasInput;
@property (nonatomic, readonly) bool hasLookupSelectionType;
@property (nonatomic, readonly) bool hasQueryId;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTriggerEvent;
@property (nonatomic, readonly) bool hasTuscanyStatus;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int lookupSelectionType;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int tuscanyStatus;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, readonly) unsigned long long whichTrigger;

+ (id)startSearchFeedbackWithUUID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)endpoint;
- (id)feedbackJSON;
- (bool)getHeaders:(id*)arg1 forKey:(id)arg2;
- (bool)hasEndpoint;
- (bool)hasInput;
- (bool)hasLookupSelectionType;
- (bool)hasQueryId;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (bool)hasTuscanyStatus;
- (bool)hasUrl;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)headers;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)lookupSelectionType;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setEndpoint:(int)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHeaders:(id)arg1 forKey:(id)arg2;
- (void)setInput:(id)arg1;
- (void)setLookupSelectionType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setTuscanyStatus:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (int)tuscanyStatus;
- (id)url;
- (id)uuid;
- (unsigned long long)whichTrigger;
- (void)writeTo:(id)arg1;

@end
