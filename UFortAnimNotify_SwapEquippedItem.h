// Class /Script/FortniteGame.FortAnimNotify_SwapEquippedItem
// Size: 0x60
class UFortAnimNotify_SwapEquippedItem : public UAnimNotify
{
	struct FGuid SwapId; // 0x38 (0x10)
	struct TArray<struct FFortSwapItemAndVariantData> SwapData; // 0x48 (0x10)
	enum EFortAppliedSwapItemAndVariantState ForcedSwapState; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

