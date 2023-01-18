// Class /Script/FortniteGame.FortUIFeedbackBank
// Size: 0xd8
class UFortUIFeedbackBank : public UDataAsset
{
	struct TMap<struct FName, struct FFortUIFeedback> FeedbackEvents; // 0x30 (0x50)
	bool bIsAthenaData; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct TMap<struct FName, struct FFortUIFeedbackBlueprintOnly> BankDefinedFeedbackEvents; // 0x88 (0x50)
};

