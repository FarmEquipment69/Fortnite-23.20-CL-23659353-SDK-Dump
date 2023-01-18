// ScriptStruct /Script/FortniteGame.VictimGameplayInfoPayload
// Size: 0x140
struct FVictimGameplayInfoPayload
{
	struct TSet<enum EDeathCause> UCRNDeathCauses; // 0x0 (0x50)
	struct TSet<struct FString> UCRNVictimTags; // 0x50 (0x50)
	struct TSet<struct FString> UCRNKillerTags; // 0xa0 (0x50)
	struct TSet<struct FString> UCRNDeathTags; // 0xf0 (0x50)
};

