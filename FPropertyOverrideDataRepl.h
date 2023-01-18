// ScriptStruct /Script/FortniteGame.PropertyOverrideDataRepl
// Size: 0x140
struct FPropertyOverrideDataRepl : FFastArraySerializer
{
	struct FMulticastInlineDelegate ReplNotifier; // 0x108 (0x10)
	struct TArray<struct FPropertyOverrideRepl> PropertyOverridesReplCached; // 0x118 (0x10)
	struct TArray<class APropertyOverrideDataReplChunkActor*> ChunkActors; // 0x128 (0x10)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

