// Class /Script/FortniteUI.FortServerInfoTileBase
// Size: 0x14a0
class UFortServerInfoTileBase : public UFortServerTileBase
{
	class UCommonTextBlock* TextPlayerCount; // 0x1478 (0x8)
	class UDynamicEntryBox* EntryBoxServerFriendList; // 0x1480 (0x8)
	class UCommonTextBlock* TextOwnerName; // 0x1488 (0x8)
	class UVerticalBox* VerticalBoxOwnership; // 0x1490 (0x8)
	unsigned char padding_1498[0x8]; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortServerInfoTileBase.RequestUpdateBackgroundImage (Has no native function)
	void RequestUpdateBackgroundImage(int& FriendListHash); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortServerInfoTileBase.OnOwnerNameUpdated (Has no native function)
	void OnOwnerNameUpdated(); // (Event | Protected | BlueprintEvent)
};

