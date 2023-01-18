// ScriptStruct /Script/FortniteGame.ApplyWrapVariant
// Size: 0xd0
struct FApplyWrapVariant
{
	struct TArray<struct FName> ComponentNameAllowList; // 0x0 (0x10)
	int WrapSectionMask; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TMap<struct FName, int> CustomSectionMaskByMeshName; // 0x18 (0x50)
	struct TSet<struct TWeakObjectPtr<class USkeletalMesh>> AllowedMeshes; // 0x68 (0x50)
	struct FString DefaultSelectedItem; // 0xb8 (0x10)
	enum EItemWrapMaterialType WrapMaterialType; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

