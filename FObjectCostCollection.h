// ScriptStruct /Script/FortniteGame.ObjectCostCollection
// Size: 0xa0
struct FObjectCostCollection
{
	struct TMap<uint32_t, struct FObjectIdentifier> HashToIdentifier; // 0x0 (0x50)
	struct TMap<struct FObjectIdentifier, struct FObjectCostData> ObjectIdentifiersToCostData; // 0x50 (0x50)
};

