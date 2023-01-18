// Class /Script/ContextualAnimation.ContextualAnimSceneAsset
// Size: 0x68
class UContextualAnimSceneAsset : public UDataAsset
{
	class UContextualAnimRolesAsset* RolesAsset; // 0x30 (0x8)
	struct FName PrimaryRole; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TArray<struct FContextualAnimSceneSection> Sections; // 0x40 (0x10)
	float Radius; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	class UClass* SceneInstanceClass; // 0x58 (0x8)
	bool bDisableCollisionBetweenActors; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	int SampleRate; // 0x64 (0x4)

	/* Functions */

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.Query (Underlying native function: Query 0x7f588dc)
	bool Query(struct FName& Role, struct FContextualAnimQueryResult& outResult, struct FContextualAnimQueryParams& QueryParams, struct FTransform& ToWorldTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetRoles (Underlying native function: GetRoles 0x7f57fbc)
	struct TArray<struct FName> GetRoles(); // (Final | Native | Public | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria (Underlying native function: GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria 0x7f57a4c)
	void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(enum EContextualAnimPointType& Type, int& SectionIdx, struct FContextualAnimSceneBindingContext& Primary, struct FContextualAnimSceneBindingContext& Querier, enum EContextualAnimCriterionToConsider& CriterionToConsider, struct TArray<struct FContextualAnimPoint>& outResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole (Underlying native function: GetAlignmentPointsForSecondaryRole 0x7f577bc)
	void GetAlignmentPointsForSecondaryRole(enum EContextualAnimPointType& Type, int& SectionIdx, struct FContextualAnimSceneBindingContext& Primary, struct TArray<struct FContextualAnimPoint>& outResult); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection (Underlying native function: BP_GetStartAndEndTimeForWarpSection 0x7f558f8)
	void BPGetStartAndEndTimeForWarpSection(int& SectionIdx, int& AnimSetIdx, struct FName& Role, struct FName& WarpSectionName, float& OutStartTime, float& OutEndTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime (Underlying native function: BP_GetIKTargetTransformForRoleAtTime 0x7f55738)
	struct FTransform BPGetIKTargetTransformForRoleAtTime(int& SectionIdx, int& AnimSetIdx, struct FName& Role, struct FName& trackName, float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToPivot (Underlying native function: BP_GetAlignmentTransformForRoleRelativeToPivot 0x7f555b8)
	struct FTransform BPGetAlignmentTransformForRoleRelativeToPivot(int& SectionIdx, int& AnimSetIdx, struct FName& Role, float& Time); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation (Underlying native function: BP_FindAnimSetIndexByAnimation 0x7f5538c)
	int BPFindAnimSetIndexByAnimation(int& SectionIdx, class UAnimSequenceBase*& Animation); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole (Underlying native function: BP_FindAnimationForRole 0x7f554b0)
	class UAnimSequenceBase* BPFindAnimationForRole(int& SectionIdx, int& AnimSetIdx, struct FName& Role); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

