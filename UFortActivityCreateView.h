// Class /Script/DiscoveryBrowserUI.FortActivityCreateView
// Size: 0x5a0
class UFortActivityCreateView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	struct FName TabNameID; // 0x490 (0x4)
	unsigned char unreflected_494[0xc]; // 0x494 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0 (0xe0)
	class UCommonButtonBase* ButtonCreate; // 0x580 (0x8)
	unsigned char padding_588[0x18]; // 0x588 (0x18)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated (Has no native function)
	void OnCreativeActivityUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason (Underlying native function: GetInvalidCreativeActivityReason 0x7420e70)
	enum EFortInvalidActivityReason GetInvalidCreativeActivityReason(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

