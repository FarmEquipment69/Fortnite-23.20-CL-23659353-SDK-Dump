// Class /Script/FortniteUI.AthenaIGMPartyMemberWidget
// Size: 0x390
class UAthenaIGMPartyMemberWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0xd8]; // 0x290 (0xd8) 
	bool bIsLocalPlayerSlot; // 0x368 (0x1)
	bool bIsInGameSlot; // 0x369 (0x1)
	unsigned char unreflected_36a[0x6]; // 0x36a (0x6) 
	class UFortSocialAvatarIcon* AvatarIconWidget; // 0x370 (0x8)
	class USocialNameTextBlock* TextSocialName; // 0x378 (0x8)
	class UFortVoiceChatStatusIcon* VoiceIconStatus; // 0x380 (0x8)
	class UFortPartyMember* CachedPartyMember; // 0x388 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.OnWidgetReset (Has no native function)
	void OnWidgetReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.OnUserSet (Has no native function)
	void OnUserSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.OnNewReadiness (Has no native function)
	void OnNewReadiness(enum EGameReadiness& GameReadiness); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.OnNewLocation (Has no native function)
	void OnNewLocation(enum EFortPartyMemberLocation& NewLocation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.OnIsPartyLeaderChanged (Has no native function)
	void OnIsPartyLeaderChanged(bool& bIsPartyLeader); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.IsPlayingFortnite (Underlying native function: IsPlayingFortnite 0xa532074)
	bool IsPlayingFortnite(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.IsEmptySlot (Underlying native function: IsEmptySlot 0x2a31524)
	bool IsEmptySlot(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.GetIsLocalPlayerSlot (Underlying native function: GetIsLocalPlayerSlot 0xa530894)
	bool GetIsLocalPlayerSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.GetIsInGameSlot (Underlying native function: GetIsInGameSlot 0xa53087c)
	bool GetIsInGameSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaIGMPartyMemberWidget.BP_HandleExtensionWidgetCreated (Has no native function)
	void BPHandleExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

