// Class /Script/FortniteAI.AthenaNavSystem
// Size: 0x1930
class UAthenaNavSystem : public UFortNavSystem
{
	unsigned char unreflected_1788[0x8]; // 0x1788 (0x8) 
	struct TArray<struct FNavDataSetVariantSettings> NavDataSetVariants; // 0x1790 (0x10)
	unsigned char bUseNavDataSetVariants; // 0x17a0 (0x1)
	unsigned char bMarkBuildingFoundationDirty; // 0x17a0 (0x1)
	unsigned char bSupportRuntimeNavmeshDisabling; // 0x17a0 (0x1)
	unsigned char unreflected_17a1[0x3]; // 0x17a1 (0x3) 
	float NavGenerationObserverCheckInterval; // 0x17a4 (0x4)
	unsigned char unreflected_17a8[0x20]; // 0x17a8 (0x20) 
	unsigned char bAllowStaticNavigationInvokerBoxes; // 0x17c8 (0x1)
	unsigned char unreflected_17c9[0x7]; // 0x17c9 (0x7) 
	struct TArray<struct FBoxNavInvoker> BoxInvokers; // 0x17d0 (0x10)
	unsigned char unreflected_17e0[0x138]; // 0x17e0 (0x138) 
	struct TArray<struct FBox> NavOctTreeInclusionBounds; // 0x1918 (0x10)
	unsigned char padding_1928[0x8]; // 0x1928 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver (Underlying native function: UnregisterNavGenerationObserver 0xa331c28)
	static void UnregisterNavGenerationObserver(class USceneComponent*& Component); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver (Underlying native function: RegisterNavGenerationObserver 0xa33165c)
	static void RegisterNavGenerationObserver(class USceneComponent*& Component, struct FDelegate& Event); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive (Underlying native function: IsInitialNavigationLockActive 0xa330bd0)
	static bool IsInitialNavigationLockActive(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

