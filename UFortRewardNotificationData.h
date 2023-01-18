// Class /Script/SaveTheWorldUI.FortRewardNotificationData
// Size: 0x30
class UFortRewardNotificationData : public UObject
{
	enum EFrontEndRewardType RewardType; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardNotificationData.GetIconBrush (Underlying native function: GetIconBrush 0x75beaf4)
	bool GetIconBrush(struct FSlateBrush& IconBrush, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Native | Public | HasOutParms | BlueprintCallable)
};

