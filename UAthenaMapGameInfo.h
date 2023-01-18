// Class /Script/FortniteUI.AthenaMapGameInfo
// Size: 0x410
class UAthenaMapGameInfo : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0xd8]; // 0x2d0 (0xd8) 
	class UCommonTextBlock* TextPlaylistName; // 0x3a8 (0x8)
	unsigned char padding_3b0[0x60]; // 0x3b0 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMapGameInfo.OnExtensionWidgetCreated (Has no native function)
	void OnExtensionWidgetCreated(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& ExtensionWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMapGameInfo.HandleClientEnterVolume (Underlying native function: HandleClientEnterVolume 0xa5a2ebc)
	void HandleClientEnterVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)
};

