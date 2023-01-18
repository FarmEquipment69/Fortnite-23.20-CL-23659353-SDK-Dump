// Class /Script/FortniteGame.FortMcpProfile
// Size: 0x180
class UFortMcpProfile : public UMcpProfile
{
	unsigned char unreflected_180[0x180]; 

	/* Functions */

	// Function /Script/FortniteGame.FortMcpProfile.RemoveGiftBox (Has no native function)
	void RemoveGiftBox(struct TArray<struct FString>& GiftBoxItemIds, struct FClientUrlContext& Context); // (0x00000002 | Net | NetReliable | NetRequest | Native | Event | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMcpProfile.MarkItemSeen (Has no native function)
	void MarkItemSeen(struct TArray<struct FString>& ItemIds, struct FClientUrlContext& Context); // (Final | Net | NetReliable | NetRequest | Native | Event | Private | HasOutParms)
};

