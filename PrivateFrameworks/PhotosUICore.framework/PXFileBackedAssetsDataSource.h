/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFileBackedAssetsDataSource : PXAssetsDataSource {
    _PXFileBackedAssetCollection * _assetCollection;
    NSDictionary * _assetCollectionBySection;
    NSDictionary * _fileURLsBySection;
}

@property (nonatomic, readonly) NSDictionary *fileURLsBySection;

- (void).cxx_destruct;
- (id)fileURLsBySection;
- (id)initWithFileURLsBySection:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (int)numberOfSubitemsInItem:(int)arg1 section:(int)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;

@end