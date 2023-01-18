// Class /Script/Engine.AnimClassData
// Size: 0x258
class UAnimClassData : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x30 (0x10)
	class USkeleton* TargetSkeleton; // 0x40 (0x8)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x48 (0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x58 (0x50)
	struct TArray<struct FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8 (0x10)
	struct TArray<struct FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8 (0x10)
	struct TArray<> AnimNodeProperties; // 0xc8 (0x10)
	unsigned char unreflected_d8[0x10]; // 0xd8 (0x10) 
	struct TArray<> LinkedAnimGraphNodeProperties; // 0xe8 (0x10)
	unsigned char unreflected_f8[0x10]; // 0xf8 (0x10) 
	struct TArray<> LinkedAnimLayerNodeProperties; // 0x108 (0x10)
	unsigned char unreflected_118[0x10]; // 0x118 (0x10) 
	struct TArray<> PreUpdateNodeProperties; // 0x128 (0x10)
	unsigned char unreflected_138[0x10]; // 0x138 (0x10) 
	struct TArray<> DynamicResetNodeProperties; // 0x148 (0x10)
	unsigned char unreflected_158[0x10]; // 0x158 (0x10) 
	struct TArray<> StateMachineNodeProperties; // 0x168 (0x10)
	unsigned char unreflected_178[0x10]; // 0x178 (0x10) 
	struct TArray<> InitializationNodeProperties; // 0x188 (0x10)
	unsigned char unreflected_198[0x10]; // 0x198 (0x10) 
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1a8 (0x50)
	struct TArray<struct FName> SyncGroupNames; // 0x1f8 (0x10)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x208 (0x50)
};

