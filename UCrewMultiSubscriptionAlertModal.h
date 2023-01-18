// Class /Script/CrewUI.CrewMultiSubscriptionAlertModal
// Size: 0x480
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UDynamicEntryBox* EntryBoxBulletPoints; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonOpenHowToURL; // 0x3b8 (0x8)
	class UCommonButtonBase* ButtonTextURL; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonDoNotRemind; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x3d0 (0x8)
	struct TArray<struct FText> BulletPoints; // 0x3d8 (0x10)
	struct TMap<enum EAppStore, struct FText> AppStorePlatformMapping; // 0x3e8 (0x50)
	struct FString HowToCancelURL; // 0x438 (0x10)
	unsigned char unreflected_448[0x20]; // 0x448 (0x20) 
	struct FText PlatformTextStyle; // 0x468 (0x18)

	/* Functions */

	// Function /Script/CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL (Has no native function)
	void OnSetHowToCancelURL(struct FString& MoreInfoUrl); // (Event | Protected | BlueprintEvent)
};

