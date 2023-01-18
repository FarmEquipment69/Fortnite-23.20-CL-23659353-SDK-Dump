// Class /Script/FortniteUI.FortMultiFriendActionMenu
// Size: 0x400
class UFortMultiFriendActionMenu : public USocialActionMenu
{
	class UCommonButtonBase* ButtonConfirm; // 0x3e8 (0x8)
	class UCommonButtonBase* ButtonDecline; // 0x3f0 (0x8)
	enum EMultiFriendAction Action; // 0x3f8 (0x1)
	unsigned char padding_3f9[0x7]; // 0x3f9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortMultiFriendActionMenu.OnActionUpdated (Has no native function)
	void OnActionUpdated(); // (Event | Protected | BlueprintEvent)
};

