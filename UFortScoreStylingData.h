// Class /Script/FortniteGame.FortScoreStylingData
// Size: 0x1c50
class UFortScoreStylingData : public UDataAsset
{
	struct FFortScoreStylingInfo ScoreStyles[0x6]; // 0x30 (0x4b0) (ARRAY) 

	/* Functions */

	// Function /Script/FortniteGame.FortScoreStylingData.GetScoreStylingData (Underlying native function: GetScoreStylingData 0x8f34aa4)
	static bool GetScoreStylingData(struct TEnumAsByte<EFortUIScoreType>& Rarity, struct FFortScoreStylingInfo& ScoreStylingInfo); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

