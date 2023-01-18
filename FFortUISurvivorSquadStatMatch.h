// ScriptStruct /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
// Size: 0x4c0
struct FFortUISurvivorSquadStatMatch
{
	struct FFortMultiSizeBrush Icons; // 0x0 (0x480)
	struct FText MagnitudeText; // 0x480 (0x18)
	struct FText AttributeDisplayName; // 0x498 (0x18)
	int NumMembersMeetingCriteria; // 0x4b0 (0x4)
	int NumMembersRequired; // 0x4b4 (0x4)
	enum EFortUISurvivorSquadMatchType MatchType; // 0x4b8 (0x1)
	enum EFortBuffState PreviewEffect; // 0x4b9 (0x1)
	unsigned char padding_4ba[0x6]; // 0x4ba (0x6)
};

