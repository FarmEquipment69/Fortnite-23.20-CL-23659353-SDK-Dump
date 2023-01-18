// ScriptStruct /Script/FortniteGame.DevPartyMember
// Size: 0x1e0
struct FDevPartyMember
{
	struct FString ContextName; // 0x0 (0x10)
	struct FString Email; // 0x10 (0x10)
	struct FString Password; // 0x20 (0x10)
	struct FFortAthenaLoadout AthenaLoadout; // 0x30 (0x178)
	class UFortMontageItemDefinitionBase* Emote; // 0x1a8 (0x8)
	int SeasonLevel; // 0x1b0 (0x4)
	enum ECrossplayPreference CrossplayPreference; // 0x1b4 (0x1)
	unsigned char unreflected_1b5[0x3]; // 0x1b5 (0x3) 
	struct FString JsonPartyMemberData; // 0x1b8 (0x10)
	struct FString Platform; // 0x1c8 (0x10)
	enum ECommonInputType InputType; // 0x1d8 (0x1)
	unsigned char padding_1d9[0x7]; // 0x1d9 (0x7)
};

