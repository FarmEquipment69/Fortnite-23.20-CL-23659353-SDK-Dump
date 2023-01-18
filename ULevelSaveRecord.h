// Class /Script/FortniteGame.LevelSaveRecord
// Size: 0x6a8
class ULevelSaveRecord : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	struct FVector Center; // 0x38 (0x18)
	struct FObjectCostVersion CreateVersion; // 0x50 (0x18)
	struct FVector HalfBoundsExtent; // 0x68 (0x18)
	struct FRotator Rotation; // 0x80 (0x18)
	struct FVector Scale; // 0x98 (0x18)
	uint64_t LastTemplateID; // 0xb0 (0x8)
	uint64_t LastRecordID; // 0xb8 (0x8)
	struct TMap<int, struct FActorTemplateRecord> TemplateRecords; // 0xc0 (0x50)
	struct TMap<struct FGuid, struct FActorInstanceRecord> ActorInstanceRecords; // 0x110 (0x50)
	struct TMap<struct FGuid, struct FLevelInstanceActorRecord> LevelInstanceActorRecords; // 0x160 (0x50)
	struct TMap<struct FGuid, struct FActorInstanceRecord> VolumeInfoActorRecords; // 0x1b0 (0x50)
	int PlayerPersistenceUserWipeNumber; // 0x200 (0x4)
	unsigned char unreflected_204[0x4]; // 0x204 (0x4) 
	struct FString LevelInstanceName; // 0x208 (0x10)
	struct TSet<struct FName> LevelSaveTags; // 0x218 (0x50)
	struct TArray<struct FDeleteAction> DeleteActions; // 0x268 (0x10)
	struct FFortCreativeVkPalette VkPalette; // 0x278 (0x50)
	struct FString PersistenceSharedProjectId; // 0x2c8 (0x10)
	unsigned char unreflected_2d8[0xe0]; // 0x2d8 (0xe0) 
	struct TArray<class ULevelRecordSpawner*> ActiveSpawners; // 0x3b8 (0x10)
	struct FRecordBucketMap RecordBucketMap; // 0x3c8 (0x60)
	unsigned char unreflected_428[0x240]; // 0x428 (0x240) 
	bool bRequiresGridPlacement; // 0x668 (0x1)
	unsigned char unreflected_669[0x7]; // 0x669 (0x7) 
	struct TArray<class AActor*> RecentlySpawnedActors; // 0x670 (0x10)
	unsigned char padding_680[0x28]; // 0x680 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.LevelSaveRecord.FailsafeTimerExpired (Underlying native function: FailsafeTimerExpired 0x8ab45c4)
	void FailsafeTimerExpired(); // (Final | Native | Private)
};

