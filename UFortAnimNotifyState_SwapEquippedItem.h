// Class /Script/FortniteGame.FortAnimNotifyState_SwapEquippedItem
// Size: 0x58
class UFortAnimNotifyState_SwapEquippedItem : public UAnimNotifyState
{
	struct FGuid SwapId; // 0x30 (0x10)
	struct TArray<struct FFortSwapItemAndVariantData> SwapData; // 0x40 (0x10)
	enum EFortAppliedSwapItemAndVariantState ForcedSwapState; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

