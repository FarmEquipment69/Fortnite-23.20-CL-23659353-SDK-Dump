// ScriptStruct /Script/FortniteGame.PartyMemberCosmeticLoadout
// Size: 0x168
struct FPartyMemberCosmeticLoadout
{
	struct TWeakObjectPtr<class UAthenaCharacterItemDefinition> CharacterDef; // 0x0 (0x28)
	struct FString CharacterEKey; // 0x28 (0x10)
	struct TWeakObjectPtr<class UAthenaBackpackItemDefinition> BackpackDef; // 0x38 (0x28)
	struct FString BackpackEKey; // 0x60 (0x10)
	struct TWeakObjectPtr<class UAthenaPickaxeItemDefinition> PickaxeDef; // 0x70 (0x28)
	struct FString PickaxeEKey; // 0x98 (0x10)
	struct TWeakObjectPtr<class UAthenaSkyDiveContrailItemDefinition> ContrailDef; // 0xa8 (0x28)
	struct FString ContrailEKey; // 0xd0 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> CosmeticVariants; // 0xe0 (0x10)
	struct TArray<struct FPartyMemberScratchEntry*> Scratchpad; // 0xf0 (0x10)
	struct TArray<struct FFortCosmeticStatEntry> CosmeticStats; // 0x100 (0x10)
	unsigned char padding_110[0x58]; // 0x110 (0x58)
};

