// Class /Script/Engine.AnimationSettings
// Size: 0x118
class UAnimationSettings : public UDeveloperSettings
{
	int CompressCommandletVersion; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x38 (0x10)
	bool ForceRecompression; // 0x48 (0x1)
	bool bForceBelowThreshold; // 0x49 (0x1)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x4a (0x1)
	bool bRaiseMaxErrorToExisting; // 0x4b (0x1)
	bool bEnablePerformanceLog; // 0x4c (0x1)
	bool bStripAnimationDataOnDedicatedServer; // 0x4d (0x1)
	bool bTickAnimationOnSkeletalMeshInit; // 0x4e (0x1)
	unsigned char unreflected_4f[0x1]; // 0x4f (0x1) 
	struct FTimecodeCustomAttributeNameSettings BoneTimecodeCustomAttributeNameSettings; // 0x50 (0x1c)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FCustomAttributeSetting> BoneCustomAttributesNames; // 0x70 (0x10)
	struct TArray<struct FString> BoneNamesWithCustomAttributes; // 0x80 (0x10)
	struct TMap<struct FName, enum ECustomAttributeBlendType> AttributeBlendModes; // 0x90 (0x50)
	enum ECustomAttributeBlendType DefaultAttributeBlendMode; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct TArray<struct FString> TransformAttributeNames; // 0xe8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UUserDefinedStruct>> UserDefinedStructAttributes; // 0xf8 (0x10)
	struct TArray<struct FMirrorFindReplaceExpression> MirrorFindReplaceExpressions; // 0x108 (0x10)

	/* Functions */

	// Function /Script/Engine.AnimationSettings.GetBoneCustomAttributeNamesToImport (Underlying native function: GetBoneCustomAttributeNamesToImport 0x9c47228)
	struct TArray<struct FString> GetBoneCustomAttributeNamesToImport(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

