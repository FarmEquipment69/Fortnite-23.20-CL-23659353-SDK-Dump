// Class /Script/FortniteGame.FortCreativeDeviceButtonComponent
// Size: 0x1e0
class UFortCreativeDeviceButtonComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct FMulticastInlineDelegate OnDeviceButtonClickedDelegate; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnDeviceButtonLabelChangedDelegate; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnDeviceButtonNameChangedDelegate; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnDeviceButtonDescriptionChangedDelegate; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnButtonRefreshRequested; // 0xf0 (0x10)
	struct FGameplayTagContainer FilterTags; // 0x100 (0x20)
	struct FGameplayTagQuery RequiredFilterTagQuery; // 0x120 (0x48)
	struct FText ButtonName; // 0x168 (0x18)
	struct FText ButtonDescription; // 0x180 (0x18)
	struct FText ButtonLabel; // 0x198 (0x18)
	int WeightOffset; // 0x1b0 (0x4)
	unsigned char unreflected_1b4[0x4]; // 0x1b4 (0x4) 
	class UClass* EditWidget; // 0x1b8 (0x8)
	struct FGameplayTagContainer Tags; // 0x1c0 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeDeviceButtonComponent.SetButtonName (Underlying native function: SetButtonName 0x87b6918)
	void SetButtonName(struct FText& InButtonName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceButtonComponent.SetButtonLabel (Underlying native function: SetButtonLabel 0x87b681c)
	void SetButtonLabel(struct FText& InButtonLabel); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceButtonComponent.SetButtonDescription (Underlying native function: SetButtonDescription 0x87b6720)
	void SetButtonDescription(struct FText& InButtonDesciription); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeDeviceButtonComponent.RequestButtonRefresh (Underlying native function: RequestButtonRefresh 0x87b6030)
	void RequestButtonRefresh(); // (Final | Native | Public | BlueprintCallable | Const)
};

