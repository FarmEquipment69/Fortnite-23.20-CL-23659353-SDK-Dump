// Class /Script/FortniteGame.ContextualMessageConfigCollection
// Size: 0xc0
class UContextualMessageConfigCollection : public UDataAsset
{
	bool bUsePerNPCContextualMessageLookup; // 0x30 (0x1)
	bool bLookupViaServiceProviderTag; // 0x31 (0x1)
	unsigned char unreflected_32[0x6]; // 0x32 (0x6) 
	struct TMap<struct FGameplayTag, struct FContextualMessageConfig> SpeakerEntryTagToConfig; // 0x38 (0x50)
	struct FContextualMessageConfig GeneralConfig; // 0x88 (0x38)
};

