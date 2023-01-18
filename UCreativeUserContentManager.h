// Class /Script/FortniteGame.CreativeUserContentManager
// Size: 0x170
class UCreativeUserContentManager : public UActorComponent
{
	struct TMap<struct FName, class ULevelSaveRecord*> LevelSaveRecords; // 0xa0 (0x50)
	struct TMap<struct FName, struct FCreativeThumbnailCacheData> SaveThumbnails; // 0xf0 (0x50)
	class ULevelSaveRecordThumbnailGenerator* ThumbnailGenerator; // 0x140 (0x8)
	struct TWeakObjectPtr<class UClass> ThumbnailStageActorClassSoftClassPtr; // 0x148 (0x28)
};

