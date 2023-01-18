// Class /Script/ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x168
class UAnimationCompressionLibraryDatabase : public UObject
{
	struct TArray<unsigned char> CookedCompressedBytes; // 0x28 (0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x38 (0x10)
	unsigned char unreflected_48[0x118]; // 0x48 (0x118) 
	uint32_t MaxStreamRequestSizeKB; // 0x160 (0x4)
	unsigned char padding_164[0x4]; // 0x164 (0x4)

	/* Functions */

	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity (Underlying native function: SetVisualFidelity 0x7fabcfc)
	static void SetVisualFidelity(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase*& DatabaseAsset, enum ACLVisualFidelityChangeResult& Result, enum ACLVisualFidelity& VisualFidelity); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity (Underlying native function: GetVisualFidelity 0x7fabc7c)
	static enum ACLVisualFidelity GetVisualFidelity(class UAnimationCompressionLibraryDatabase*& DatabaseAsset); // (Final | Native | Static | Public | BlueprintCallable)
};

