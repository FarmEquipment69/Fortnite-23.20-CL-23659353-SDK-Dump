// Class /Script/SocialUMG.SocialGroupListEntry
// Size: 0x1460
class USocialGroupListEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UClass* ActionMenuClass; // 0x1438 (0x8)
	class USocialGroupChannel* SocialGroup; // 0x1440 (0x8)
	class UTextBlock* TextGroupName; // 0x1448 (0x8)
	class UMenuAnchor* MenuAnchorActions; // 0x1450 (0x8)
	unsigned char padding_1458[0x8]; // 0x1458 (0x8)

	/* Functions */

	// Function /Script/SocialUMG.SocialGroupListEntry.HandleGetMenuContent (Underlying native function: HandleGetMenuContent 0x73f3f18)
	class UUserWidget* HandleGetMenuContent(); // (Final | Native | Protected)
};

