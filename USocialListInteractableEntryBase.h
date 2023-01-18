// Class /Script/SocialUMG.SocialListInteractableEntryBase
// Size: 0x1460
class USocialListInteractableEntryBase : public USocialListEntryBase
{
	class UClass* ActionMenuClass; // 0x1448 (0x8)
	class UMenuAnchor* MenuAnchorActions; // 0x1450 (0x8)
	unsigned char padding_1458[0x8]; // 0x1458 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0x73f3ff8)
	void HandleMenuOpenChanged(bool& bIsMenuOpen); // (Final | Native | Private)

	// Function /Script/SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent (Underlying native function: HandleGetMenuContent 0x73f3f3c)
	class UUserWidget* HandleGetMenuContent(); // (Final | Native | Protected)
};

