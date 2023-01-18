// Class /Script/Engine.AnimMontage
// Size: 0x1f0
class UAnimMontage : public UAnimCompositeBase
{
	enum EMontageBlendMode BlendModeIn; // 0xb0 (0x1)
	enum EMontageBlendMode BlendModeOut; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x6]; // 0xb2 (0x6) 
	struct FAlphaBlend BlendIn; // 0xb8 (0x30)
	float BlendInTime; // 0xe8 (0x4)
	unsigned char unreflected_ec[0x4]; // 0xec (0x4) 
	struct FAlphaBlend BlendOut; // 0xf0 (0x30)
	float BlendOutTime; // 0x120 (0x4)
	float BlendOutTriggerTime; // 0x124 (0x4)
	struct FName SyncGroup; // 0x128 (0x4)
	int SyncSlotIndex; // 0x12c (0x4)
	struct FMarkerSyncData MarkerData; // 0x130 (0x20)
	struct TArray<struct FCompositeSection> CompositeSections; // 0x150 (0x10)
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks; // 0x160 (0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x170 (0x10)
	bool bEnableRootMotionTranslation; // 0x180 (0x1)
	bool bEnableRootMotionRotation; // 0x181 (0x1)
	bool bEnableAutoBlendOut; // 0x182 (0x1)
	unsigned char unreflected_183[0x5]; // 0x183 (0x5) 
	class UBlendProfile* BlendProfileIn; // 0x188 (0x8)
	class UBlendProfile* BlendProfileOut; // 0x190 (0x8)
	struct TEnumAsByte<ERootMotionRootLock> RootMotionRootLock; // 0x198 (0x1)
	unsigned char unreflected_199[0x7]; // 0x199 (0x7) 
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers; // 0x1a0 (0x10)
	struct TArray<int> BranchingPointStateNotifyIndices; // 0x1b0 (0x10)
	struct FTimeStretchCurve TimeStretchCurve; // 0x1c0 (0x28)
	struct FName TimeStretchCurveName; // 0x1e8 (0x4)
	unsigned char padding_1ec[0x4]; // 0x1ec (0x4)

	/* Functions */

	// Function /Script/Engine.AnimMontage.IsValidSectionName (Underlying native function: IsValidSectionName 0x9c5e038)
	bool IsValidSectionName(struct FName& InSectionName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetSectionName (Underlying native function: GetSectionName 0x9c5d9e8)
	struct FName GetSectionName(int& SectionIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetSectionIndex (Underlying native function: GetSectionIndex 0x9c5d95c)
	int GetSectionIndex(struct FName& InSectionName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetNumSections (Underlying native function: GetNumSections 0x76c2180)
	int GetNumSections(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetDefaultBlendOutTime (Underlying native function: GetDefaultBlendOutTime 0x9a84530)
	float GetDefaultBlendOutTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetDefaultBlendInTime (Underlying native function: GetDefaultBlendInTime 0x71cfd34)
	float GetDefaultBlendInTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetBlendOutArgs (Underlying native function: GetBlendOutArgs 0x9c5b91c)
	struct FAlphaBlendArgs GetBlendOutArgs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.GetBlendInArgs (Underlying native function: GetBlendInArgs 0x9c5b8d8)
	struct FAlphaBlendArgs GetBlendInArgs(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AnimMontage.CreateSlotAnimationAsDynamicMontage_WithBlendSettings (Underlying native function: CreateSlotAnimationAsDynamicMontage_WithBlendSettings 0x9c5b4c8)
	static class UAnimMontage* CreateSlotAnimationAsDynamicMontageWithBlendSettings(class UAnimSequenceBase*& Asset, struct FName& SlotNodeName, struct FMontageBlendSettings& BlendInSettings, struct FMontageBlendSettings& BlendOutSettings, float& InPlayRate, int& LoopCount, float& InBlendOutTriggerTime); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)
};

