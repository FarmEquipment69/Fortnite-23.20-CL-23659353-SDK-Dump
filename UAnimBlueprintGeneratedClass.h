// Class /Script/Engine.AnimBlueprintGeneratedClass
// Size: 0x5e8
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
	unsigned char unreflected_380[0x8]; // 0x380 (0x8) 
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x388 (0x10)
	class USkeleton* TargetSkeleton; // 0x398 (0x8)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x3a0 (0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x3b0 (0x50)
	unsigned char unreflected_400[0x80]; // 0x400 (0x80) 
	struct TArray<struct FName> SyncGroupNames; // 0x480 (0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x490 (0x50)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x4e0 (0x50)
	struct TArray<struct FAnimNodeData> AnimNodeData; // 0x530 (0x10)
	struct TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap; // 0x540 (0x50)
	unsigned char padding_590[0x58]; // 0x590 (0x58)
};

