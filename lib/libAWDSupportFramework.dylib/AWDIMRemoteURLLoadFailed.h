/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMRemoteURLLoadFailed : PBCodable <NSCopying> {
    unsigned long long _connectEndToRequestStartMillis;
    unsigned long long _connectStartToConnectEndMillis;
    unsigned long long _connectStartToSecureConnectionStartMillis;
    unsigned long long _domainLookupEndToConnectStartMillis;
    unsigned long long _domainLookupStartToDomainLookupEndMillis;
    long long _errorCode;
    unsigned long long _fetchStartToDomainLookupStartMillis;
    struct { 
        unsigned int connectEndToRequestStartMillis : 1; 
        unsigned int connectStartToConnectEndMillis : 1; 
        unsigned int connectStartToSecureConnectionStartMillis : 1; 
        unsigned int domainLookupEndToConnectStartMillis : 1; 
        unsigned int domainLookupStartToDomainLookupEndMillis : 1; 
        unsigned int errorCode : 1; 
        unsigned int fetchStartToDomainLookupStartMillis : 1; 
        unsigned int navigationStartToRedirectStartMillis : 1; 
        unsigned int redirectEndToFetchStartMillis : 1; 
        unsigned int redirectStartToRedirectEndMillis : 1; 
        unsigned int requestStartToResponseStartMillis : 1; 
        unsigned int responseStartToResponseEndMillis : 1; 
        unsigned int secureConnectionStartToConnectEndMillis : 1; 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _navigationStartToRedirectStartMillis;
    unsigned long long _redirectEndToFetchStartMillis;
    unsigned long long _redirectStartToRedirectEndMillis;
    unsigned long long _requestStartToResponseStartMillis;
    unsigned long long _responseStartToResponseEndMillis;
    unsigned long long _secureConnectionStartToConnectEndMillis;
    unsigned long long _timestamp;
}

@property unsigned long long connectEndToRequestStartMillis;
@property unsigned long long connectStartToConnectEndMillis;
@property unsigned long long connectStartToSecureConnectionStartMillis;
@property unsigned long long domainLookupEndToConnectStartMillis;
@property unsigned long long domainLookupStartToDomainLookupEndMillis;
@property long long errorCode;
@property unsigned long long fetchStartToDomainLookupStartMillis;
@property BOOL hasConnectEndToRequestStartMillis;
@property BOOL hasConnectStartToConnectEndMillis;
@property BOOL hasConnectStartToSecureConnectionStartMillis;
@property BOOL hasDomainLookupEndToConnectStartMillis;
@property BOOL hasDomainLookupStartToDomainLookupEndMillis;
@property BOOL hasErrorCode;
@property BOOL hasFetchStartToDomainLookupStartMillis;
@property BOOL hasNavigationStartToRedirectStartMillis;
@property BOOL hasRedirectEndToFetchStartMillis;
@property BOOL hasRedirectStartToRedirectEndMillis;
@property BOOL hasRequestStartToResponseStartMillis;
@property BOOL hasResponseStartToResponseEndMillis;
@property BOOL hasSecureConnectionStartToConnectEndMillis;
@property BOOL hasTimestamp;
@property unsigned long long navigationStartToRedirectStartMillis;
@property unsigned long long redirectEndToFetchStartMillis;
@property unsigned long long redirectStartToRedirectEndMillis;
@property unsigned long long requestStartToResponseStartMillis;
@property unsigned long long responseStartToResponseEndMillis;
@property unsigned long long secureConnectionStartToConnectEndMillis;
@property unsigned long long timestamp;

- (unsigned long long)connectEndToRequestStartMillis;
- (unsigned long long)connectStartToConnectEndMillis;
- (unsigned long long)connectStartToSecureConnectionStartMillis;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)domainLookupEndToConnectStartMillis;
- (unsigned long long)domainLookupStartToDomainLookupEndMillis;
- (long long)errorCode;
- (unsigned long long)fetchStartToDomainLookupStartMillis;
- (BOOL)hasConnectEndToRequestStartMillis;
- (BOOL)hasConnectStartToConnectEndMillis;
- (BOOL)hasConnectStartToSecureConnectionStartMillis;
- (BOOL)hasDomainLookupEndToConnectStartMillis;
- (BOOL)hasDomainLookupStartToDomainLookupEndMillis;
- (BOOL)hasErrorCode;
- (BOOL)hasFetchStartToDomainLookupStartMillis;
- (BOOL)hasNavigationStartToRedirectStartMillis;
- (BOOL)hasRedirectEndToFetchStartMillis;
- (BOOL)hasRedirectStartToRedirectEndMillis;
- (BOOL)hasRequestStartToResponseStartMillis;
- (BOOL)hasResponseStartToResponseEndMillis;
- (BOOL)hasSecureConnectionStartToConnectEndMillis;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)navigationStartToRedirectStartMillis;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)redirectEndToFetchStartMillis;
- (unsigned long long)redirectStartToRedirectEndMillis;
- (unsigned long long)requestStartToResponseStartMillis;
- (unsigned long long)responseStartToResponseEndMillis;
- (unsigned long long)secureConnectionStartToConnectEndMillis;
- (void)setConnectEndToRequestStartMillis:(unsigned long long)arg1;
- (void)setConnectStartToConnectEndMillis:(unsigned long long)arg1;
- (void)setConnectStartToSecureConnectionStartMillis:(unsigned long long)arg1;
- (void)setDomainLookupEndToConnectStartMillis:(unsigned long long)arg1;
- (void)setDomainLookupStartToDomainLookupEndMillis:(unsigned long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setFetchStartToDomainLookupStartMillis:(unsigned long long)arg1;
- (void)setHasConnectEndToRequestStartMillis:(BOOL)arg1;
- (void)setHasConnectStartToConnectEndMillis:(BOOL)arg1;
- (void)setHasConnectStartToSecureConnectionStartMillis:(BOOL)arg1;
- (void)setHasDomainLookupEndToConnectStartMillis:(BOOL)arg1;
- (void)setHasDomainLookupStartToDomainLookupEndMillis:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasFetchStartToDomainLookupStartMillis:(BOOL)arg1;
- (void)setHasNavigationStartToRedirectStartMillis:(BOOL)arg1;
- (void)setHasRedirectEndToFetchStartMillis:(BOOL)arg1;
- (void)setHasRedirectStartToRedirectEndMillis:(BOOL)arg1;
- (void)setHasRequestStartToResponseStartMillis:(BOOL)arg1;
- (void)setHasResponseStartToResponseEndMillis:(BOOL)arg1;
- (void)setHasSecureConnectionStartToConnectEndMillis:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNavigationStartToRedirectStartMillis:(unsigned long long)arg1;
- (void)setRedirectEndToFetchStartMillis:(unsigned long long)arg1;
- (void)setRedirectStartToRedirectEndMillis:(unsigned long long)arg1;
- (void)setRequestStartToResponseStartMillis:(unsigned long long)arg1;
- (void)setResponseStartToResponseEndMillis:(unsigned long long)arg1;
- (void)setSecureConnectionStartToConnectEndMillis:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end