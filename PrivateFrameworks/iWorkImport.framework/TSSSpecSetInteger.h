/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetInteger : TSSSpecInteger {
    BOOL  _unset;
    int  _value;
}

+ (id)newFromArchive:(const struct SpecSetIntegerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; }*)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecSetIntegerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; }*)arg2 archiver:(id)arg3;

- (id)apply:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initSpecSetIntegerWithArchive:(const struct SpecSetIntegerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; }*)arg1 unarchiver:(id)arg2;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUnsetSpec;
- (id)operationPropertyName;
- (void)saveSpecSetIntegerToArchive:(struct SpecSetIntegerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; bool x6; }*)arg1 archiver:(id)arg2;

@end
