// Class /Script/FortniteUI.FortSetting
// Size: 0x180
class UFortSetting : public UObject
{
	unsigned char unreflected_28[0x48]; // 0x28 (0x48) 
	class UFortLocalPlayer* LocalPlayer; // 0x70 (0x8)
	class UFortSetting* SettingParent; // 0x78 (0x8)
	class UFortSettingRegistry* OwningRegistry; // 0x80 (0x8)
	unsigned char unreflected_88[0x60]; // 0x88 (0x60) 
	struct FFortSettingNameExtensions CustomExtensions; // 0xe8 (0x18)
	unsigned char padding_100[0x80]; // 0x100 (0x80)

	/* Functions */

	// Function /Script/FortniteUI.FortSetting.GetWarningRichText (Underlying native function: GetWarningRichText 0xa8b35ec)
	struct FText GetWarningRichText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSetting.GetDynamicDetails (Underlying native function: GetDynamicDetails 0xa8b3530)
	struct FText GetDynamicDetails(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSetting.GetDisplayNameVisibility (Underlying native function: GetDisplayNameVisibility 0x72d90e8)
	enum ESlateVisibility GetDisplayNameVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSetting.GetDisplayName (Underlying native function: GetDisplayName 0xa8b34bc)
	struct FText GetDisplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSetting.GetDevName (Underlying native function: GetDevName 0xa8b3238)
	struct FString GetDevName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortSetting.GetDescriptionRichText (Underlying native function: GetDescriptionRichText 0x8ea9db4)
	struct FText GetDescriptionRichText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

