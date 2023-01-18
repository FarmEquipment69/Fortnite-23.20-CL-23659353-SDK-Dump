// ScriptStruct /Script/FortniteGame.ActorComponentRecord
// Size: 0xb8
struct FActorComponentRecord
{
	struct FName ComponentName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UClass> ComponentClass; // 0x8 (0x28)
	struct TArray<unsigned char> ComponentData; // 0x30 (0x10)
	struct TArray<struct FSoftObjectPath> ComponentDataReferenceTable; // 0x40 (0x10)
	struct TArray<bool> ComponentDataHardReferences; // 0x50 (0x10)
	struct TMap<struct FString, struct FGuid> ComponentRecordPropertyToActorGuid; // 0x60 (0x50)
	uint32_t DataHash; // 0xb0 (0x4)
	uint16_t DataHeaderSize; // 0xb4 (0x2)
	unsigned char padding_b6[0x2]; // 0xb6 (0x2)
};

