// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C
// Size: 0x14f8
class ULocalUserEntry_C : public UFortSocialEventRSVPLocalUserEntry
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1490 (0x8)
	class UWidgetAnimation* Hovered; // 0x1498 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x14a0 (0x8)
	class UFortMobileImage* FortMobileImageenforzer; // 0x14a8 (0x8)
	class UImage* ImageMicIcon; // 0x14b0 (0x8)
	class UBorder* LocalUserEntryBorder; // 0x14b8 (0x8)
	class UFortMobileImage* SettingsIcon; // 0x14c0 (0x8)
	struct FLinearColor Online; // 0x14c8 (0x10)
	struct FLinearColor Offline; // 0x14d8 (0x10)
	struct FLinearColor Away; // 0x14e8 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView (Has no native function)
	void HandleOnlineIndicatorView(enum ELocalUserOnlineStatus& InLocalUserOnlineStatus, enum ELocalUserOnlineStatus& TempbyteVariable, struct FLinearColor& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged (Has no native function)
	void OnOnlineStatusChanged(enum ELocalUserOnlineStatus& OnlineStatus); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry (Has no native function)
	void ExecuteUbergraphLocalUserEntry(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, enum ELocalUserOnlineStatus& K2NodeEventOnlineStatus); // (Final | 0x00008000)
};

