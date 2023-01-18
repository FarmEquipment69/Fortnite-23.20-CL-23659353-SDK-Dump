// Class /Script/Engine.SkeletalMeshLODSettings
// Size: 0xb8
class USkeletalMeshLODSettings : public UDataAsset
{
	struct FPerQualityLevelInt MinQualityLevelLOD; // 0x30 (0x68)
	struct FPerPlatformInt MinLOD; // 0x98 (0x4)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x9c (0x1)
	bool bOverrideLODStreamingSettings; // 0x9d (0x1)
	struct FPerPlatformBool bSupportLODStreaming; // 0x9e (0x1)
	unsigned char unreflected_9f[0x1]; // 0x9f (0x1) 
	struct FPerPlatformInt MaxNumStreamedLODs; // 0xa0 (0x4)
	struct FPerPlatformInt MaxNumOptionalLODs; // 0xa4 (0x4)
	struct TArray<struct FSkeletalMeshLODGroupSettings> LODGroups; // 0xa8 (0x10)
};

