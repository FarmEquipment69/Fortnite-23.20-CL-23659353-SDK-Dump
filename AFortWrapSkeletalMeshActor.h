// Class /Script/FortniteGame.FortWrapSkeletalMeshActor
// Size: 0x348
class AFortWrapSkeletalMeshActor : public ASkeletalMeshActor
{
	class UAthenaItemWrapDefinition* WrapToApply; // 0x308 (0x8)
	enum EItemWrapMaterialType WrapMaterialType; // 0x310 (0x1)
	unsigned char unreflected_311[0x7]; // 0x311 (0x7) 
	struct TArray<struct FMcpVariantChannelInfo> VariantData; // 0x318 (0x10)
	class ACustomItemWrapModifier* ItemWrapModifier; // 0x328 (0x8)
	bool bHasSectionLimit; // 0x330 (0x1)
	unsigned char unreflected_331[0x3]; // 0x331 (0x3) 
	int MaterialSectionMask; // 0x334 (0x4)
	struct FMulticastInlineDelegate OnWrapApplied; // 0x338 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWrapSkeletalMeshActor.SetWrap (Underlying native function: SetWrap 0x884668c)
	void SetWrap(class UAthenaItemWrapDefinition*& NewWrap, enum EItemWrapMaterialType& MaterialType); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.FortWrapSkeletalMeshActor.OnWrapApplied__DelegateSignature (Has no native function)
	void OnWrapAppliedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortWrapSkeletalMeshActor.GetWrapModifier (Underlying native function: GetWrapModifier 0x8843a90)
	class ACustomItemWrapModifier* GetWrapModifier(); // (Final | Native | Public | BlueprintCallable | Const)
};

