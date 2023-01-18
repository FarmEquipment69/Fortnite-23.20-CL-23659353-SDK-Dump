// Class /Script/FortniteUI.FortCreativeGlobalOptions
// Size: 0x5a0
class UFortCreativeGlobalOptions : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x18]; // 0x518 (0x18) 
	int CachedLastUsedIndexInCategory; // 0x530 (0x4)
	unsigned char unreflected_534[0x14]; // 0x534 (0x14) 
	class UFortCreativeOptionsBundle* OptionsAsset; // 0x548 (0x8)
	unsigned char unreflected_550[0x20]; // 0x550 (0x20) 
	class UFortCreativeOptionsCategory* CategoryPlayer; // 0x570 (0x8)
	class UFortCreativeOptionsCategory* CategoryMoveTool; // 0x578 (0x8)
	class UCommonButtonLegacy* ButtonAccept; // 0x580 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x588 (0x8)
	class UCommonTextBlock* TextToolTipText; // 0x590 (0x8)
	class UImage* ImageDisplayImage; // 0x598 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeGlobalOptions.UpdateCachedIndices (Underlying native function: UpdateCachedIndices 0xa6dc578)
	void UpdateCachedIndices(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeGlobalOptions.SetListDataSource (Underlying native function: SetListDataSource 0xa6db6b8)
	void SetListDataSource(struct TEnumAsByte<UFortMatchmakingKnobsDataSource>& ListType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeGlobalOptions.GetOptionListFromMemoryPointer (Underlying native function: GetOptionListFromMemoryPointer 0xa6d8bd0)
	class UFortCreativeOptionsCategory* GetOptionListFromMemoryPointer(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

