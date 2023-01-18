// Class /Script/CrewUI.CrewSeasonLaunchScreen
// Size: 0x4d8
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{
	unsigned char unreflected_3e8[0x38]; // 0x3e8 (0x38) 
	struct TWeakObjectPtr<class UClass> ResolveIssueModalClass; // 0x420 (0x28)
	class UBattlePassSeasonHeading* HeadingSeasonInfo; // 0x448 (0x8)
	class UCommonTextBlock* TextDescription; // 0x450 (0x8)
	class UCommonButtonBase* ButtonClaim; // 0x458 (0x8)
	class UCommonButtonBase* ButtonResolveIssue; // 0x460 (0x8)
	class UCommonButtonBase* ButtonGiftBattlePass; // 0x468 (0x8)
	class UCommonRichTextBlock* RichTextDisclaimer; // 0x470 (0x8)
	unsigned char padding_478[0x60]; // 0x478 (0x60)
};

