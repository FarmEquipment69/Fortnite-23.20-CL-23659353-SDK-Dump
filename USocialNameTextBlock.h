// Class /Script/SocialUMG.SocialNameTextBlock
// Size: 0x860
class USocialNameTextBlock : public UCommonRichTextBlock
{
	class USocialUser* SocialUser; // 0x838 (0x8)
	float MinDesiredSize; // 0x840 (0x4)
	float MaxDesiredSize; // 0x844 (0x4)
	bool bShowSecondName; // 0x848 (0x1)
	enum EPlatformIconDisplayRule PlatformIconDisplayRule; // 0x849 (0x1)
	bool bWrapToNextLine; // 0x84a (0x1)
	unsigned char unreflected_84b[0x1]; // 0x84b (0x1) 
	struct FColor SecondNameColor; // 0x84c (0x4)
	int SecondNameFontSize; // 0x850 (0x4)
	unsigned char padding_854[0xc]; // 0x854 (0xc)
};

